/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_0] = (((arr_2 [i_0] [i_0] [i_0]) >= (((!(arr_9 [i_1 + 1] [i_0] [i_1 + 1] [i_0 - 3]))))));
                    var_16 |= var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = (((((arr_1 [i_1 + 1]) <= (arr_1 [i_1 + 1]))) ? (arr_7 [i_0 - 2]) : (min((arr_7 [i_0 - 1]), (arr_7 [i_0 - 2])))));
                                var_18 = var_7;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_1] [14] [i_5] = var_7;
                        var_19 = (min((arr_12 [i_1 + 1] [i_2] [i_1 + 1]), (arr_7 [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_20 = 32682;
                        arr_20 [i_0] = var_6;
                        arr_21 [i_0] [i_1 + 1] [i_2] [i_0] = (((((var_0 / (arr_4 [i_0])))) ? (((arr_16 [i_0 + 3] [i_0] [i_0 + 3] [i_0]) ? (arr_16 [i_0 + 3] [i_1 + 1] [i_2] [i_6]) : var_2)) : (arr_6 [i_0] [i_0] [i_0] [16])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] [13] [i_0] [i_7] [i_8 + 4] [i_0 + 2] [i_8 + 4] = (max((arr_24 [i_1] [i_0] [i_8]), ((max((((-619265325 == (arr_3 [i_0] [i_0])))), 18032)))));
                                var_21 = (((arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_7] [i_8 - 3]) | ((((min(var_8, var_5))) ? (arr_2 [i_0 - 2] [i_1 + 1] [i_7 - 1]) : (((arr_9 [i_0 + 3] [i_0] [i_0 + 2] [i_0]) ? (arr_8 [i_0 - 2] [i_0 - 2] [i_7 + 2]) : var_4))))));
                                var_22 = ((~(arr_11 [i_8 - 3] [i_0 + 3] [i_2] [i_1 + 1] [i_0 + 3])));
                                var_23 = (min(var_23, (((((min(-16614, 50550))) >= (arr_16 [i_0 + 1] [i_1] [13] [i_8]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_10;
    #pragma endscop
}
