/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (min((((((var_4 ? 68 : var_4))) ? 64 : var_8)), ((var_10 ? -var_9 : 1503581344))));
    var_19 = (min((((!(2231539171041828897 & 0)))), (max((min(var_4, var_16)), (min(14990480008224557987, 1))))));
    var_20 = var_16;
    var_21 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = (min(var_22, (min((~30), (max((arr_2 [12]), (arr_2 [8])))))));
                arr_5 [i_0] [i_1 + 1] = (min((((4209591852 ? 1 : 5861))), 4016981048));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_23 = ((min((max(203740204, var_0)), (((3035243928216445605 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_11 [i_0])))))));
                                arr_15 [i_0] [i_0] [1] [17] [i_4 - 1] = (min((max(var_0, 1486402534)), ((max((((arr_10 [i_3] [i_0] [i_0] [i_0]) ? 3013081232 : var_14)), ((min(var_14, var_10))))))));
                                arr_16 [i_1 + 3] [i_0] [i_4] = ((max(12974222863922438303, -2147483646)));
                                var_24 ^= (((arr_6 [i_4 + 1] [i_2]) ? (((~(arr_10 [1] [i_0] [i_1] [i_1 + 1])))) : (max(var_16, (arr_13 [i_0] [i_2] [i_0 + 1] [i_0 + 2] [i_0])))));
                            }
                        }
                    }
                }
                var_25 = (min(var_25, ((min(var_13, 13741)))));
            }
        }
    }
    #pragma endscop
}
