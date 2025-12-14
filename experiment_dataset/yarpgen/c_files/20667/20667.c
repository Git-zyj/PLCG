/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1 - 1] = ((((((var_9 ? var_9 : (arr_0 [i_0])))) ? var_9 : ((var_11 ? var_2 : var_4)))) <= (var_4 / var_1));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 = ((((var_7 ? var_7 : (((var_12 >= (arr_1 [i_0 + 1])))))) & (((-18208 / 57592) / ((var_1 ? (arr_3 [i_0] [i_0] [i_2]) : var_0))))));
                    arr_8 [i_1] [i_1] = (((((var_0 * ((var_6 / (arr_7 [i_0] [i_1 - 1] [i_0])))))) ? ((max((var_2 < var_7), (var_6 >= var_1)))) : (((var_7 >> (var_5 - 890467234343952910))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = ((~(((arr_12 [i_4 - 3] [i_1] [i_1 + 1] [i_0 - 4] [i_1 + 1]) & var_12))));
                                var_15 = (((((((var_2 ? var_3 : (arr_9 [i_0] [i_0] [i_2] [i_3 + 4] [1] [i_1 + 1])))) || ((max(var_10, var_2))))) && ((min((~var_2), (var_7 == var_1))))));
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    arr_16 [i_1] [i_1] [i_1] [i_1] = (((((((var_12 | var_5) && (57606 != -18208))))) + (((((((arr_12 [1] [i_1] [1] [i_5] [i_5]) >= var_0)))) * (56 ^ 4968431610669052410)))));
                    var_16 = (min(var_16, (((var_1 | ((((!(((1073741824 ? 13478312463040499205 : 111))))))))))));
                    var_17 = (((78 ^ 65535) || 9223301668110598144));
                    arr_17 [i_0 + 1] [i_0] [i_0 + 1] &= ((((((((var_7 >> (var_8 - 2863807905)))) ? (7944 | 2641373262092321616) : (((var_0 + (arr_9 [i_0 - 1] [i_1 + 1] [11] [i_1] [0] [i_5]))))))) ? (((29715 <= 0) >> (-16209 + 16232))) : ((((var_11 == var_6) && var_7)))));
                }
                arr_18 [i_1] [i_1] = (((((((arr_11 [i_1] [6] [i_1] [i_0]) > var_1)) ? (56 == -31379) : (max((arr_10 [i_0] [i_0] [i_0] [i_0]), var_12)))) * (((((var_0 && var_9) == (arr_6 [10] [10] [10] [i_1 - 1])))))));
                var_18 = (min(var_18, var_10));
                var_19 = ((((((min((arr_12 [i_0] [i_0 - 3] [0] [i_1] [i_0]), var_4))) ? (min(var_5, var_0)) : (~var_11))) >= ((min((((var_1 ? var_9 : var_0))), var_1)))));
            }
        }
    }
    var_20 = (-1 == 9223301668110598132);
    #pragma endscop
}
