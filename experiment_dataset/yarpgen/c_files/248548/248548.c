/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (max(var_5, var_9));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 6;i_0 += 1) /* same iter space */
    {
        var_11 += ((~(arr_0 [i_0 + 4])));
        arr_2 [i_0] [i_0] = ((~(arr_0 [i_0 - 1])));

        for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = 0;
            var_12 = -1219;
        }
        for (int i_2 = 1; i_2 < 7;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_13 ^= (+-4294967295);
                        arr_15 [i_0] [i_2] [i_2] [i_2 + 3] = ((-(arr_14 [i_0] [i_0] [i_0] [i_0 - 2] [i_0])));
                        arr_16 [i_0] [i_0] [i_3] [i_0] [i_3] [i_4] = (4294967295 & var_6);
                        arr_17 [i_0 - 2] [i_0] [i_0] [i_3] [i_3] [i_3] = ((var_8 ? var_9 : (~var_9)));
                    }
                }
            }
            var_14 += 4294967288;
            var_15 = (min(var_15, (arr_10 [i_2] [i_2] [i_0 - 3])));
            var_16 = -var_9;
        }
        for (int i_5 = 1; i_5 < 7;i_5 += 1) /* same iter space */
        {
            var_17 = var_9;
            var_18 = (arr_14 [i_5] [i_5] [i_5] [i_5] [i_0]);
            arr_20 [i_0] [i_5 + 3] = var_6;
        }
        for (int i_6 = 1; i_6 < 7;i_6 += 1) /* same iter space */
        {
            var_19 = ((!(arr_3 [i_0] [i_0] [1])));
            var_20 = (~var_9);

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_21 = (min(var_21, (((~(!var_3))))));
                arr_26 [4] [i_7] [i_7] [i_7] &= (arr_12 [i_0]);
                arr_27 [i_0] [i_6] [i_7] = ((arr_25 [i_0 - 1] [i_6 + 1] [2] [i_0 + 4]) ? (arr_7 [i_6] [i_6 + 1]) : (arr_12 [i_0]));
            }
            for (int i_8 = 1; i_8 < 7;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = (((arr_25 [i_0] [i_0 - 2] [i_6 + 1] [i_8 - 1]) ? var_9 : 3));
                    var_22 = var_4;
                    arr_34 [i_0 + 1] [i_0] [i_8] [i_0 + 1] = 1;
                    var_23 = (var_4 << (arr_30 [i_0] [i_0 + 1] [i_0]));
                }
                arr_35 [i_0] = (!(((arr_10 [i_0] [i_0] [i_8]) && 1214)));
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_24 = ((!(arr_7 [i_6] [i_6 - 1])));
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 8;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_44 [8] [i_0] [i_10] [i_0] [i_0 + 1] = ((((var_7 >> (arr_37 [i_0 + 3] [i_0 + 3] [i_0] [i_11]))) - var_7));
                            var_25 = var_8;
                        }
                    }
                }
                var_26 = (arr_1 [i_0]);
            }
            arr_45 [i_0] = (((((14867671103223662442 != (arr_23 [i_6 + 1] [i_6] [i_0])))) != (((-1 == (arr_14 [i_0 - 4] [i_0] [i_0] [i_6] [i_0]))))));
            var_27 = ((!(((arr_31 [i_0]) && (arr_25 [i_0] [i_0 + 1] [i_0 + 1] [i_6 + 3])))));
        }
    }
    for (int i_13 = 4; i_13 < 6;i_13 += 1) /* same iter space */
    {
        arr_49 [i_13] = (~var_9);
        arr_50 [i_13] = (((((var_9 + (arr_43 [i_13 - 1] [i_13 - 2] [i_13 + 1] [i_13 + 2] [i_13 - 1])))) ? (arr_32 [i_13 - 1] [i_13 - 2] [i_13 + 1]) : ((min(var_8, (arr_43 [i_13 - 1] [i_13 - 2] [i_13 + 1] [i_13 + 2] [i_13 - 1]))))));
        var_28 = ((((-(arr_7 [i_13 + 2] [i_13 + 2]))) - ((((var_4 < (arr_11 [i_13 + 3] [i_13 + 3] [i_13] [i_13 - 2] [i_13])))))));

        for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
        {
            arr_54 [i_14] [i_13] = ((-(((arr_48 [i_13 + 1]) ? ((-(arr_47 [i_14]))) : (((arr_48 [i_14]) ? -922642425 : var_8))))));
            var_29 = (min(var_29, (~919970616407531452)));
            arr_55 [i_14] &= 4294967293;
        }
        for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
        {
            var_30 = 1;
            var_31 = (min(var_31, var_8));
            var_32 = 17526773457302020164;
        }
        var_33 = (arr_48 [3]);
    }
    for (int i_16 = 4; i_16 < 6;i_16 += 1) /* same iter space */
    {
        arr_62 [i_16] = (~(((arr_24 [i_16] [i_16 - 2] [8] [i_16 + 1]) ? 17526773457302020177 : 5583)));
        var_34 = (max(var_34, 6));
        arr_63 [i_16] = var_6;

        /* vectorizable */
        for (int i_17 = 1; i_17 < 7;i_17 += 1)
        {
            arr_66 [i_16] [i_17] [i_17 + 1] = 2335936897188897865;
            var_35 = (max(var_35, (((var_5 ? (arr_56 [i_16 + 1]) : (arr_56 [i_16 - 1]))))));
        }
    }
    var_36 = (max(32767, (max((~127), var_3))));
    var_37 = (-((max(var_9, var_4))));
    #pragma endscop
}
