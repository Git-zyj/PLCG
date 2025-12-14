/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (min(172415872, (((((177 ? var_13 : -1)) > (!var_1))))))));
    var_16 &= max(((-1 ? (min(var_9, 168)) : var_3)), var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_17 = (78 / -var_13);
                    var_18 -= 65521;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_19 = (((65521 && -11001) + -1));
                    var_20 = (min((((arr_2 [i_0]) ^ (min((arr_7 [i_0]), -9)))), (min((arr_9 [i_3] [i_1] [i_1] [i_0]), (-11001 ^ var_2)))));
                    var_21 = (max(var_21, (((!(((arr_3 [i_0] [i_0]) != 60)))))));
                    var_22 = (((var_8 || -314486237) ? var_10 : (min((arr_3 [i_0] [i_1]), 238))));
                }
                var_23 = var_5;
                var_24 |= ((((min((max(var_7, 54279)), (!10)))) < (min((min(var_3, (arr_4 [i_0] [i_1]))), (max((arr_4 [i_0] [i_1]), -1320572692))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    var_25 = ((!var_6) ? 503316480 : (arr_2 [i_4]));

                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        var_26 = ((var_7 < (arr_12 [i_5 + 1] [i_5 + 2] [i_5 + 1])));
                        arr_19 [10] [10] [i_4] [i_5] = 0;
                        var_27 += 1;

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_28 = ((arr_16 [i_0] [i_5] [i_4] [i_6]) ? ((~(arr_7 [i_5]))) : 91);
                            var_29 = (max(var_29, (arr_6 [i_0] [i_0])));
                        }
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_26 [i_4] [i_7] [i_4] [i_7] [i_4] [i_4] = (((arr_10 [i_1]) == ((-(arr_12 [i_0] [i_4] [i_7])))));
                        var_30 = (min(var_30, ((!((0 < (arr_25 [i_0] [i_0] [9] [i_7] [9])))))));
                        arr_27 [i_0] = (((((var_2 >> (var_10 - 184)))) ? ((65522 << (var_4 - 8))) : -1));
                        var_31 -= 11001;
                    }
                    var_32 = (((arr_18 [i_0] [i_4] [i_0]) % (((-12 ? -1956262871 : 455308490)))));
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    var_33 = (min(var_33, (((((((((min(16383, var_9)) + 2147483647)) >> (var_9 + 2002611271)))) ? (min((var_0 * var_7), (arr_25 [i_0] [i_1] [i_1] [2] [i_8]))) : ((((min(15, 10808))) / (((503316461 < (arr_16 [i_0] [i_0] [i_8] [i_8])))))))))));
                    var_34 = (min(var_34, (((arr_4 [i_1] [i_8]) >> (3363047762 - 3363047739)))));
                    var_35 = var_11;
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_36 = var_6;
                        arr_34 [i_1] [i_1] [i_1] [9] [9] [i_0] = 253;
                        var_37 -= 13434;
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 9;i_11 += 1)
                    {
                        arr_38 [3] [i_9] [i_11 + 1] = (((1880997125 ^ 108) + (arr_32 [1])));
                        var_38 = var_11;
                    }
                    /* vectorizable */
                    for (int i_12 = 4; i_12 < 8;i_12 += 1)
                    {
                        var_39 = ((511 ? 1 : 1));
                        arr_42 [4] [4] [2] [i_12 + 3] = ((124 ? (arr_9 [i_12] [i_12 - 4] [i_12 - 1] [i_12]) : (arr_9 [i_1] [i_12 + 2] [i_12 + 1] [i_12])));
                        var_40 &= (((arr_24 [i_0] [i_0] [i_1] [i_9] [i_12] [i_9]) && 31));
                        var_41 = (((var_0 + 210) || (!118)));
                    }
                    var_42 = (max((arr_33 [i_0] [6] [i_9]), (arr_17 [i_0] [i_9] [1] [0])));
                    var_43 = (((arr_15 [i_9]) >= (((-21 == (arr_15 [i_9]))))));
                }
            }
        }
    }
    var_44 = (min(var_44, ((((var_4 & ((var_13 >> (3382303167 - 3382303151)))))))));
    #pragma endscop
}
