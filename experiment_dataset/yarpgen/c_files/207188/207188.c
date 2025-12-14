/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = 2147483641;
                    var_15 ^= (((!(arr_2 [i_1 - 1] [i_1 - 1]))) ? (!var_2) : 18446744073709551595);
                }
            }
        }
    }
    var_16 = (1 ? -25477 : var_1);

    /* vectorizable */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        arr_9 [i_3] = ((-(arr_8 [i_3 + 1])));
        var_17 = ((101 ? 555506096 : 1));
    }
    #pragma endscop
}
