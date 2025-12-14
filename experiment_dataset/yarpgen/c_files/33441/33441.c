/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_0;
    var_19 = ((((var_9 == var_14) % var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    arr_6 [i_2] = ((((arr_5 [i_2 + 1] [i_2] [i_2]) ? (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1]))) - (arr_5 [i_2 + 1] [i_1] [i_2]));
                    var_20 = (min(var_20, (((((((((var_9 ? var_1 : var_5))) ? var_12 : (arr_5 [i_0] [i_2 - 1] [i_2 - 1])))) ? ((min(((var_1 ? var_9 : var_15)), var_5))) : (max(((13634389762639756979 | (arr_4 [12]))), var_17)))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_10 [2] [2] [i_3] = var_7;
                    arr_11 [i_0] &= ((((min(var_11, var_5))) > ((((arr_3 [i_0]) < (arr_3 [i_3]))))));
                }
                arr_12 [i_0] [i_0] = var_5;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_21 &= (((((((var_14 ? var_3 : (arr_15 [10] [i_4] [i_0] [10])))) ? -var_1 : ((var_6 ? var_11 : (arr_9 [i_0] [i_4] [i_4] [i_5]))))) != ((~(var_10 & var_5)))));
                            var_22 = (((((-var_17 ? ((var_11 ? var_16 : var_11)) : (((arr_16 [i_5] [i_1] [i_4]) * 1))))) ? ((min(var_7, 152))) : (((~(arr_9 [i_5] [i_4] [i_1] [i_0]))))));
                            var_23 = (arr_0 [i_4]);
                        }
                    }
                }
                var_24 = ((((max(var_7, var_16)) * -var_5)));
            }
        }
    }
    var_25 = var_0;
    var_26 = (((var_1 == var_0) * var_16));
    #pragma endscop
}
