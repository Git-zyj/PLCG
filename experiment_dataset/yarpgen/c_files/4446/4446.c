/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 = (min(var_18, (((((min((arr_0 [i_0 - 1]), var_5))) || var_10)))));
        var_19 *= (((arr_0 [i_0]) ? ((-32 ? (min(var_12, -252892906)) : (min(var_14, var_2)))) : 16553));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 4; i_2 < 16;i_2 += 1)
        {
            arr_7 [i_1] [10] [i_2 - 2] &= ((arr_5 [i_1] [4] [i_2]) ? (((16553 ? 16553 : 48982))) : (((!((max(var_5, (arr_6 [16] [i_2]))))))));

            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                arr_11 [i_2] = var_17;
                var_20 |= var_11;
            }
        }
        arr_12 [i_1] [i_1] = ((-0 ^ ((((var_10 <= (arr_10 [1] [i_1] [i_1] [i_1])))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_21 = (((!-679266451) ? (~62988) : var_5));
        var_22 ^= (((var_15 << (var_12 - 48982))));
        arr_15 [i_4] = ((var_11 ? (arr_5 [i_4] [i_4] [i_4]) : 0));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_23 = (((((arr_4 [i_4] [i_4]) >> (((arr_2 [i_4] [i_4]) - 28067)))) & var_3));

                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_24 += 1035261248;
                            var_25 = (!1679196877);
                            var_26 = (((((!(arr_4 [i_4] [i_4])))) << 0));
                        }
                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            arr_29 [i_4] = var_17;
                            var_27 = ((-var_12 ? var_10 : -1617578628));
                            var_28 = var_7;
                            var_29 = ((1 ? var_8 : var_2));
                            var_30 = (((((var_4 ? 8581384861084830061 : var_10))) ? 1617578630 : (~2914076287)));
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_31 = (~var_13);
                            var_32 -= var_16;
                            var_33 = var_17;
                        }
                        arr_32 [i_4] [i_4] = ((77 ? 54919 : 8581384861084830061));
                        var_34 -= ((62999 << (var_5 - 4142173064)));
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        var_35 = (arr_33 [i_11] [i_6] [i_5] [i_4]);
                        var_36 = (min(var_36, 2548));
                    }
                    var_37 = 47137;
                    arr_36 [i_4] [i_5] [i_4] [i_6] = (~7);
                }
            }
        }
        arr_37 [i_4] = ((var_14 ? var_12 : var_1));
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_38 += var_3;
        arr_40 [i_12] = (((((((min(var_1, var_5))) ? (min(var_9, -1405917266)) : var_11))) ? (min((var_5 * var_10), (arr_39 [i_12]))) : (((max((arr_39 [i_12]), var_1))))));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            {
                var_39 = (max(var_39, (((!(((((~(arr_1 [i_14]))) >> (((((-127 - 1) ? 10617 : (arr_39 [i_13]))) - 10596))))))))));
                var_40 = ((!((((var_9 ^ var_17) ^ (0 & 1925842861))))));

                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    arr_49 [i_13] [i_13] [i_13] [i_13] = (min((((!248) ? (arr_44 [i_13] [i_14]) : (!var_7))), 25000));
                    arr_50 [i_13] [i_14] [i_14] = ((((min(1, 48983))) ? (((min(var_7, 248)))) : (var_4 + var_11)));
                }

                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {

                        for (int i_18 = 0; i_18 < 19;i_18 += 1)
                        {
                            var_41 = var_15;
                            arr_60 [i_13] [i_17] [i_13] [i_13] [i_13] [i_13] [i_13] = (arr_46 [i_17] [i_17] [i_17]);
                            var_42 = ((((((~var_5) | (~252)))) ? ((((((var_7 ? var_12 : 249)) >= (arr_39 [i_13]))))) : 264877144));
                        }
                        arr_61 [i_13] [i_14] [i_16] [i_17] = var_17;
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 18;i_20 += 1)
                        {
                            {
                                var_43 += ((+(max((!var_16), (((arr_43 [i_16]) ? var_11 : 127))))));
                                var_44 *= ((((min(var_5, ((1 ? var_17 : (arr_43 [i_16])))))) ? (min(54919, 1)) : (((((((arr_0 [i_19]) ? 5 : (arr_45 [i_16] [i_16] [i_16])))) ? (arr_57 [i_13] [i_13] [i_13]) : var_0)))));
                            }
                        }
                    }
                }
                for (int i_21 = 4; i_21 < 16;i_21 += 1)
                {
                    arr_73 [i_13] [i_14] [i_13] = var_11;
                    /* LoopNest 2 */
                    for (int i_22 = 3; i_22 < 18;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 19;i_23 += 1)
                        {
                            {
                                var_45 &= var_0;
                                var_46 -= 4685;
                                var_47 = (max(((((arr_43 [i_13]) != ((((arr_42 [i_21] [i_13]) >> (33671 - 33665))))))), (((1505609868 ^ 59772) ^ 41874))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_24 = 1; i_24 < 16;i_24 += 1)
                {
                    for (int i_25 = 1; i_25 < 16;i_25 += 1)
                    {
                        {
                            var_48 = (max(var_48, (((((((var_16 ? 1 : (arr_57 [i_25] [i_24] [i_14]))) > (arr_77 [i_13] [i_13] [i_25] [0] [i_25 - 1]))) ? (max((var_6 / var_17), (min(0, -1405917266)))) : var_1)))));
                            arr_85 [i_13] = (((1 == 35220) ? var_13 : 1103964601798301436));
                            var_49 = ((var_1 ? (arr_58 [i_13] [i_13] [i_14] [i_24] [i_25]) : var_7));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
