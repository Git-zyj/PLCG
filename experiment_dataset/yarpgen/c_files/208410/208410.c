/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((2313 != (var_10 - -81))));
    var_14 = ((!(((((max(-81, 80))) ^ 35)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_1] = (max(-102, (((arr_5 [i_1] [i_2 - 2]) ? ((var_3 ? (arr_4 [i_0] [i_1] [i_0]) : var_8)) : ((var_7 ? 81 : var_4))))));
                    arr_8 [i_2 - 2] [i_2] = ((((min((arr_4 [i_2 - 1] [i_2 + 3] [i_2 - 1]), var_3))) ? (min(((~(arr_0 [i_2 + 1]))), ((max((arr_2 [i_2 - 1]), (arr_1 [i_1])))))) : -81));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_21 [i_3] [i_3] [i_4] [i_5] [i_6 + 1] [i_3] [i_7 + 4] = ((~((var_8 ? (((arr_6 [0]) & (arr_2 [i_3]))) : 0))));
                                var_15 = (min(((max(((min(0, var_11))), (arr_0 [i_4])))), ((((((arr_3 [i_5]) ? var_10 : (arr_4 [i_4 - 1] [i_5] [i_6 - 1])))) ? 0 : var_12))));
                            }
                        }
                    }
                    arr_22 [i_3] [i_4] = max(((((-23 ? var_3 : 140)))), (arr_9 [i_5]));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_28 [i_9] [0] [i_5] [9] [i_3] = ((((-4294967286 % (((691029570 ? var_6 : var_7))))) / ((((((var_7 >> (var_3 - 17239)))) ? -34602374841081055 : (arr_12 [i_9] [i_4] [i_4]))))));
                                arr_29 [0] [i_8] [i_5] [i_5] [i_4] [i_3] [i_3] = ((((max((arr_3 [i_4 + 1]), 1))) ? (((arr_3 [i_4 - 1]) ? var_3 : (arr_3 [i_4 - 2]))) : (arr_3 [i_4 - 2])));
                                var_16 = ((!((((arr_18 [1] [i_8 + 1] [i_8 + 2] [1]) ? 4294967286 : 150)))));
                                arr_30 [i_3] [i_5] [i_5] &= ((((max((((arr_10 [i_5]) % 96)), (arr_19 [i_3] [i_4 - 3] [i_4 - 3] [i_8] [4] [i_3] [i_5])))) ? var_4 : ((((max((arr_11 [i_8] [i_8] [1]), var_2))) ? (((arr_13 [i_3]) ? var_5 : (arr_2 [i_3]))) : (((arr_13 [i_4 - 3]) * 23))))));
                                arr_31 [i_3] [i_3] [i_5] = (((((1 ? 8064 : (arr_24 [i_9] [i_8] [i_5] [i_4 + 1] [i_3])))) > (((((((arr_14 [i_3] [1]) * 0))) ? 4294967273 : -1)))));
                            }
                        }
                    }
                    arr_32 [i_3] [i_5] = (arr_5 [i_3] [i_4]);
                }
            }
        }
    }
    var_17 = (((((((min(1, var_5))) * var_3))) * ((((5 ? var_1 : var_0)) << ((((var_0 ? var_11 : 4194522868)) - 4194522845))))));
    #pragma endscop
}
