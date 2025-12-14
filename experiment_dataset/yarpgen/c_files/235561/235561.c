/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = var_3;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_21 = (min((((!(arr_5 [i_1] [i_1])))), (min((arr_5 [i_1] [i_1]), var_6))));
            arr_6 [i_1] = (((arr_1 [i_1]) + (((+(min((arr_3 [i_1] [i_0]), var_6)))))));
            arr_7 [i_0] |= (((min(0, -1514))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_22 = (min(var_22, var_0));
            arr_12 [i_0] [i_2] = ((!((min(1, (arr_3 [i_0] [i_2]))))));
            arr_13 [i_0] [i_2] = 2097024;
            var_23 = (min((arr_9 [i_0]), (arr_9 [i_0])));
        }

        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_18 [i_3] [i_0] = (((((arr_4 [i_0] [i_0]) * 86)) % var_9));
            arr_19 [i_3] [i_3] [i_3] = (-2634 ? 5318121374725518781 : 29433);
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_23 [i_0] [i_0] [i_4] &= var_17;
            arr_24 [i_0] [i_4] [i_4] = ((((((arr_3 [i_0] [i_0]) << (((arr_3 [i_4] [i_0]) - 539271001))))) - ((((2856625271165293604 + (arr_9 [i_0]))) + (min(1, (arr_1 [i_0])))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_24 = max(((~(7 / var_11))), (((((max(var_16, 1))) | (~1)))));
                            arr_33 [i_5] = (min((-613 + -1), ((((arr_28 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0]) + var_6)))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_36 [i_0] [i_8] [i_8] = ((~((-8 ? (arr_10 [i_0]) : (arr_29 [i_8] [i_8] [i_8] [i_8] [i_8])))));
            arr_37 [i_8] = (((((~var_4) & var_2)) & (((max((arr_29 [i_8] [i_8] [i_8] [i_0] [i_0]), 0)) | -19151))));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_25 = 7;
                var_26 = -19;
            }
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                var_27 = (((arr_40 [i_0] [i_8] [i_10]) & var_4));

                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    arr_45 [i_0] [i_8] [i_10] [i_8] [i_8] = (min(((max(var_18, (!var_8)))), (max(((min((arr_29 [i_0] [i_0] [i_8] [i_10] [i_8]), (arr_2 [i_11] [i_0])))), -540530997685016672))));
                    arr_46 [i_0] [i_0] [i_10] [i_8] [i_11] = (max((arr_35 [i_0] [i_8] [i_11]), (arr_26 [i_8] [i_8] [i_8] [i_8])));

                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_28 = (min(var_28, (((!(((~(arr_28 [i_0] [i_0] [i_10] [i_0] [i_11] [i_12])))))))));
                        arr_49 [i_8] = (--167);
                        arr_50 [i_0] [i_8] [i_0] [i_0] [i_0] = (((max(-15, (arr_25 [i_11]))) >= ((min((arr_14 [i_10] [i_0]), 2147483641)))));
                        arr_51 [i_8] [i_8] [i_8] [i_0] [i_12] = 2147483641;
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_29 = (min(var_29, var_1));
                        arr_56 [i_0] [i_8] [i_10] [i_11] [i_13] = (-6343952768617626125 - 255);
                    }
                    var_30 += (min((min(-var_1, (min(23, (arr_17 [i_0] [i_8] [i_10]))))), -var_12));
                    var_31 += var_16;
                }
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                var_32 *= (min(((((((arr_48 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 0 : var_1)) == (arr_52 [i_0] [i_0] [i_14] [i_0] [i_0] [i_0] [i_0])))), (((arr_30 [i_0] [i_0] [i_0] [i_0]) / -13391))));
                arr_60 [i_8] [i_8] [i_8] = -1;
            }
        }
        var_33 -= var_13;
        var_34 = (min(var_34, ((max((arr_15 [i_0] [i_0] [i_0]), ((-(arr_15 [i_0] [i_0] [i_0]))))))));
        arr_61 [i_0] [i_0] = (((var_0 ? var_3 : (max(var_13, var_4)))));
    }
    for (int i_15 = 1; i_15 < 24;i_15 += 1)
    {
        var_35 ^= ((-6 && (1852088704 >> 1)));
        var_36 += var_9;
    }
    var_37 = (max(var_37, ((min(((min((min(-1, var_8)), var_13))), 20)))));
    #pragma endscop
}
