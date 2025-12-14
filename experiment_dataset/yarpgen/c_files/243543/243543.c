/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_12 &= (((((arr_1 [i_0]) >> (15513 - 15509))) * (arr_1 [i_1 - 1])));
                        var_13 = (min(var_13, ((((134217727 && -16) / (arr_8 [i_0] [i_1 - 1] [i_3]))))));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_4] = 99;
                            var_14 = (arr_8 [i_0] [i_1] [i_4]);
                        }
                        var_15 += (max((4183584780336117297 + -15), ((min((arr_10 [i_0] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]), (arr_10 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_16 [i_0] [4] [i_2] = ((+(((arr_8 [i_0] [i_1] [i_1]) ? (arr_13 [i_1 + 1] [i_5] [i_2] [i_5]) : (arr_5 [i_1 - 1] [i_1 + 1])))));
                        arr_17 [i_0] [15] [i_2] [i_5] = (((arr_8 [i_0] [i_1] [i_1 + 1]) + (min(((((arr_2 [i_0] [i_0]) % var_5))), (-4183584780336117299 % var_4)))));
                        var_16 += var_11;
                        var_17 = (max(var_17, var_3));
                    }
                    var_18 *= ((-(((!(arr_14 [i_0]))))));
                    var_19 -= (((((!((min((arr_8 [11] [i_1] [i_2]), 38)))))) >> (((arr_15 [i_0] [i_0] [i_0] [i_1] [i_2]) + 7872392609139072422))));
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    var_20 = ((!(arr_13 [i_6] [i_6] [8] [i_0])));
                    var_21 = (((((~(~var_4)))) ? (((arr_5 [i_1 + 1] [i_1 + 1]) ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 1] [i_1 + 1]))) : ((min((max((arr_7 [i_0] [i_1 + 1] [i_6]), (arr_9 [i_0] [6] [6] [6] [i_0] [11] [i_1]))), (arr_1 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_22 ^= 1;
                                var_23 = ((var_5 ? (arr_14 [i_1 + 1]) : (arr_23 [i_8] [13] [i_6] [i_0] [i_0])));
                            }
                        }
                    }
                }
                var_24 ^= (((max((arr_13 [i_1] [i_1] [i_1] [i_0]), (((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_1] [i_0] [i_1]) : -4183584780336117299))))) ? ((((min(62052, 0))) ? (arr_20 [i_1] [1] [i_1] [i_0] [i_0] [i_0]) : (((((arr_22 [i_0] [i_1] [i_1] [i_0]) + 2147483647)) >> (((arr_20 [i_0] [8] [i_0] [i_1] [i_0] [i_1 - 1]) - 49331)))))) : var_10);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_30 [i_10] [i_9] [i_1] [i_1] [i_0] = var_11;
                            arr_31 [i_0] [i_0] [i_1] [i_9] [i_9] [i_0] = (((((((-47 / (arr_18 [i_0])))) || var_10)) ? ((~(arr_24 [i_1] [i_1 - 1] [i_1] [i_1 - 1]))) : (max((arr_24 [i_10] [i_10] [i_10] [i_10]), ((max((arr_19 [i_9] [i_1]), (arr_26 [i_0] [i_0] [i_9] [i_0]))))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = var_11;
    var_26 = ((-(((!(var_9 <= var_8))))));
    #pragma endscop
}
