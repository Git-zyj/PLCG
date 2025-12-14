/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 -= (1 * -1);
                    var_20 = (min(var_20, ((min((((((var_12 ? 21 : -6968793389103964521))) ? 1 : ((max(0, 1))))), -var_1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((max((((-32767 - 1) ? 0 : var_4)), (((((min(-1, -8184))) != 10))))))));
                                var_22 *= (-1879048192 - 105);
                                var_23 += ((var_3 ? ((((~0) ? (var_18 | 60) : (~245)))) : var_7));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_24 = (min(var_24, (((~(~173))))));
                        var_25 -= ((-25191 || (((10 ? 0 : 62)))));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_26 = (min(var_26, ((((min(0, 32757)))))));
                            var_27 = (min(var_27, 4294967293));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_28 |= var_0;
                            var_29 -= (245 ^ -1);
                        }
                        var_30 += ((0 % (((~((0 ? 96 : 245)))))));
                    }
                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        var_31 = (min(var_31, ((min(0, (max(-1685489253354986174, (((var_18 ? var_4 : 242))))))))));
                        var_32 += 247;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_33 = (min(var_33, -1725061318));
                        arr_24 [i_0] [i_0] [i_0] [1] [i_0] [i_0] |= 1;
                        var_34 |= (!var_13);
                    }

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_35 |= ((-(min(1, 1879048207))));
                        var_36 = (min(var_36, (((((62 ? var_16 : (-2147483647 - 1)))) || 0))));
                        var_37 = (min(var_37, ((((0 == 1) == 19)))));
                        var_38 += -1022377068;
                    }
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_12 = 4; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                        {
                            var_39 = (min(var_39, (2147483647 >= 4108466545)));
                            var_40 = (min(var_40, (~8189)));
                        }
                        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                        {
                            var_41 = (min(var_41, (((183 ? (1 || 1022377068) : -32762)))));
                            var_42 |= ((1 ? (min(-32768, 177)) : ((min((max(67, 21)), 196)))));
                            var_43 += (max((!var_0), (min(196, ((198 ? 1 : 2202866997525817465))))));
                        }
                        var_44 = (min(var_44, ((((!32757) == -1725061318)))));

                        for (int i_17 = 0; i_17 < 19;i_17 += 1)
                        {
                            var_45 = (max(var_45, (1 ^ 62)));
                            var_46 = (min(var_46, 2147483647));
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            var_47 &= -1;
                            arr_51 [i_11] [1] [i_13 - 1] [i_14] [i_18] |= (-32767 - 1);
                            var_48 &= (!79);
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            var_49 += 32750;
                            var_50 = (min(var_50, 4040773833));
                        }
                        arr_54 [1] [i_13 - 1] [16] [1] |= max((var_1 || 983040), 605143796473943482);
                    }
                }
            }
        }
        var_51 &= (max((!7), ((-1 ? 1725061318 : (1725061317 > var_7)))));

        for (int i_20 = 1; i_20 < 17;i_20 += 1)
        {

            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {
                var_52 = (min(var_52, (-127 - 1)));

                for (int i_22 = 2; i_22 < 16;i_22 += 1)
                {
                    var_53 |= (((-94 + 2147483647) << (((-23628 == ((255 ? (-2147483647 - 1) : 3081438354)))))));
                    var_54 -= ((1 ? (((((0 ? 779052890 : -1725061318))) ? 1213528922 : -45)) : (-97 / 816370336)));
                    var_55 = (min(var_55, ((!(169 && -99)))));

                    for (int i_23 = 0; i_23 < 19;i_23 += 1) /* same iter space */
                    {
                        var_56 |= (((71 ? -32760 : 0)));
                        var_57 = (min(var_57, var_13));
                    }
                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 19;i_24 += 1) /* same iter space */
                    {
                        var_58 *= (1 >> 0);
                        var_59 += (1 || 1);
                    }
                    for (int i_25 = 3; i_25 < 18;i_25 += 1) /* same iter space */
                    {
                        var_60 = (min(var_60, (((1 ? (-62 * -28432) : 1)))));
                        arr_69 [i_11] [i_20] [i_20] [16] [i_22 - 2] |= (916706534 || -812869437);
                        var_61 -= ((((((-2030202740 ? 1 : 21031)))) ? 16 : (-2147483647 - 1)));
                        var_62 += ((-((87 ? -75 : -120))));
                    }
                    for (int i_26 = 3; i_26 < 18;i_26 += 1) /* same iter space */
                    {
                        var_63 -= var_14;
                        var_64 = (min(var_64, ((((2147482624 == ((227 ? 60 : var_17))))))));
                    }
                }
                var_65 += (((-98925272 - 7) + 118));
            }
            var_66 = (max(var_66, ((max((((-127 - 1) - (1 >= var_17))), ((~(((1 > (-2147483647 - 1)))))))))));
            var_67 *= 2147483647;
        }
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
    {
        var_68 = (min(var_68, ((((106 & -108) ? 255 : ((var_10 ? 9223372036854775807 : 86)))))));
        var_69 += (-61 && 1);
        /* LoopNest 2 */
        for (int i_28 = 1; i_28 < 1;i_28 += 1)
        {
            for (int i_29 = 0; i_29 < 1;i_29 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_30 = 0; i_30 < 1;i_30 += 1)
                    {
                        for (int i_31 = 0; i_31 < 0;i_31 += 1)
                        {
                            {
                                var_70 |= (var_2 % -42);
                                var_71 += ((251 ^ (~60)));
                                var_72 *= 1;
                            }
                        }
                    }
                    var_73 = (max(var_73, (((7 ? var_10 : 126)))));
                    var_74 = (min(var_74, 2147483632));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_32 = 4; i_32 < 17;i_32 += 1)
        {
            for (int i_33 = 0; i_33 < 19;i_33 += 1)
            {
                {
                    var_75 = (min(var_75, (~0)));
                    arr_88 [i_27] [i_33] [i_33] [i_33] |= (!var_3);
                    /* LoopNest 2 */
                    for (int i_34 = 3; i_34 < 16;i_34 += 1)
                    {
                        for (int i_35 = 1; i_35 < 1;i_35 += 1)
                        {
                            {
                                var_76 = (min(var_76, ((-1 == ((-399507032353691128 ? 52286 : 1))))));
                                var_77 += ((2844467766 ? -32757 : 9223372036854775807));
                                var_78 *= var_15;
                                var_79 = (min(var_79, (~1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_80 = (max(var_80, ((((var_10 ? (max(-14, var_0) : (~-1736192738))))))));
    #pragma endscop
}
