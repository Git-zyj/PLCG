/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (-(min(692936488, var_3)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((!((min((~1), (arr_0 [1]))))));
        var_14 *= (min((min(var_12, 1863108356)), ((((!92) ? 9 : (var_11 >= var_10))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = (min(var_15, 1));
                        var_16 &= (min((((1 ? var_12 : (~var_2)))), (arr_10 [i_0] [3] [i_2 + 3] [i_2 + 3])));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            arr_18 [i_4] [i_1] [7] [1] [i_4] = (((1 >= 1259226217718346998) ? (min((arr_2 [i_4]), (((arr_16 [13] [i_1] [i_2] [i_2 - 1]) + var_4)))) : (!var_9)));
                            var_17 = (((var_11 + 2147483647) >> (((~1) + 17))));
                        }
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            var_18 += (((arr_6 [i_0] [i_0] [i_2]) ? (((var_3 ? 1 : var_7))) : (~8388600)));
                            var_19 = var_5;
                            var_20 = var_5;
                            var_21 = ((!((min(((max(1, var_7))), (~var_5))))));
                        }

                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            var_22 = (!var_10);
                            var_23 ^= (86 / 1);
                            var_24 = var_0;
                            var_25 = var_8;
                            var_26 &= -var_10;
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_27 = (arr_27 [i_0] [1] [1] [i_2] [i_4] [i_4] [i_8]);
                            var_28 = ((((((((var_2 ? var_2 : 1))) ? (max((arr_0 [9]), -8388600)) : (!-9252)))) ? var_7 : (((~var_6) ? (((var_0 ? (arr_3 [i_0]) : (arr_5 [i_0] [i_1])))) : (min(var_0, 7445686220509099130))))));
                            arr_28 [i_1] [i_4] [i_2] [i_0] [i_1] = 0;
                            arr_29 [i_0] [i_0] [i_1] [i_0] = ((-(max(4294967290, ((~(arr_11 [i_4] [i_2] [i_1] [i_0])))))));
                        }
                        for (int i_9 = 3; i_9 < 19;i_9 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_2 + 3] [i_1] [i_1] [18] [i_9] = var_5;
                            var_29 = var_5;
                            var_30 = (max(var_30, (((min(1, 9129110837401425340))))));
                            arr_34 [i_1] [i_1] [i_1] = var_12;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            arr_39 [i_0] [i_0] [i_1] [i_0] [i_0] = var_4;
                            arr_40 [4] [i_1] [i_2] [i_4] [i_1] [i_1] [i_4] = (var_5 && -var_12);
                            var_31 = -46061;
                            var_32 = (~1);
                        }
                    }

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_33 = ((((((arr_30 [i_0] [i_0] [4] [i_11] [i_0]) ^ ((19649 ? 1 : -9129110837401425334))))) ? var_9 : (arr_6 [i_2] [9] [i_2])));
                        arr_43 [i_11] [i_1] [i_1] [i_0] = var_9;
                    }
                    var_34 &= (!-72360622);
                    var_35 = 1259226217718346998;
                    var_36 = (max(var_36, ((((var_7 ? ((arr_17 [i_2] [i_2] [i_1] [i_2] [i_1] [i_0] [i_0]) : (arr_5 [i_0] [i_2]))))))));
                }
            }
        }
        var_37 = (~var_9);
    }
    #pragma endscop
}
