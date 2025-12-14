/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_5;
    var_12 &= ((-((var_3 ? var_0 : (var_3 * 193)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (arr_0 [i_0 - 1] [i_0 - 1]);
                                arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [1] = (~1);
                                arr_16 [i_2] [i_1 - 2] &= ((-(min((arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_1 - 2]), 1))));
                                var_14 = (77 > ((((((188 ? var_1 : 36))) && (arr_10 [i_0 - 1] [i_1 + 1])))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] [4] = ((var_5 >> (-18 + 44)));
                    var_15 = ((-1 ? (min((var_10 * 1), (((arr_13 [i_2] [i_0 - 1] [i_0] [i_0 - 1] [i_0]) ? (arr_10 [i_1 - 1] [i_1 + 1]) : (arr_6 [i_0]))))) : ((-(arr_0 [i_0] [i_2])))));
                    arr_18 [i_0] [i_1 - 2] [i_0] = ((max((1251384297 + var_4), (arr_13 [i_0] [i_0] [i_0] [i_2] [i_2]))));
                    var_16 = ((((((min(-16, (arr_14 [i_0] [7] [i_2])))) && (201 << 15))) ? ((((1 ? -17 : 1)))) : (-1251384297 >> var_10)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_25 [2] [i_6] |= ((max((((arr_2 [i_7]) ? var_2 : (arr_1 [i_5]))), var_10)));
                    arr_26 [i_5] [i_5] [i_7] [8] = var_3;
                    arr_27 [i_5] [i_5] [6] [i_7] &= ((-(arr_8 [i_6 - 1] [i_6 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
