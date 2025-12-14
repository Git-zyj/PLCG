/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_11));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_21 = (max(17335, var_2));
        var_22 = (max(var_22, ((((max(((max(-102, 48201))), var_0)) < (~6144))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 &= ((max((max(var_16, var_11), (((17354 ? var_3 : 16851)))))));
                                var_24 = (min(var_24, (((((((51516 / 44185) ? ((536870910 ? var_5 : var_10)) : (max(var_10, 268435456))))) ? var_9 : (((min(var_18, var_17)))))))));
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_4] = (max(51516, 767165751438177414));
                                arr_16 [i_1] [i_3] [i_1] [i_1] [i_1] = 56754;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0 - 1] [i_0 - 2] [0] [i_0 + 2] &= (((!(!var_8))));

                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            var_25 = (((max(var_12, var_0)) > (~var_5)));
                            var_26 = (max((((-5812785353382477113 < var_4) ? ((var_17 << (var_5 - 64337))) : var_1)), ((((max(134, var_7))) ? 56746 : var_9))));
                            var_27 += ((((((var_16 ? var_2 : 34126)))) ? (((4237068531898187327 & 403001026886411446) - (!var_9))) : (~-87)));
                            arr_25 [i_1] [i_1] [i_1] [i_0] = (((var_4 > var_5) < ((max(var_0, var_8)))));
                        }
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            var_28 = (min(var_28, (((108 ? (min(11224923135395792059, (~28))) : ((((!(((18109540428467313298 >> (2353707063255536963 - 2353707063255536944)))))))))))));
                            arr_28 [11] [i_1] [i_2] [i_5] [15] = (var_1 > 40);
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_32 [8] [8] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2] |= (!1);
                            var_29 = (min(var_29, (((~(min((~var_7), var_4)))))));
                        }
                        var_30 = (min(0, -var_7));
                    }

                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_31 += ((17228842115689437113 ? 805306368 : -247907601041881472));
                        var_32 = (min(var_32, ((((((-((min(var_19, var_17)))))) - (--310258270))))));
                    }
                    var_33 = ((((~(min(-6145, 1217901958020114515)))) >= (!15)));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_34 = (min(var_34, 0));
        var_35 = ((((max(11103, 1))) ? (((max(4654623906623510344, var_5)))) : (!var_1)));
        var_36 = min(((max((min(1897, -2353707063255536963)), -27342))), ((~((4654623906623510344 ? 1217901958020114502 : var_19)))));
    }
    var_37 += ((!((!(((var_10 ? 122 : 42703)))))));
    var_38 = ((!(!var_6)));
    var_39 = var_11;
    #pragma endscop
}
