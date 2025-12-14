/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((arr_1 [6]) ^ (arr_0 [8]))))));
        var_20 = 32736;
        var_21 = var_9;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_22 = (arr_0 [i_2]);
            var_23 = (max((((32736 || (((137422176256 ? 128 : (arr_3 [i_2] [i_1]))))))), 32787));
        }
        var_24 = (((-5447145048301733860 + 9223372036854775807) << (1536 - 1536)));
    }

    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_25 |= ((((((!var_6) ^ (arr_2 [i_3 + 2])))) == ((4294967283 ? -9223372036854775785 : 939524096))));
            var_26 = (max(var_8, (arr_12 [i_3] [i_3 + 2])));
            arr_16 [i_3] = arr_11 [i_4] [i_3];
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_23 [i_3] [i_4] [i_3] = ((!((((arr_4 [i_3 + 3]) - (arr_4 [i_3 + 3]))))));
                        var_27 = (~var_13);
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            var_28 = (arr_2 [i_3 + 3]);
            var_29 = (min(var_29, ((max(((max((arr_13 [i_7 - 1] [i_7] [i_7 - 1]), (arr_2 [1])))), (((!(arr_10 [10])))))))));
        }
        arr_26 [i_3] = -32787;
        arr_27 [i_3 + 1] [i_3] = (arr_18 [i_3 + 2] [i_3] [i_3] [i_3]);

        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_30 = (((((1 / ((32748 ? (arr_24 [i_8] [i_3]) : -5383055590394312516))))) ? (arr_3 [i_3] [i_3]) : ((12100045948143384961 ? (((max((arr_19 [i_3] [i_8] [i_8] [i_3 - 1] [i_3] [i_3 - 1]), var_10)))) : (arr_18 [i_3] [i_8] [11] [11])))));
            var_31 = (arr_17 [i_3] [i_3] [i_3] [i_3]);
            var_32 |= ((((var_6 ? var_16 : (arr_11 [i_3 + 2] [i_3]))) * (-24 * 0)));
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
        {
            var_33 = -1;
            var_34 = (((arr_22 [i_9] [5] [7] [5]) ? 32778 : (arr_15 [i_3] [i_9])));
            var_35 += ((((max(1318902097087790912, var_16))) ? -9223372036854775785 : (((arr_22 [i_3] [i_3] [i_3 + 2] [i_9]) ? 0 : (arr_22 [i_3 + 1] [i_3 + 1] [i_3 + 2] [i_3])))));
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    {
                        var_36 = 32778;
                        var_37 = ((32757 ? 251658240 : 3));
                        arr_40 [i_3] [i_9] = (((arr_29 [i_3 - 1]) ? (arr_35 [i_3 + 2] [i_11] [i_3]) : (max(4, 1))));
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            arr_43 [i_12] [8] [i_3 + 2] |= ((-((var_4 ? (arr_31 [i_3 + 1] [i_3 + 2] [i_3 + 1]) : (arr_31 [i_3 - 1] [i_3] [i_3])))));
            arr_44 [i_3] = ((!((max(var_7, ((var_9 ? 106 : (arr_3 [i_12] [i_3 + 3]))))))));
            arr_45 [i_3] = var_5;
        }
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        arr_48 [i_13] [i_13] = ((((((arr_37 [i_13] [i_13] [1] [i_13] [i_13]) * (arr_37 [i_13] [i_13] [i_13] [i_13] [i_13])))) ? (max((arr_7 [i_13] [i_13] [i_13]), (arr_12 [i_13] [i_13]))) : var_12));
        var_38 = (((arr_7 [i_13] [i_13] [i_13]) / (arr_39 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])));
        var_39 = (max(14445, var_7));
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_40 = ((-(arr_21 [i_14] [i_14] [i_14] [i_14])));
        var_41 = (arr_9 [i_14] [i_14]);
        arr_53 [i_14] [i_14] = ((-17372 + (((((arr_4 [i_14]) ? (arr_52 [i_14] [i_14]) : (arr_22 [i_14] [i_14] [i_14] [i_14]))) - (((1 - (arr_18 [i_14] [i_14] [i_14] [i_14]))))))));
    }
    #pragma endscop
}
