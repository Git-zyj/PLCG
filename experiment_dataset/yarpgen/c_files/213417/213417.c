/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = ((((((max(179, var_10))) > 0)) ? ((var_7 ? var_0 : 0)) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = 13803372649297787770;
                var_17 = (max(var_17, (((var_6 ? ((-3954 ? 70 : 3830171903)) : var_6)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = ((((((max((arr_11 [1] [i_1] [i_2 - 1] [i_3] [1]), var_6))) ? ((var_11 ? 4328124687053941453 : 1312118864)) : (!4294967273))) | ((max(-10368, 4294967273)))));
                                arr_14 [i_1] = var_6;
                                var_19 = ((~((-var_12 ? ((max(-17749, (arr_10 [i_0] [10] [i_2 + 2] [1] [10])))) : var_3))));
                                var_20 *= (min(4294967264, (!4294967273)));
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_1] = (arr_9 [i_0] [i_0] [i_1]);
                var_21 ^= max(-1655188113, ((~((4294967273 | (arr_11 [2] [i_1] [i_0] [8] [i_0]))))));
            }
        }
    }
    var_22 = (max(var_9, var_13));
    #pragma endscop
}
