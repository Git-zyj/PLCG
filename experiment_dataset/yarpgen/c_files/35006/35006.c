/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((var_4 ? (var_6 + -var_2) : (max(((var_3 ? 13866149458382698548 : var_8)), ((var_8 ? var_0 : 13866149458382698548))))));
    var_14 -= ((~((var_2 ? ((var_6 ? var_12 : 90705359539240278)) : var_11))));
    var_15 *= var_3;
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [8] = ((((((((arr_1 [9] [i_0 - 1]) ^ var_4)) | (arr_4 [i_0] [i_1])))) ? (arr_0 [i_0 + 1]) : (arr_2 [i_0])));
                var_17 = (max((arr_0 [i_0 - 1]), ((((arr_3 [i_1] [i_0 - 1]) || var_8)))));
                var_18 = (max(var_18, (((((~(arr_2 [i_0 + 1]))) | (((arr_2 [i_0 - 1]) | (arr_2 [i_0 - 1]))))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = var_0;
                                var_20 &= (arr_14 [i_4 - 1] [11] [i_3] [i_0] [i_1] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] = var_12;
                                arr_20 [i_0 - 1] [i_1] [i_2] [i_5] [10] = var_7;
                            }
                        }
                    }
                }
                arr_21 [1] [i_1] = ((((((((arr_8 [i_1]) + (arr_13 [i_0 + 1] [i_1])))) && (((4580594615326853068 ? 101 : 249))))) ? (((arr_15 [i_0] [i_0] [i_0 + 1]) - (arr_12 [i_1] [i_0] [i_0 - 1] [i_0]))) : (((((arr_15 [i_0 + 1] [i_0] [1]) | var_10)) ^ ((~(arr_17 [i_0] [i_0] [1])))))));
            }
        }
    }
    #pragma endscop
}
