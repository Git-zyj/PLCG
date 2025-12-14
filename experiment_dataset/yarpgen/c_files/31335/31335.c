/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((max((var_9 == 17841), ((-14 ? var_4 : var_2)))), ((((var_0 + 2147483647) >> (var_6 - 31))))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, (((((-(!var_5))) >> (var_5 / 1984))))));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 = ((-((~(arr_2 [i_0])))));
                        var_14 ^= ((-45 ? (!var_3) : ((64 ? 127 : 8223302935534365772))));
                        var_15 = (min(var_15, (((((((arr_8 [i_1 + 1] [i_3] [i_0 + 1]) ? (arr_8 [i_1 - 2] [i_1] [i_0 - 2]) : (arr_8 [i_1 - 1] [i_2] [i_0 + 1])))) ? 24 : (((arr_10 [18] [i_1 - 2] [i_1] [i_1] [i_1 - 2] [i_1]) >> (arr_10 [i_1] [i_1 + 3] [i_1] [i_1] [2] [i_1 - 1]))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_17 [i_0] [2] [i_4] [i_0] [i_4] [i_1] &= 3219818043;
                        arr_18 [0] [0] [i_4] [i_5] = 65518;
                    }
                }
            }
            var_16 = (max(var_16, (((max(128, 778022764))))));
        }
        arr_19 [i_0] |= ((max((arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 2]), (arr_12 [i_0 - 2] [i_0 + 1] [i_0 - 2]))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_17 ^= 42;
        arr_22 [1] |= var_8;
        arr_23 [i_6] = var_2;
    }

    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        var_18 = ((((((min((arr_24 [9]), 0))) ? 42 : (arr_12 [i_7 - 2] [i_7 - 1] [i_7 - 2])))) ? ((-(arr_1 [i_7 - 2]))) : -var_1);

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    {
                        var_19 = (max(var_19, (arr_1 [22])));
                        arr_32 [i_7] [i_8] [i_7] [i_8] [i_9] [i_10] = -778022773;
                        var_20 *= ((((((arr_10 [i_7] [i_7 - 2] [i_7 - 2] [i_7] [i_7] [i_7 - 2]) ? var_6 : var_2))) ? (min((arr_2 [i_10 - 1]), 0)) : ((((arr_2 [i_10 + 2]) ? (arr_6 [i_10] [i_10 + 1] [i_10 - 1]) : (arr_29 [i_7 - 2] [i_8] [i_8] [i_8]))))));
                    }
                }
            }

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                arr_37 [i_11] = (arr_14 [i_7] [i_7]);
                var_21 ^= (((((-(arr_14 [i_7 - 1] [i_7])))) ? (~var_3) : 4670));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 19;i_13 += 1)
                    {
                        {
                            arr_43 [i_11] [i_11] = (((-0 * (max(var_7, (arr_40 [i_12]))))));
                            var_22 = (max((max(var_3, (min(var_9, var_7)))), (((~(arr_13 [i_7 - 2] [i_7 + 1] [i_13 + 2]))))));
                        }
                    }
                }
                var_23 = ((((min((((var_1 >> (((arr_3 [i_7] [i_7] [i_7]) - 3502996465628344665))))), 18446744073709551612))) ? (-32764 != 1) : (max(6244, (max(4537071406276878289, -8294))))));
            }
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                var_24 = ((((((((arr_5 [i_8] [i_8] [i_7]) ? (arr_5 [i_7] [i_7] [i_7]) : var_5)) | ((((69 < (arr_35 [i_7] [i_7] [i_7] [i_7])))))))) ? (18194233685607802293 || var_4) : var_5));
                var_25 = (max(var_25, var_3));
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        {
                            arr_52 [17] [i_8] [i_14] [i_15] [i_8] = (min((6891028000930501854 * 1), (((18446744073709551615 >= (arr_36 [i_15 + 1] [i_7 - 1]))))));
                            arr_53 [i_16] [2] [i_15] [i_15] [i_14] [i_8] [i_7] = (((((arr_49 [i_7] [i_7] [i_7 - 1] [i_7 - 2] [i_7]) ? ((237 - (arr_1 [4]))) : var_4))));
                            arr_54 [i_8] &= (min((((((var_2 ? (arr_36 [6] [i_8]) : (arr_2 [i_8])))) ? (arr_45 [i_16] [i_8] [i_7]) : 65525)), var_6));
                            arr_55 [i_7 - 2] [i_7 - 2] [i_14] [i_7 - 2] [i_15] [i_16] = (arr_46 [i_15]);
                        }
                    }
                }
            }
        }
    }
    for (int i_17 = 1; i_17 < 23;i_17 += 1)
    {
        var_26 = (((((arr_56 [i_17 + 1]) <= 5052862549915255769)) || 112));
        arr_60 [i_17] [i_17] |= ((min((arr_59 [i_17 + 1] [i_17 + 1]), (arr_59 [i_17 + 1] [i_17 + 1]))));
        /* LoopNest 3 */
        for (int i_18 = 1; i_18 < 23;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    {
                        var_27 = (max(2147483647, 148));
                        arr_67 [i_18] [i_18] [i_18] = ((var_9 * (((min((((!(arr_59 [i_18] [i_19])))), 32))))));
                        var_28 *= ((-28 ? (arr_64 [i_19]) : (arr_63 [i_20])));
                    }
                }
            }
        }
        var_29 = (((var_1 >> (((arr_63 [12]) - 375792573)))));
    }
    var_30 = (max(var_30, ((((var_3 ? (min(9, 1075149252)) : var_8))))));
    var_31 = var_0;
    #pragma endscop
}
