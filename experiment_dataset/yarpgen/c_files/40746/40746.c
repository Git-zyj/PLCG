/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_1;
    var_12 -= (-109 | -122);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((min(-3996, 127))) ? ((min(var_5, -109))) : var_6));
                arr_6 [i_1] = (max((var_6 > -52459), var_4));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] = ((0 ? ((var_4 ? 15418227789177180075 : var_6)) : ((min(((1 ? var_10 : var_3)), -2109198840)))));
                    arr_11 [i_0] = -var_3;
                }

                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_13 += -2583916056007785016;
                        var_14 = 9223372036854775807;
                        arr_18 [i_0] [i_1] [i_3] [i_3] = -2583916056007785005;
                    }
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        arr_21 [i_5] [i_3] [i_3] [i_1] [i_3] [i_0] = ((((var_0 ? var_5 : 11411295614338444358))) ? ((min((min(var_7, var_0)), var_10))) : var_0);

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_24 [i_0] [i_3] [i_3] [i_5] [i_5] = -120;
                            arr_25 [i_3] [i_5] [i_3] = ((4003172685763583486 ? 121 : 687724706));
                            var_15 -= (max((max(var_7, var_7)), var_7));
                            arr_26 [i_0] [i_0] [i_0] [i_3] [i_0] = ((-109 ? -2583916056007785013 : -35));
                        }
                        var_16 |= (min(((-431909596 ? var_5 : ((var_8 ? var_0 : 0)))), (var_7 <= var_10)));
                        var_17 = ((~(-56 | -125)));
                        arr_27 [i_0] [i_3] [i_0] = (min(((var_9 ? 126 : 6672256840286348993)), (((var_4 ? 13093 : -90)))));
                    }
                    var_18 = (min(var_18, (((((((var_10 ? 13 : var_2)) ^ 9223372036854775807)) / var_2)))));
                    var_19 *= (!7644479784807023239);
                    var_20 = ((max(-var_7, (max(var_1, -1508846116201094573)))));
                }
                for (int i_7 = 3; i_7 < 24;i_7 += 1)
                {
                    arr_31 [i_7] = var_4;
                    arr_32 [i_7] [i_0] |= ((10802264288902528389 ? 1 : ((((var_5 ? var_4 : 51)) / 32))));
                    arr_33 [i_0] [i_0] = var_9;
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    arr_36 [i_8] [i_1] [i_0] = var_8;
                    arr_37 [i_0] [i_1] [i_8] [i_8] = ((-2147483642 ? (~var_0) : var_6));
                }
            }
        }
    }
    #pragma endscop
}
