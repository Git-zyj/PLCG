/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((~var_13) ? (-106 > var_8) : ((var_3 ? 35448 : 255)))), (((-23451 == (max(var_11, var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = (((((((min(var_4, (arr_0 [i_0] [4])))) ? -1 : (arr_1 [i_0 + 1])))) ? (((((((191 ? var_7 : (arr_3 [i_0] [i_0])))) && (((var_2 - (arr_1 [i_0])))))))) : ((min((arr_3 [i_0] [i_1]), 255)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 = (min((((arr_6 [i_0] [i_0]) / (((arr_3 [i_0] [i_0]) | 104)))), ((-(arr_6 [i_1] [i_2])))));
                    var_16 = (((((arr_6 [i_0 + 2] [i_0 + 2]) ? var_8 : (arr_6 [i_0 - 1] [i_1]))) <= (((max((arr_0 [i_0 + 2] [12]), (arr_0 [i_0 - 1] [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 &= ((((((~(arr_1 [i_0])))) ? (var_13 ^ var_0) : ((255 >> (arr_0 [i_1] [i_1]))))));
                                var_18 = (((arr_5 [i_0 + 1]) | (((arr_5 [i_0 + 1]) | (arr_11 [i_0 + 1])))));
                                var_19 = (min(114, (((!(arr_3 [i_0 + 2] [i_0 + 1]))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_1] = (((max(((((arr_7 [i_0 + 1] [i_0 + 1] [i_2]) < -654875094))), (max((arr_1 [i_2]), (arr_11 [i_1]))))) != (-1156470177 != -7472988970533753655)));
                }
            }
        }
    }
    var_20 = ((var_7 ? ((~(var_1 | var_7))) : var_13));
    #pragma endscop
}
