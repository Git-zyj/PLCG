/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1;
    var_19 = var_0;
    var_20 = ((var_12 || ((1 && ((min(1, var_13)))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] |= ((!((((arr_0 [i_0 - 1]) ? var_7 : var_0)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] = var_12;
                                var_21 = ((1101806053 < ((((min(1, 1)) ? (var_6 + 29) : 22276)))));
                            }
                        }
                    }
                    var_22 = ((((arr_12 [i_0] [i_0] [i_1] [i_1] [i_2]) || 8388608)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_1] [i_5] [i_6] = var_13;
                                var_23 |= (((max((arr_0 [i_0 - 1]), (arr_7 [i_1] [i_1] [i_1 - 1]))) > (((arr_0 [i_0 + 1]) & 1))));
                                var_24 *= (max((arr_16 [i_6]), (((!(!-19))))));
                            }
                        }
                    }
                }
            }
        }
        var_25 = ((!(((((max(-27, 1)))) == (max(2194728288256, 3974170548))))));
    }
    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = ((((max(0, 13548))) > ((((arr_23 [i_7 - 1]) == 12)))));
        var_26 = 65526;
        var_27 += ((65517 / (max(4294967293, (arr_21 [14])))));
        var_28 = -3210451016643627570;
    }
    #pragma endscop
}
