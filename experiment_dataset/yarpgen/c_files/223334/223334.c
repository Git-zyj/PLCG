/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((~(max((var_8 - var_8), (!var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (min((min((min(var_2, 40423)), (var_9 > -50))), var_2));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = (arr_2 [i_0] [i_1] [i_4]);
                                var_14 = ((((max((arr_10 [i_0] [i_1] [i_2]), (((arr_9 [i_0] [i_1] [i_2] [i_0]) ^ (arr_5 [i_3 - 1] [i_1])))))) - ((((((arr_5 [9] [9]) ? var_0 : (arr_6 [i_1] [i_3 + 1])))) ? (min(var_7, var_9)) : ((min(var_9, (arr_2 [i_2] [i_2] [i_2]))))))));
                                var_15 = (max(var_15, ((max(var_9, (((arr_0 [i_3 + 1]) ? (arr_0 [i_3 - 1]) : (arr_0 [i_3 + 1]))))))));
                                var_16 &= arr_1 [i_0];
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min((var_6 >> 0), var_9));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            {
                var_18 = (max(var_18, ((((((((arr_14 [0]) ? (arr_12 [i_6] [i_5]) : (arr_12 [i_5] [i_6])))) ? ((var_1 ? (arr_15 [12]) : var_3)) : (max(var_1, (arr_17 [6] [i_6] [i_5])))))))));
                var_19 = (max(var_19, (max((max(var_4, (arr_17 [0] [i_6 + 2] [i_6 - 1]))), ((((((arr_14 [1]) ? var_4 : var_8)) == (arr_13 [0] [0]))))))));
            }
        }
    }
    var_20 = (max(var_20, ((((((-var_7 ^ ((max(var_0, var_6)))))) ? var_8 : var_1)))));
    #pragma endscop
}
