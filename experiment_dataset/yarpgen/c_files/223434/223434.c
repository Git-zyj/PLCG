/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 67108864;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_16 = ((-116 + 2147483647) >> (((arr_1 [i_0 - 1] [i_0 - 2]) - 153)));
        var_17 -= 8148891258320072818;
        var_18 = 1;
    }

    /* vectorizable */
    for (int i_1 = 4; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_19 = 32767;
        var_20 = var_5;
        var_21 = (((arr_3 [i_1 - 1] [13]) << (-var_11 - 8780885594171083466)));
        arr_5 [i_1 + 1] [i_1 + 1] = (arr_3 [i_1 - 4] [i_1 + 1]);
        var_22 = (-(arr_4 [i_1 + 2]));
    }
    for (int i_2 = 4; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_23 = var_4;
        var_24 = ((!(((-((0 ? var_2 : var_6)))))));
        arr_8 [i_2] = -67108864;
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                var_25 = (max(var_10, (~var_3)));
                arr_20 [i_5 - 2] [i_5] [i_5] [i_3] = (min((min((arr_17 [3] [i_5 - 1]), (arr_2 [i_5 - 1]))), ((((arr_19 [12] [i_4]) > (arr_12 [i_3]))))));
                var_26 = ((!(arr_18 [i_3] [i_4] [i_5])));
            }
            var_27 = ((~(arr_3 [i_3] [i_4])));
            arr_21 [i_3] [i_3] [12] = ((!((((((-25 ? 229 : 8148891258320072818))) ? (((((arr_11 [i_4]) && 211)))) : (var_3 + 18042827771091745790))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_28 = (max(var_28, (((((((arr_9 [i_6]) ? (arr_12 [i_3]) : 31))) && (((-(arr_19 [i_6] [i_3])))))))));

            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                var_29 += (((arr_10 [i_7 - 1] [i_7 - 3]) ? var_6 : (((17 ? 27 : (arr_2 [i_7 + 2]))))));
                var_30 = (min(var_30, (((-((-67108883 ? 1 : -1)))))));
                var_31 -= ((((var_14 ? (arr_7 [i_6]) : 0)) > (!223)));
                var_32 |= ((~(arr_15 [i_7 - 3] [i_7 - 2] [i_7 + 1])));

                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_6] = (arr_25 [i_8 + 2] [i_7 + 2] [i_7 - 2]);
                        var_33 = (((arr_23 [i_6]) ? 6098579336127785964 : (arr_3 [i_7 + 2] [i_6])));
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_34 = (min(var_34, var_1));
                        arr_37 [i_6] [i_10] [i_8 - 1] [i_6] [i_6] [i_6] [i_6] = (arr_30 [i_6] [i_10] [i_6] [i_6] [i_8 + 2] [i_8 + 2] [i_8 + 2]);
                    }
                    var_35 = (798402365 ? 15331105257811138704 : ((((!(arr_4 [i_7]))))));

                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {
                        arr_41 [i_6] = ((var_1 ? (((arr_24 [i_3] [i_6]) ? 68 : 4294967268)) : (((((arr_7 [4]) || var_14))))));
                        var_36 += (arr_39 [i_11 + 1] [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_11 - 1]);
                        var_37 = -4703180494566115878;
                    }
                    var_38 = ((((var_0 ^ (arr_34 [i_3])))) ? var_5 : (arr_22 [i_3]));
                }
            }
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_39 = (((arr_18 [i_6] [i_6] [i_6]) ? (arr_18 [i_6] [i_6] [i_6]) : (arr_18 [i_6] [i_6] [i_6])));
                var_40 -= var_9;
            }
            var_41 ^= ((~((var_1 ? (arr_16 [i_3]) : var_10))));
        }
        for (int i_13 = 3; i_13 < 14;i_13 += 1)
        {
            arr_46 [i_13 - 1] [14] [i_13] = ((((32767 ? (((((arr_26 [i_3] [i_3] [i_13 - 3]) == var_9)))) : ((~(arr_45 [i_3] [i_3])))))) ? (((arr_26 [i_13 - 3] [i_3] [i_13 - 2]) / (arr_15 [i_3] [i_13 + 1] [i_13 - 1]))) : ((min(53831, (arr_45 [i_3] [i_3])))));
            var_42 = ((max((arr_25 [i_13 + 1] [i_13 - 2] [i_13]), 1)));
            var_43 = 850423712239849767;
            arr_47 [i_3] [i_3] [1] = ((!((-var_4 && (arr_16 [i_3])))));
            var_44 |= (arr_11 [i_13 - 1]);
        }
        /* vectorizable */
        for (int i_14 = 1; i_14 < 14;i_14 += 1)
        {
            var_45 = (min(var_45, (arr_50 [1] [i_14 + 1])));
            var_46 = (((((-23903 ? 4294967278 : (arr_27 [i_3] [i_3] [i_14] [i_14 - 1])))) ? (((-64 + 2147483647) << (var_2 - 1))) : 1077997935));
            var_47 = ((-(arr_43 [i_14] [i_14] [i_14 - 1] [i_14 + 1])));
            var_48 = ((var_7 ? ((268435424 ? var_11 : -1)) : (arr_19 [i_3] [i_14])));
        }

        for (int i_15 = 3; i_15 < 13;i_15 += 1)
        {
            arr_55 [i_15] = -var_3;
            var_49 = 18446744073709551615;
        }
        var_50 = (!(arr_3 [9] [8]));
    }
    #pragma endscop
}
