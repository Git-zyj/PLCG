/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 >= (max(var_1, (~-30)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (!127);
        var_14 = var_11;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_0] [i_2] = var_0;
                    arr_12 [i_0] [1] = 1;
                    var_15 = -63;
                    var_16 = (((arr_8 [i_2 + 1] [i_0] [i_0] [i_2 + 1]) ? (arr_8 [i_2] [i_0] [i_0] [i_2 + 1]) : var_5));
                    var_17 = (((arr_10 [i_2 + 1] [i_1] [i_0]) ? -1301429035 : var_8));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_18 = ((var_5 ? (arr_5 [i_3]) : var_7));
        var_19 = (!1536882227);
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_20 = (max(var_20, ((((arr_2 [12]) + (arr_16 [i_4]))))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_24 [i_4] [i_5] = ((((126 ? 12607817846649269905 : 9080051233429650911)) + (((min((arr_20 [i_5 - 1] [i_5]), var_9))))));
                        var_21 = var_3;
                        var_22 ^= arr_14 [i_5 + 3] [i_5 + 2];
                    }
                }
            }
        }
        arr_25 [i_4] = ((-(min(var_7, (-63 + 85)))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {
        arr_30 [12] &= 217;

        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_23 *= 126;

            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                var_24 = ((var_4 ? (arr_27 [i_8 + 1] [i_8 - 1]) : (arr_27 [i_8 + 1] [i_8 - 1])));

                for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_25 = (min(var_25, (!var_8)));
                        var_26 = (max(var_26, (((3699615348 ? (arr_33 [i_9] [i_9] [i_10]) : var_4)))));
                        var_27 = ((-1 + 2147483647) >> (var_2 + 1692592318));
                        arr_40 [i_8] [i_9] [13] [6] [5] [i_8] = (((arr_37 [i_8] [9] [i_10] [i_8 - 1] [i_12]) % (arr_39 [11] [i_9] [i_9] [i_8 - 1] [i_8 - 1])));
                    }
                    var_28 -= ((~(arr_38 [i_10] [i_10])));
                }
                for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                {
                    var_29 = (arr_27 [i_8 - 1] [13]);
                    var_30 = ((arr_39 [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_8 + 1]) / 7848901447016084129);
                }
            }
            for (int i_14 = 1; i_14 < 19;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        var_31 = ((((((var_10 <= (arr_37 [i_8] [i_9] [i_16] [i_16] [i_9]))))) == (arr_45 [i_8] [i_8 + 1] [i_14 + 1] [i_15])));
                        arr_54 [7] [i_9] [16] [i_8] [i_16] = -1;
                        var_32 = ((14336 ^ (arr_42 [3] [i_14 + 1] [3] [i_8])));
                    }
                    arr_55 [i_8] [i_15] [i_14 + 1] = (((arr_50 [i_8 + 1] [i_14 + 1] [i_8] [i_8 - 1] [i_14] [i_8]) ? (arr_50 [i_8] [i_14 - 1] [i_14] [i_8 + 1] [8] [5]) : -39));
                    arr_56 [14] [8] [8] [i_9] &= (((arr_28 [i_14 + 1] [i_8 - 1]) / ((((arr_44 [i_8 + 1] [i_8 + 1] [i_8 + 1]) || var_0)))));
                    var_33 = (((arr_47 [i_8] [i_8 + 1] [i_8 + 1] [1] [i_14] [4]) ? (~var_7) : (var_10 + 1)));
                    var_34 = (((((var_8 ? (arr_41 [i_9] [i_14] [i_9] [3]) : (arr_36 [i_8])))) ? (((~(arr_34 [i_8])))) : ((1 ? var_5 : var_0))));
                }
                var_35 = (((arr_41 [i_9] [i_14] [i_9] [i_14]) ? var_9 : (arr_41 [i_8] [i_8 - 1] [i_14 - 1] [i_8])));
            }
            for (int i_17 = 1; i_17 < 17;i_17 += 1)
            {
                arr_60 [i_8] [i_8] [i_8] = (arr_45 [i_17 - 1] [i_17 + 3] [i_8 - 1] [i_8 - 1]);
                var_36 = (max(var_36, (((-(((arr_48 [i_8] [i_9] [i_17]) / var_6)))))));
                arr_61 [19] [i_8] [i_9] [i_17] = (((-127 - 1) ? -10 : (((arr_50 [i_17] [i_17] [i_17] [i_9] [i_9] [i_8]) - (arr_44 [i_8] [i_17] [i_9])))));
                var_37 = (~var_9);
            }
            var_38 = ((-141 ? (arr_38 [i_8] [i_8]) : (arr_28 [i_8 + 1] [i_8 - 1])));
            arr_62 [i_8] [i_8] [i_8] = ((655203587 ? (arr_58 [i_8 + 1] [i_9] [i_8 + 1] [i_8]) : (arr_58 [i_8] [i_8 - 1] [19] [i_8])));
            arr_63 [i_8] [12] = (((arr_27 [i_8 + 1] [i_8 + 1]) && var_5));
        }
        for (int i_18 = 1; i_18 < 17;i_18 += 1)
        {
            var_39 ^= var_10;
            var_40 = (((arr_35 [i_8] [7] [6]) ^ (arr_59 [i_18] [i_8] [5])));
        }
        arr_66 [i_8] = ((30571 ? 1873353956 : 13871893881899205975));
    }
    var_41 = (min(var_41, (((~((var_8 ? var_0 : ((var_11 ? var_6 : var_7)))))))));
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 24;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {
            {
                var_42 = (min(var_42, var_5));

                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    arr_73 [i_21] = (max(((min((arr_71 [i_21] [i_21] [i_20] [i_21]), (arr_71 [i_21] [i_19] [i_21] [i_21])))), ((var_0 ? var_3 : (arr_72 [i_19] [18] [i_21] [i_19])))));
                    arr_74 [i_21] = min(var_8, (((~var_0) ? (max(var_5, 0)) : var_8)));
                    var_43 = var_2;
                    var_44 = (max(((var_9 ? ((3890590486715455796 << (255 - 217))) : ((((!(arr_69 [i_19] [i_20] [i_21]))))))), (arr_68 [i_19] [i_20])));
                }
            }
        }
    }
    #pragma endscop
}
