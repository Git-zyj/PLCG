/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max((-185471412 >= -338246523), (max(var_8, var_1))))) && var_7));
    var_13 = ((((((((var_7 ? 338246522 : var_5))) ? (var_5 || var_0) : (var_5 != var_2)))) >= (((min(964536022, var_10)) ^ (var_5 & var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (((max((-338246522 != var_5), (max((arr_3 [i_0] [i_1] [i_2]), var_5)))) >= (((((338246553 + (arr_2 [i_0]))) <= (((var_6 ? var_3 : -338246534))))))));
                    var_14 = (max(var_14, (((((max((arr_5 [i_0] [i_1] [i_2] [i_2]), 26299)) % (max(var_7, 4298845336269148328))))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_15 = ((8744834077803430474 || 68) ? (arr_1 [i_3]) : (-338246523 >= 338246522));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {

                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            var_16 = (-338246509 < 1590679339);
                            var_17 = (((1 >= 1) >= (var_4 % var_3)));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_24 [i_3] [i_4] [i_4] [i_4] [i_5] [i_6] [i_3] = (((arr_20 [i_3 - 1] [i_3 - 1] [i_4] [i_3 - 1] [i_6] [i_8] [i_8]) | (arr_14 [i_4] [i_5] [i_6])));
                            var_18 = ((0 && (var_4 / var_6)));
                        }
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            var_19 = (((arr_3 [i_3] [8] [i_3]) * ((18 & (arr_26 [i_3] [i_4] [i_5] [i_6] [i_9 + 3])))));
                            arr_28 [i_3] [i_5 + 1] = (((((arr_9 [i_3]) & var_6)) + (-10 > var_1)));
                            var_20 = (((0 % 7762282468793630417) || (((arr_18 [i_3] [i_5 + 1] [i_6] [10]) < (arr_20 [i_3] [i_3] [i_3] [i_5 - 1] [i_3] [i_6] [i_9])))));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_31 [0] [i_3] = (-8744834077803430474 / 21912);
                            arr_32 [i_3] [i_4] [i_5] [i_6] [i_3] = (((((338246522 ? 103 : (arr_30 [i_4] [i_5] [i_6] [i_3])))) & (((arr_26 [i_3] [i_4] [i_5] [i_6] [i_10]) ? 32767 : 208546163))));
                        }
                        arr_33 [i_3] [i_4] [i_5] [i_6] = (-1190602227 <= 8744834077803430474);
                        var_21 = (((var_8 & var_11) ? ((-338246525 ? var_7 : (arr_4 [i_3]))) : (arr_0 [i_4])));
                        var_22 = (max(var_22, ((((((arr_27 [i_3] [i_3] [i_4] [i_4] [i_5] [i_3]) | var_3)) & (((127 ? var_0 : var_9))))))));
                        var_23 = (((-6469802569808042523 + (arr_10 [i_4] [i_6]))));
                    }
                }
            }
            var_24 = (min(var_24, -1475842187));
        }
        var_25 ^= ((((arr_14 [i_3] [i_3 + 2] [i_3]) - (arr_14 [i_3 - 2] [i_3] [i_3 - 3]))));
    }
    #pragma endscop
}
