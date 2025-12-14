/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(var_7, var_2)) + 9223372036854775807)) << (((var_1 + 20) - 12))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_1 + 2] = ((arr_2 [i_0] [i_1] [12]) ? ((2046472168 ? 2248495128 : 2248495122)) : (((((max((arr_0 [i_0]), (arr_3 [i_0 - 1] [i_1])))) ? var_8 : var_2))));
                var_12 = 2672704556;
                var_13 ^= (!var_7);
                arr_5 [i_0 - 1] [5] [i_1] = (arr_1 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
