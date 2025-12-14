/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((var_12 ? ((((max(var_10, -27))) ? (((arr_2 [i_0]) / var_5)) : ((min(0, 21303))))) : ((-((((arr_7 [i_1] [i_0]) && var_12)))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_14 = 55;
                        var_15 = (max(var_15, (((2487383571 == ((min(248, (min(var_7, var_10))))))))));
                        var_16 = (min(var_16, ((((((-((((arr_0 [i_0] [1]) > (arr_3 [i_0]))))))) || (((-(arr_10 [i_3] [i_3])))))))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_17 = var_8;
                        arr_14 [i_0] [i_1] [3] [i_0] [i_4] = ((var_11 ? ((-(arr_9 [i_1] [i_2] [i_0]))) : 7));
                        var_18 = ((((arr_9 [i_0] [i_0] [i_0]) + 8)));
                        var_19 = ((min((arr_12 [i_0] [i_1] [i_2] [i_4]), -var_10)));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4] = (max((((var_10 || ((max(1, (arr_4 [i_0]))))))), 8));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_20 = (max(var_20, ((((((arr_16 [i_5] [i_1] [i_2] [i_5]) > var_8)) && ((((arr_3 [i_1]) ? (arr_0 [i_0] [i_0]) : (arr_8 [i_5] [i_2])))))))));
                        var_21 += ((arr_4 [i_5]) + (arr_6 [i_0] [i_1] [i_5]));
                        var_22 = (((-37 < 32) ? var_5 : (3300158961 < var_0)));
                    }
                    var_23 *= (((-((~(arr_16 [0] [i_1] [0] [i_2]))))));
                    var_24 = (max(((((arr_3 [i_2]) > (arr_1 [i_0] [i_0])))), (min(-127, (arr_3 [i_2])))));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    var_25 = (max(((((arr_7 [i_0] [i_1]) && (arr_1 [i_0] [i_0])))), (((~7) | (((0 >= (arr_6 [i_0] [1] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] [i_1] [i_0] [i_8] = (((var_9 ? ((-(arr_2 [i_0])) : ((max(-44, 23)))))));
                                arr_28 [4] [i_8] [i_6] [i_6] [i_8] |= (((arr_26 [i_7 - 1]) + (((arr_6 [i_7] [i_7] [i_8]) + ((min(var_8, 118)))))));
                                var_26 = ((21 && (((arr_19 [i_7 - 2] [i_7] [i_7 + 1] [i_7 - 2] [i_7 + 1] [i_0]) != (arr_19 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_0])))));
                                arr_29 [i_0] [i_7] [i_6] [i_1] [0] [i_0] = var_1;
                            }
                        }
                    }
                    var_27 = var_7;
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    arr_33 [i_0] [i_0] = ((~((((arr_32 [i_0] [i_1] [i_0]) == (~248))))));
                    var_28 = ((~((((!511) < 248)))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                {
                    var_29 |= var_6;

                    for (int i_11 = 2; i_11 < 7;i_11 += 1)
                    {
                        var_30 ^= (((arr_16 [i_11] [6] [i_11] [i_11 - 1]) ? var_5 : (arr_8 [i_11] [i_11])));
                        var_31 = ((var_4 <= (var_8 ^ 510)));
                    }
                }
            }
        }
    }
    var_32 = (max(var_32, (((1 ? -119 : 1)))));
    var_33 = (((((var_11 << ((((var_10 ? -68 : var_2)) - 18446744073709551528))))) / var_2));
    var_34 |= ((((var_5 ? ((19934 ? 48 : 19932)) : 2180)) & (min((~7), ((min(45602, 23935)))))));
    var_35 = ((-32760 ? ((((((var_0 ? 0 : 1341922001)) < (2953045294 > 249))))) : 13532630191747072718));
    #pragma endscop
}
