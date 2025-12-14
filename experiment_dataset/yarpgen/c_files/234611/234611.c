/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 = (((((-8456 != (-32767 - 1)))) | ((max(var_7, (arr_0 [i_0]))))));
        var_11 = (~10122754658662985511);
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_12 = (min(var_12, var_3));
            arr_8 [i_1] [i_2] |= (((((!((((arr_3 [i_1]) ? var_1 : var_9)))))) != ((((arr_0 [i_2]) - var_8)))));
        }
        arr_9 [i_1] = (max((((var_9 >> ((((var_9 ? var_8 : (arr_7 [i_1] [i_1] [2]))) - 19276))))), (~var_3)));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_13 = var_3;
        arr_12 [i_3] = ((((((arr_11 [i_3] [i_3]) ? (-32752 ^ var_1) : var_0))) ? ((((((arr_11 [i_3] [i_3]) ? (arr_11 [10] [10]) : var_8))) ? ((((var_0 || (arr_10 [i_3] [i_3]))))) : (arr_10 [i_3] [i_3]))) : ((((arr_11 [1] [i_3]) + (arr_11 [i_3] [i_3]))))));
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_14 = (((((((max(129, 144)))) | (min((arr_11 [i_3] [i_3]), (arr_16 [3] [3] [i_6]))))) ^ (var_4 && 24)));
                        var_15 = (max(var_15, (8311274859995175068 / -26152)));
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_16 = (!var_1);
        var_17 = ((+((max((arr_20 [14]), (arr_17 [i_7] [i_7] [i_7] [7]))))));
    }
    for (int i_8 = 4; i_8 < 19;i_8 += 1)
    {
        var_18 = ((((((var_1 ? var_1 : var_4)) * ((((arr_24 [i_8]) & var_9)))))) ? var_5 : (arr_25 [i_8]));

        /* vectorizable */
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            var_19 = (((((arr_24 [9]) ? var_4 : 26263)) >> (((var_9 / var_1) - 113))));
            arr_28 [i_8] [i_8] = (i_8 % 2 == zero) ? (((var_2 << (((arr_27 [i_8] [i_8 + 2]) - 17507))))) : (((var_2 << (((((arr_27 [i_8] [i_8 + 2]) - 17507)) + 8728)))));

            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {

                for (int i_11 = 1; i_11 < 21;i_11 += 1)
                {
                    arr_34 [i_9] [i_8] [i_10 + 2] [3] [i_10 + 2] [i_10 - 1] = (((arr_27 [i_8] [i_11 + 1]) ? (arr_23 [i_8 - 1]) : var_8));

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        arr_39 [i_8] = (((arr_38 [i_8] [i_9] [i_10] [i_11 - 1] [i_12]) >> (var_5 - 39530)));
                        var_20 -= var_6;
                        var_21 += (((((var_1 ? (arr_23 [i_8]) : var_0))) ? (var_7 | var_8) : var_3));
                    }

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_22 = (var_9 - (arr_25 [i_8]));
                        var_23 = (arr_37 [i_8] [i_9 - 2] [i_10 - 1] [i_11 - 1] [i_11] [i_13] [i_13]);
                    }
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {

                    for (int i_15 = 1; i_15 < 20;i_15 += 1) /* same iter space */
                    {
                        var_24 = (arr_27 [i_8] [i_8 + 1]);
                        var_25 = (!-var_9);
                    }
                    for (int i_16 = 1; i_16 < 20;i_16 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, ((((var_0 / (arr_44 [i_8] [i_9 - 1] [i_10] [i_14] [14] [i_14])))))));
                        var_27 = (arr_37 [i_8] [i_8 - 2] [i_8 - 2] [i_9 + 1] [1] [i_9 - 1] [i_10 + 2]);
                        var_28 = ((-(arr_36 [i_8] [i_16 - 1] [i_16 + 2] [i_10 - 1] [i_9 - 1] [i_8])));
                    }
                    arr_51 [i_8 - 1] [9] [i_8] [i_8] = ((~(arr_37 [i_8] [i_8 - 2] [i_9 + 2] [i_9 + 1] [i_10] [i_14] [i_14])));
                }
                for (int i_17 = 4; i_17 < 20;i_17 += 1)
                {
                    var_29 = (max(var_29, var_5));
                    var_30 = ((-32748 & (arr_41 [8] [8] [i_10 + 1] [i_8] [i_8 + 1] [i_9 - 2])));
                }
                for (int i_18 = 1; i_18 < 18;i_18 += 1)
                {
                    var_31 += (((((var_2 ? (arr_52 [i_8]) : var_0))) || ((((arr_48 [i_8] [i_8] [i_9] [i_10 - 1] [i_10 + 2] [i_8]) | (arr_53 [2] [i_10] [i_9] [2]))))));
                    arr_56 [i_8] [3] [i_10 + 2] [i_18 - 1] = (((arr_41 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_8] [i_10] [i_10 + 1]) + var_3));

                    for (int i_19 = 1; i_19 < 19;i_19 += 1)
                    {
                        arr_60 [i_8] = var_8;
                        var_32 = (min(var_32, var_3));
                    }
                }

                for (int i_20 = 1; i_20 < 18;i_20 += 1)
                {
                    var_33 += (((arr_30 [i_9 + 2] [i_10 - 1] [i_10] [i_20 + 1]) + ((((arr_59 [i_20]) != var_1)))));
                    arr_63 [i_8 + 3] [i_9 + 2] [i_8] = (arr_36 [i_10] [i_10] [i_10] [i_10] [i_10] [i_8]);
                }
            }
        }
        var_34 = ((((arr_47 [i_8] [i_8 - 1] [i_8 + 1] [i_8]) ? (arr_47 [i_8 - 2] [i_8 + 1] [i_8 + 1] [6]) : (arr_47 [i_8] [13] [i_8 + 1] [19]))));
    }
    var_35 += var_5;
    #pragma endscop
}
