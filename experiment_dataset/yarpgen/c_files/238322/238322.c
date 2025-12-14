/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 *= ((-(var_0 == var_8)));
                arr_5 [i_0] = (max((max(1109368483631880139, 3244)), var_6));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_13 = (2147483647 ^ 9439);
                    var_14 = (max(var_14, (((~(~100))))));
                    arr_8 [i_0] [i_1] [i_2] = (min(-var_1, (~var_1)));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    arr_11 [i_0] [i_3] = (var_9 && 62286);
                    arr_12 [i_0] = 1124030534;
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_15 = -187;
                    arr_15 [i_0] [1] [i_0] = -var_6;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] = (-(max((var_0 - 2352422068), (!var_3))));
                                arr_21 [i_1] [1] [1] [i_1] [1] [i_1] [i_1] = (min(var_0, (min(62284, 17420342080809781600))));
                                var_16 = 62272;
                                var_17 |= (max((!17420342080809781621), (min(3247, var_1))));
                            }
                        }
                    }
                    arr_22 [i_1] [i_1] [i_1] [i_0] = ((min(3238, (max(2223404480079959793, var_6)))));

                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        arr_26 [i_7] = -56097;
                        var_18 = (min((min(3622786969520351981, 9439)), var_5));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_0] [2] [11] = ((-(var_2 + var_4)));
                        var_19 = ((-920665831 ? 11 : 17420342080809781600));

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_20 = var_7;
                            arr_33 [i_9] [i_9] = (!var_10);
                            arr_34 [i_9] [i_9] [i_9] [i_8] = 4787297440193588442;
                            var_21 &= 207;
                            arr_35 [i_9] [i_9] = ((4787297440193588447 ? 1 : 39155));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_22 = 3966885683754195147;
                            var_23 = (~(~-3242921291591288316));
                            var_24 = (min(var_24, 60044));
                            var_25 = 3249;
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_0] = 3242921291591288341;
                        var_26 |= (~3242921291591288316);
                        arr_42 [i_11] [i_4] [i_1] [i_0] = ((var_2 ? var_1 : var_1));
                        var_27 = (((~var_1) || 3966885683754195125));
                    }
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        arr_47 [6] = (~(~7537566757476061371));
                        arr_48 [i_0] [i_1] [i_12] [i_13] = (max((39886 > 3966885683754195133), 7537566757476061372));
                    }
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        var_28 |= (551079788 >= 115);
                        var_29 = (!var_0);
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        var_30 = (~var_10);
                        arr_55 [i_0] [i_1] [i_12] [i_12] [i_0] = ((((72 ? -24414126 : -7537566757476061365)) <= (!-81)));
                        var_31 = ((var_7 ? var_0 : 1064141028));
                        arr_56 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 17340;
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 15;i_17 += 1)
                        {
                            {
                                arr_62 [i_0] [i_0] [i_1] [i_1] [i_12] [i_1] [i_1] = -708110469859196606;
                                var_32 = ((~(max(377018097, var_0))));
                            }
                        }
                    }
                    var_33 = var_4;
                }
                arr_63 [i_0] [i_1] = 377018098;
            }
        }
    }
    var_34 &= (((((((((3242921291591288342 ? -3242921291591288340 : -5405943764756750526))) ? -338230604 : (!122))) + 2147483647)) << (((min(var_3, (~var_6))) - 81452858991402840))));
    var_35 = ((((max(17420342080809781621, (!var_11)))) ? (~var_4) : var_5));
    #pragma endscop
}
