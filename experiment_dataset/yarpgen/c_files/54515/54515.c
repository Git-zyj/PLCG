/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (max(var_9, ((max(var_14, var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (min((-2147483647 - 1), 23359));
                    arr_7 [16] [16] [i_0] = (arr_1 [i_1]);
                }
            }
        }
    }
    var_19 *= 18446744073709551615;
    #pragma endscop
}
