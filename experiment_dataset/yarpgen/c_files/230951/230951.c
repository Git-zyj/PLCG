/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (max((min(var_6, (max(1, 14783743390880607067)))), ((((min(2084459308, -1328896523549270311))) - -var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = (min((arr_2 [i_1]), -165));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_20 += (((((arr_8 [i_1] [i_1] [i_3]) ? var_18 : (arr_8 [i_1] [i_3] [i_2])))) != (1864573366596536407 / 4611686018427387904));
                        var_21 = (arr_13 [i_2] [i_1] [i_1] [i_1] [i_1]);
                        var_22 *= ((((((!1261436157) == ((24425 ? var_7 : 12))))) << ((min(1296773267, (13835058055282163689 < var_14))))));
                        arr_14 [9] [i_1] [i_2] [i_1] = (((((((-19695 ? 54467 : 1296773267)) && 1166583475)))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_23 = (max((((max(-81, var_0)) | (arr_12 [i_2] [i_2]))), ((18446744073709551609 ? (((arr_13 [i_2] [i_1] [i_1] [i_2] [i_2]) ? var_11 : (arr_8 [i_2] [i_4] [i_4]))) : ((min(1, (arr_4 [i_1]))))))));
                                var_24 = (min(1296773278, (max((((27240 ? 1 : -1486406995))), 10171753442594798887))));
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_2] = (((((((var_8 ? var_1 : var_3)) <= ((max(var_16, var_12)))))) << (var_8 + 4773098390006943071)));
                                var_25 = -10622;
                                var_26 = (((((min(9223372028264841216, 0))) || -17206)));
                            }
                        }
                    }
                    var_27 -= (min(((-(arr_18 [i_0] [i_0] [i_1] [i_1] [i_2]))), (min(var_12, (arr_17 [i_1] [i_1] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
