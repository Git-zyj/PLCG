/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = (max(((-var_3 ? var_2 : var_4)), ((max((var_2 != var_6), ((var_5 ? 174 : var_9)))))));
    var_13 = ((~(((var_2 == var_10) ? (((min(var_8, var_8)))) : ((54 ? (-9223372036854775807 - 1) : 174))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_14 = ((((var_0 >> (((!(arr_10 [i_0 + 1] [i_1] [i_3] [i_3] [i_3] [i_1])))))) + var_8));
                        var_15 = (arr_2 [i_0] [i_1]);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_16 = (min(-1154707779, (min(507899283, (var_9 | 3140259519)))));
                            var_17 = min((((~(((arr_14 [i_0 + 3]) ? 81 : 156))))), (max(var_2, (min((arr_6 [i_1]), 3140259517)))));
                            var_18 = (100 ? (((-(arr_10 [i_4] [i_4] [i_4] [i_2] [i_2 - 1] [i_0 + 3])))) : var_6);
                            var_19 = ((((((-97 ? 18446744073709551615 : 168))) ? (arr_8 [i_0] [i_0]) : (arr_6 [i_0 + 2]))));
                        }
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_20 ^= ((-(min(-115, 10738))));

                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            var_21 = ((~(arr_15 [i_0] [i_5] [i_1] [i_0])));
                            var_22 = var_10;
                            var_23 &= ((((((((arr_3 [i_2] [i_2] [i_2]) ? var_0 : (arr_1 [i_0] [i_2])))))) != ((~(arr_13 [i_0 - 1] [i_1] [i_2 + 1] [i_6 - 1] [i_2])))));
                            var_24 = (max(((((var_10 ? -104 : 10)) <= var_2)), (arr_1 [i_0] [i_0])));
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            var_25 = (min(var_25, (((-((-90275167 ? var_6 : (arr_4 [i_2] [i_2]))))))));
                            var_26 = (((((var_3 ? (arr_0 [i_0]) : (arr_18 [i_7 + 2] [i_5 + 2] [i_5] [i_0] [i_2] [i_1] [i_0])))) ? ((((arr_17 [i_7 + 1] [i_5] [i_1] [i_0 + 1]) && var_7))) : (arr_19 [i_7 - 1] [i_0] [i_2])));
                        }
                        var_27 = (var_8 + 1087008327);
                        var_28 = (max(var_28, (((!(!var_4))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_29 = (max(var_4, (32 - 148)));
                                var_30 = (i_0 % 2 == 0) ? (((((((var_9 && (arr_7 [i_0]))) ? (arr_10 [i_9] [i_9] [i_9] [i_2 - 2] [i_0] [i_0 + 3]) : var_1)) < (((var_9 + 2147483647) << (((arr_16 [i_1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 3]) - 11157568651123635314))))))) : (((((((var_9 && (arr_7 [i_0]))) ? (arr_10 [i_9] [i_9] [i_9] [i_2 - 2] [i_0] [i_0 + 3]) : var_1)) < (((var_9 + 2147483647) << (((((arr_16 [i_1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 3]) - 11157568651123635314)) - 2823907123569452931)))))));
                                var_31 = ((((var_9 || 174) && var_1)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
