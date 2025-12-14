/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = ((-(((((16 ? var_12 : var_10))) ? 4294967295 : 16))));
                    var_15 = (min(var_15, (((-29 ? 1 : (+-885760716))))));
                }
            }
        }
    }
    var_16 = ((var_6 ? (min(((var_12 >> (-17 + 25))), (-1 * -14))) : (((var_4 == var_11) ? var_6 : -38))));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                {
                    arr_15 [i_5] [i_3] [i_5] = 216;

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_18 [i_3] [i_3] = var_5;
                        arr_19 [i_3] [i_4] [i_5] [i_4] = var_6;
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_17 = (min(var_17, ((((((-(arr_0 [i_3 + 1])))) ? ((((arr_1 [i_3 - 1] [i_5 - 2]) ? 1923228859 : 39682))) : ((var_8 ? var_6 : var_2)))))));
                        var_18 = (((((((21061 ? (arr_7 [i_7] [i_4]) : 174))) ? ((((arr_3 [i_4] [i_4] [i_7]) - var_8))) : (min(2097150204384909427, -10246)))) | 15142));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_19 = (var_8 ? ((((arr_14 [i_4 - 3] [i_8]) <= (arr_14 [i_4 - 2] [i_5 - 2])))) : (arr_14 [i_5 - 2] [i_8]));
                        arr_24 [i_3] [i_3 - 1] [i_4 - 3] [i_5] [i_5] [i_3] = ((~(var_7 != 27154)));
                        var_20 *= (((((-3 - 1) || 12)) ? ((((-2436 ? var_6 : 96)) - (((max(-28, (arr_21 [i_3]))))))) : (var_12 != 1)));
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_21 = (+(((((var_0 ? (arr_17 [i_3] [i_3] [i_3] [i_9] [i_3 + 2]) : (arr_3 [i_3] [i_4] [i_5 - 1])))) ? (((-1379852166 ? 104 : (arr_17 [i_9] [i_9] [i_3] [i_9 - 1] [i_9 - 1])))) : (1 & var_12))));
                        arr_28 [i_3] [i_3] [i_3] [i_9 - 1] [i_3] = ((+((12344 ? (arr_7 [i_4] [i_4 - 1]) : (arr_16 [i_3 + 2] [i_3 + 2] [i_4 + 1] [i_5 + 1])))));
                        arr_29 [i_3] [i_4] [i_3] [i_9 - 1] = ((((27154 || 239) ? -1 : (var_4 > var_11))));
                        arr_30 [i_3] [i_4] [i_4] [i_3] = ((94 ? (((6 > 31255) ? (min(2549992748774033589, 1)) : (((28 ? var_9 : (arr_7 [i_3] [i_4])))))) : (max((arr_12 [i_3 + 2] [i_3 + 2] [i_9]), -7359796129549022030))));
                        var_22 = ((13966 ? -21 : -5290));
                    }
                    arr_31 [i_3] [i_3] [i_5 - 1] = (((((arr_13 [i_3] [i_3 + 2] [i_3] [i_4 - 2]) || (arr_7 [i_3] [i_3 + 1]))) ? var_10 : (!8646911284551352320)));
                }
            }
        }
    }
    #pragma endscop
}
