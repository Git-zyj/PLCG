/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (((max(var_12, (~var_4))) - var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (max(var_18, (~var_10)));
        var_19 ^= (((var_8 > var_10) << (var_14 + 107)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [1] = -8030238018069163816;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_20 = (max(var_20, ((((arr_7 [i_1] [i_1] [i_1]) ? 15 : var_9)))));
            arr_9 [i_2] = (((arr_4 [i_1]) || ((((arr_3 [i_2] [i_1]) ? var_10 : (arr_4 [4]))))));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_21 *= (4294967295 + 255);
                            var_22 = arr_14 [i_5] [i_4] [10] [1];
                        }
                    }
                }
                var_23 = ((arr_13 [i_1] [i_2] [i_2] [i_2]) + (arr_3 [i_1] [i_1]));
                var_24 ^= (!241);
                var_25 = (((arr_0 [8] [i_1]) ^ (arr_15 [i_1] [i_2] [i_2] [i_3] [4] [i_3])));
            }

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_20 [i_1] [i_2] [i_6] = (arr_2 [7] [i_1]);
                var_26 = (max(var_26, (var_9 <= 255)));
                arr_21 [i_6] = arr_18 [i_1] [3] [6] [i_1];
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_27 += (((arr_10 [i_1] [i_1]) || (arr_14 [i_1] [i_7] [i_1] [i_1])));
            arr_25 [i_1] [5] = (arr_3 [i_1] [i_7]);
            var_28 = (arr_19 [i_1] [13] [i_1]);
        }

        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            var_29 = (min(var_29, (((((var_14 == (arr_28 [i_1]))) && ((((!627615594) ? (((arr_10 [i_1] [i_1]) ? var_6 : var_11)) : var_1))))))));
            var_30 -= (max((arr_1 [i_8]), (max(253, (arr_12 [i_1] [i_1])))));
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 3; i_10 < 11;i_10 += 1)
            {
                arr_35 [i_10] [i_10] [i_10] [i_1] = arr_18 [i_1] [5] [i_9] [i_10 - 1];
                var_31 = (max(var_31, (((((!255) && (83 != 90)))))));
                var_32 -= (((((arr_8 [i_10 + 3] [i_10 - 3] [i_10 + 2]) / var_15)) % (((-110 ? (arr_22 [i_10 - 2] [i_9] [i_1]) : (var_15 >= var_13))))));
                var_33 *= (arr_27 [i_1]);
                var_34 = (min(((((!var_2) ? (max(240, (arr_32 [i_1] [i_1] [i_1] [i_1]))) : (arr_11 [i_1] [i_9] [i_10])))), (((arr_6 [i_1] [6] [5]) * (((arr_8 [i_1] [i_1] [i_1]) ? (arr_8 [i_10] [i_9] [i_1]) : 7499364229498984817))))));
            }
            var_35 -= (max(((max(74, ((~(arr_14 [i_9] [i_1] [i_1] [11])))))), (((arr_6 [i_1] [i_9] [i_9]) ^ (arr_17 [i_1])))));
            arr_36 [i_1] &= var_1;
            var_36 &= (arr_4 [i_9]);
            arr_37 [13] [i_9] [13] = (arr_19 [i_1] [i_9] [i_9]);
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_37 += ((((((var_16 ^ var_9) % (arr_38 [i_1])))) && (arr_34 [i_1] [i_11])));
                var_38 = var_8;
                var_39 ^= (((((((min(171, 40))) * 70))) / 3375915518));
            }
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_40 = ((-101 % (((arr_34 [i_1] [i_1]) ? (arr_16 [7] [i_15 - 2] [i_15 + 1] [i_15 + 2] [i_15 - 2] [i_15 + 3]) : 2))));
                            var_41 = 229;
                            var_42 = (min(var_42, ((((28 % var_2) << (((arr_31 [i_11] [3] [12]) - 8017507221356396494)))))));
                        }
                    }
                }
                arr_51 [i_13] [i_1] [i_1] [14] |= 94;
                arr_52 [i_1] [i_11] [9] [i_13] = (((((54 ? 255 : 919051777))) == var_7));
            }
            var_43 -= ((82 <= ((((max(var_1, var_9))) ? (arr_22 [i_1] [i_1] [i_11]) : 10947379844210566798))));
            var_44 &= ((((((arr_28 [i_1]) + 2152344298))) ? (arr_49 [i_1] [i_1] [i_1] [5] [i_1]) : (((arr_43 [i_1]) ? (arr_1 [i_11]) : ((((arr_4 [i_1]) || var_5)))))));
            var_45 += (min((((-((max(255, (arr_16 [i_1] [1] [i_1] [i_1] [i_1] [9]))))))), (max(((max((arr_16 [i_1] [i_11] [i_11] [2] [i_11] [i_11]), (arr_27 [i_1])))), (arr_40 [i_1])))));
            arr_53 [i_1] = ((((min((arr_27 [i_11]), (arr_27 [i_1])))) || (((var_0 ? var_9 : (arr_27 [i_11]))))));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
        {
            arr_56 [i_1] [i_16] [i_16] = ((var_14 ? (arr_3 [i_1] [10]) : var_0));
            arr_57 [i_16] = var_16;
            var_46 = (max(var_46, (~3336597946)));
            arr_58 [i_1] = (((10947379844210566813 ^ 86) ? var_3 : var_2));
        }
        arr_59 [9] = ((((max((((arr_50 [i_1] [i_1] [i_1] [i_1] [10]) ? 244 : (arr_26 [i_1] [i_1] [i_1]))), (arr_14 [i_1] [12] [i_1] [0])))) ? var_10 : (arr_54 [4] [i_1] [10])));
        var_47 = var_10;
    }
    #pragma endscop
}
