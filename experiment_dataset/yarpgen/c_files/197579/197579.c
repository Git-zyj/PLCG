/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_1] = 16777208;
                    var_10 = (min((((((var_8 ? var_1 : (arr_5 [7] [4] [i_2])))) ? -2305843009213693952 : (~-1889868169))), 1));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_1] = ((((((max(65535, 12575)))) <= ((4294967272 >> (var_7 - 1190845187))))));
                        arr_12 [i_1] [i_2] [i_1] [i_1] = ((max(var_6, 1)));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [9] [i_1] [i_4] = (min(((((!(arr_4 [i_0] [i_1] [i_4]))) ? 1 : ((var_3 ? (arr_16 [i_0]) : var_0)))), ((min(var_2, (max(2147483648, var_8)))))));
                        var_11 = 33650;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_12 = (((4294967293 >= 1) > (arr_9 [i_0] [i_1 + 1] [i_2] [i_5])));
                        var_13 = (min(var_13, 13409));
                        var_14 += (((((var_7 ? (arr_18 [i_0] [i_0] [7] [i_0]) : var_0))) ? (arr_0 [i_0] [i_5]) : (arr_15 [i_1] [i_1 + 1] [i_0] [i_5])));
                        var_15 = (((arr_0 [i_1 - 1] [i_0]) ? (arr_0 [i_1 - 1] [i_1]) : (arr_0 [i_1 + 1] [i_2])));
                        var_16 = (-(arr_2 [i_0] [i_1] [i_0]));
                    }

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_23 [i_1] = ((!((min((arr_18 [i_0] [i_1] [i_1 - 1] [i_6]), ((var_3 ? 4294967295 : var_8)))))));
                        var_17 = (min((min(var_1, (max(var_0, (arr_9 [i_0] [i_0] [i_0] [i_0]))))), (((((max((arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), var_3))) ? (((arr_19 [i_0] [i_1] [i_2] [i_1] [i_0]) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_21 [i_0] [i_1] [i_2] [i_6]))) : (arr_21 [i_0] [i_1] [i_2] [i_6]))))));
                        var_18 = (max(var_18, (arr_22 [i_0] [i_1] [i_2] [10])));
                        arr_24 [i_0] [i_1] [i_6] = var_9;

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_27 [i_1] [i_2] [i_2] [i_2] [i_1 + 1] [i_1] [i_1] = (967591811671861105 && var_5);
                            var_19 = (!var_1);
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_20 *= -4040904513;
                            arr_30 [i_1] [i_1] = ((((min((var_2 || 15327892972718567298), ((!(arr_20 [i_1] [i_2])))))) >= var_8));
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 11;i_9 += 1)
                        {
                            arr_33 [i_0] [i_1] [i_2] [0] [i_9] [i_9] = ((((2843345899 ? 13510798882111488 : (arr_31 [i_9] [i_9] [i_6] [12] [i_1] [i_0])))) ? 10 : (arr_20 [i_1] [i_1]));
                            var_21 = 2251799805296640;
                            arr_34 [i_1] [i_6] [i_1] [i_1] = var_1;
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_22 = ((-46 <= (arr_28 [i_1] [i_1 - 1] [i_1] [i_1] [i_1])));
                        arr_37 [12] [i_1] = (arr_36 [1] [i_0] [i_2] [i_1]);
                        arr_38 [i_0] [i_1] [i_1] [i_1] [i_10] = var_1;
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = 1700965292;
                        arr_40 [i_0] [i_1] [i_2] [i_0] = (1312 + -3921204639);
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_23 = var_4;
                                var_24 += (!482328794668464067);
                                var_25 *= (max((max((var_6 || var_4), 39578)), 2147482624));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        var_26 = (((((((max(var_0, (arr_46 [i_13])))) ? ((var_5 ? 1 : var_7)) : (arr_48 [i_13])))) ? (((1 - -37) ? 0 : ((min((arr_46 [i_13]), (arr_48 [i_13])))))) : ((var_3 ? var_5 : (arr_47 [i_13])))));
        var_27 = ((823441314 ? var_2 : ((var_4 ? (((4039547757 ? 1 : 0))) : 2512316970))));
        arr_49 [i_13] = ((((min((max((arr_48 [i_13]), (arr_46 [i_13]))), 33488896))) > (~var_5)));
        arr_50 [i_13] &= (((((min((arr_47 [i_13]), var_9))) ? (~var_6) : 8589934584)));
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        arr_55 [i_14] = (arr_52 [i_14]);
        arr_56 [i_14] = (arr_48 [17]);
        var_28 += ((-((((((arr_53 [i_14]) >> (3374179460669026504 - 3374179460669026499)))) ? var_2 : 4502417212890634239))));
        var_29 = ((((((var_4 ? var_6 : var_5)) ? var_3 : (((max((arr_48 [i_14]), (arr_51 [i_14])))))))));
    }
    #pragma endscop
}
