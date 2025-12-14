/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((((((arr_3 [i_0]) ? (arr_5 [i_1] [i_1]) : var_2))) ? (arr_1 [i_0] [i_1]) : ((((1179198206 ? var_0 : var_7)) % -11))));
                var_10 = ((((((((-12 ? 5 : var_6))) ? var_1 : ((3340971364321338657 ? (arr_3 [i_0]) : (arr_0 [i_1] [i_0])))))) || ((((((-3340971364321338657 ? var_4 : var_5))) ? var_4 : -var_6)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_11 = ((11 - ((var_4 ? (arr_0 [i_0] [i_1]) : (arr_0 [i_1] [i_2])))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_12 = 3625425;
                            arr_16 [i_0] [i_1] = (arr_13 [i_0] [i_1] [i_1]);
                            arr_17 [i_1] [i_3] [i_2] [i_1] [i_1] = ((-(arr_6 [i_0] [i_0] [i_0])));
                            var_13 = (arr_0 [i_0] [i_1]);
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_14 = (arr_19 [i_5] [i_5] [i_1] [i_5] [i_5]);
                            var_15 = (-12 * 1);
                            arr_21 [i_0] [i_0] [i_1] [i_1] = (arr_11 [i_0] [i_0] [i_1] [i_0] [i_0]);
                        }
                        var_16 = arr_0 [i_0] [i_1];
                        arr_22 [i_3] [i_1] [i_0] = var_5;
                        var_17 = 2045129558;
                    }

                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        var_18 = (max(var_18, ((((arr_4 [i_6 - 1]) <= var_2)))));
                        var_19 = (((arr_8 [i_6 + 2] [i_6] [i_6] [i_6]) ? (arr_1 [i_6] [i_2]) : 31));
                    }
                    var_20 = var_3;
                    arr_25 [i_1] [i_1] [i_1] [i_1] = var_5;
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_35 [i_0] [i_1] [i_7] [i_8] [i_9] = 466081499427396497;
                            var_21 ^= (((arr_9 [i_0] [i_0] [i_1] [i_8]) ? (((arr_9 [i_0] [i_1] [i_7] [i_8]) & (arr_9 [i_9] [i_8] [i_1] [i_0]))) : (arr_33 [i_0] [i_1] [i_7] [i_8] [i_9])));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_22 ^= (((((var_6 >> (((arr_1 [i_0] [i_7]) >> (((arr_15 [i_1] [i_7] [i_10]) - 1838153379013861220))))))) ? (arr_11 [i_0] [i_1] [i_7] [i_8] [i_10]) : (((~(((arr_19 [i_10] [i_8] [i_7] [i_1] [i_0]) ? var_9 : (arr_20 [i_8] [i_1] [i_7] [i_1]))))))));
                            var_23 = (1614099957 < 0);
                            var_24 = (arr_19 [i_0] [i_1] [i_1] [i_8] [i_10]);
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            var_25 = (((arr_19 [i_11 + 1] [i_11 + 2] [i_1] [i_11 - 1] [i_11 + 1]) | (arr_33 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1])));
                            arr_41 [i_1] [i_8] [i_7] [i_1] [i_1] = (arr_37 [i_8] [i_1] [i_7] [i_8] [i_11] [i_1]);
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_26 = (min(var_26, (arr_0 [i_0] [i_7])));
                            var_27 = ((3969458179 > (((min(61, 0))))));
                        }
                        var_28 = 123;
                        var_29 = (((arr_13 [i_1] [i_7] [i_1]) ? 115 : ((max(8, (arr_9 [i_0] [i_1] [i_7] [i_8]))))));
                        var_30 ^= (((((max(var_6, (arr_24 [i_7] [i_7] [i_7]))))) ? (((var_6 ? (arr_13 [i_8] [i_1] [i_7]) : 2680867338))) : ((0 ? (var_3 | var_9) : (((var_5 ? (arr_43 [i_0] [i_1] [i_7]) : (arr_24 [i_7] [i_1] [i_8]))))))));
                    }
                    var_31 = (max(var_31, ((max((((~(arr_23 [i_0] [i_0] [i_7] [i_1] [i_7])))), 0)))));
                    arr_45 [i_1] [i_1] = var_6;
                    var_32 = ((((492116136844825908 ? -87 : 52)) == ((((max((arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_31 [i_1]))) != -115)))));
                }
                var_33 |= (-7 >= -20);

                /* vectorizable */
                for (int i_13 = 1; i_13 < 21;i_13 += 1)
                {
                    arr_49 [i_1] [i_1] [i_1] [18] |= (arr_23 [i_0] [i_1] [4] [i_13] [i_0]);
                    var_34 += ((((!(arr_12 [22]))) ? (!var_3) : var_0));
                }
            }
        }
    }
    var_35 = var_7;
    var_36 = ((-((-115 * ((1965052648 ? 0 : var_7))))));
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 7;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            {
                var_37 = (max((((var_2 ? var_9 : 0))), (((arr_6 [i_14] [i_14 - 1] [i_15]) << (var_7 - 6630437533123524834)))));
                var_38 = var_2;
                arr_56 [i_15] = ((-(((!(arr_30 [i_15]))))));
            }
        }
    }
    #pragma endscop
}
