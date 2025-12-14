/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_13 += ((~(arr_1 [i_0])));
        var_14 = var_6;
        var_15 = (min((arr_0 [i_0]), ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                var_16 = (max(var_16, ((((arr_3 [i_2 + 1] [i_2 + 1] [0]) >> (((arr_4 [i_2] [i_2 + 1] [i_2]) - 80)))))));
                var_17 = (max(var_17, (arr_5 [i_0] [i_0] [i_0] [i_0])));
            }
            var_18 = (arr_4 [i_1 + 1] [i_1] [i_1 + 1]);
            var_19 ^= (arr_1 [i_1 + 1]);

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_8 [10] [i_1] [i_0] = var_4;
                var_20 ^= ((!(arr_5 [i_0] [i_0] [i_1] [i_3])));
                var_21 = (min(var_21, (((var_1 ? (arr_3 [i_3] [i_1 - 2] [i_0]) : (arr_6 [i_0]))))));
            }
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                arr_11 [i_0] [i_0] [i_0] = (arr_9 [i_1 + 1] [i_4 - 2]);

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_14 [i_0] [i_5] [i_5] = (arr_1 [i_4 - 1]);
                    var_22 &= (arr_10 [i_1] [8] [i_1 - 2]);
                }
                arr_15 [i_0] [i_0] = ((~(arr_1 [i_0])));
                var_23 = (max(var_23, (((arr_12 [1] [i_4 - 3] [1] [i_4]) == (arr_7 [i_0] [i_1 - 2] [i_4] [i_4 + 1])))));
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_24 *= ((!((((arr_0 [i_0]) % 142)))));
                    var_25 += (((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 + 1]) ? 107 : (arr_12 [i_1 + 1] [i_1] [i_1] [i_1])));
                }

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_25 [i_0] [i_1] [i_0] [i_8] &= (108 | 1);
                    var_26 &= (((arr_9 [i_1 - 1] [i_1]) >= var_12));
                    var_27 = (max(var_27, 217));
                }
                var_28 |= (arr_3 [i_1 - 1] [i_1 - 1] [i_6]);
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_29 ^= arr_23 [0] [i_0] [i_0] [i_0];
                var_30 *= (arr_13 [i_0] [i_1] [8]);
                arr_28 [i_0] [i_0] [i_1 - 2] [i_9] = (arr_10 [i_0] [i_1] [i_0]);
                arr_29 [i_9] = (16382 == -92);
            }
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            arr_33 [i_10] [i_0] = ((((min((((arr_12 [i_0] [i_10] [i_10] [i_10]) & 115)), (((!(arr_21 [i_10]))))))) + (((var_5 ? var_10 : (arr_31 [i_10]))))));
            arr_34 [i_10] = (max((arr_26 [i_0] [7] [i_10]), (arr_13 [i_0] [i_0] [i_10])));
        }
        var_31 = (max(var_31, 0));
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
    {
        arr_37 [i_11] = (arr_24 [i_11] [i_11] [i_11]);

        for (int i_12 = 3; i_12 < 10;i_12 += 1) /* same iter space */
        {
            arr_41 [i_11] [i_11] [i_12 + 1] = ((~(arr_9 [i_11] [i_11])));
            arr_42 [i_11] = ((~(max(((127 - (arr_3 [i_11] [1] [i_12]))), ((((-127 - 1) > 0)))))));
            arr_43 [i_11] [1] = (((arr_20 [i_12] [i_12] [i_12] [i_12 - 2]) != -105));
        }
        for (int i_13 = 3; i_13 < 10;i_13 += 1) /* same iter space */
        {
            var_32 = (min(var_32, (((((min((!255), 107))) ? (arr_17 [i_13] [i_11]) : (arr_32 [i_13 - 3] [i_13 - 2]))))));
            var_33 = ((-((((arr_45 [i_13 + 1]) && (arr_5 [i_11] [i_13 - 1] [i_13 - 2] [i_13]))))));
            var_34 ^= ((!(((((max((arr_3 [i_11] [i_11] [i_11]), 1))) << (arr_7 [i_13 - 1] [i_13 - 3] [i_13 - 3] [i_13 - 3]))))));
            arr_46 [i_11] [i_11] = ((((((min((arr_39 [i_13] [i_11] [i_11]), (arr_30 [i_13] [i_11])))) && (arr_30 [i_11] [i_11]))) ? ((min(3016736297, 111))) : (min((((arr_26 [i_11] [i_11] [i_13 - 2]) ? (arr_22 [i_11] [i_11]) : var_1)), (var_11 > 0)))));

            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_35 = (((((-(arr_49 [i_13 - 1] [i_11] [i_13 - 2])))) ? var_8 : (max((arr_2 [9] [i_13 - 1] [i_13]), ((min((arr_45 [i_14]), (arr_6 [4]))))))));
                arr_50 [i_11] [i_11] [i_11] = ((((min((arr_0 [i_13 - 2]), (arr_0 [i_13 - 2])))) == (arr_0 [i_13 - 3])));
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_36 = (max(var_36, (((~((-(min((arr_51 [i_15] [i_13] [1] [i_11]), (arr_38 [8] [i_13 + 1]))))))))));
                var_37 ^= (((((273367704 & (((min(var_8, (arr_5 [i_11] [i_13 - 2] [1] [i_15])))))))) ? ((((max((arr_22 [i_15] [i_11]), -8255656743954865960)) > (((var_0 ? (arr_9 [i_13 - 2] [i_13]) : var_8)))))) : (((((198 ? (arr_17 [i_11] [i_15]) : (arr_31 [i_11]))) == (arr_49 [i_11] [8] [i_15]))))));
            }
        }

        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_38 = (max(var_38, 1));
            var_39 -= ((((var_7 * (var_9 == 1))) < 245));
            var_40 = (var_3 * 60);
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 3; i_17 < 15;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            {
                var_41 -= ((8418344006896257748 ? 41109 : 15));
                arr_61 [i_17] [i_17] [i_17] = (((!var_3) / ((max(115, 0)))));
            }
        }
    }
    var_42 = (max(var_42, ((((var_0 % 1) ^ (20 && 217))))));
    #pragma endscop
}
