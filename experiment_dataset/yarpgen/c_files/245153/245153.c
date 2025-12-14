/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~var_2) ? ((max(var_3, 118))) : (-var_5 ^ var_13)));
    var_15 += ((((min(var_3, (max(var_4, var_7))))) & (var_9 && var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 += var_8;
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0] = (255 - 0);
                                var_17 = (((((var_10 ? (arr_3 [i_3] [i_2] [i_0]) : (arr_3 [i_3] [i_1] [i_0])))) ? ((min((arr_9 [i_0] [i_0] [16] [i_0]), (arr_3 [i_0] [i_0] [i_2])))) : var_6));
                                arr_13 [i_0] [i_0] [i_1] [i_3] [i_1] = (min(((((var_3 ? (arr_6 [i_0] [i_2] [i_0]) : (arr_8 [i_0] [i_1] [i_2] [i_3]))) + (var_3 | var_4))), ((max(var_11, 65535)))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] = ((((min((arr_7 [i_0] [i_0]), ((var_0 ? var_4 : (arr_1 [i_0] [i_0])))))) ? (((arr_3 [15] [i_1] [i_1]) | ((-7 ? 749883612 : (arr_5 [1] [i_2]))))) : (((var_9 ? var_2 : (arr_5 [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_18 = ((-((((min(6, 34295))) ^ (((arr_10 [i_0] [i_0] [i_0] [i_5] [i_6]) | (arr_3 [i_6] [i_5] [i_1])))))));
                                arr_22 [i_0] [i_1] [i_0] [i_5] [i_0] = (~4294967279);
                                arr_23 [i_1] [i_2] [i_6] [i_6] &= ((((min(19, (arr_21 [i_6] [i_6] [i_2] [i_6] [i_0])))) * ((-(arr_8 [i_0] [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
