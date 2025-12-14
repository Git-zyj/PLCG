/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((((((var_14 ? var_7 : var_9))) ? 1 : (1 ^ var_13))) >= (((min(var_9, var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                arr_6 [i_1 + 4] [i_0 - 1] [i_0] |= max((((+(((arr_5 [i_0] [i_0] [i_0 - 2]) ? -22032 : var_8))))), (((((arr_3 [4]) ? 4794158167861723403 : 22032)) - (arr_0 [i_0 - 1] [i_0 - 1]))));
                arr_7 [3] [i_1 + 4] [3] = (var_12 ? (((min((((!(-9223372036854775807 - 1)))), -1)))) : ((18493 ? (arr_3 [i_0 - 2]) : (max(var_12, (arr_5 [i_0 + 1] [i_0 + 1] [2]))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    var_18 &= (~var_16);
                    var_19 = ((-(arr_0 [i_0 - 1] [i_0 - 1])));
                    arr_11 [i_1] [i_1] [1] [9] = (arr_3 [i_0 - 1]);
                }
                var_20 = (max(var_20, var_6));
            }
        }
    }
    #pragma endscop
}
