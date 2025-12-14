/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((max(var_5, ((var_12 ? var_3 : var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (((((((((arr_5 [i_1 + 1] [i_1]) / var_6))) ? ((max(9359, 2350774078))) : (((arr_0 [i_0]) / (arr_10 [i_4] [i_2] [i_2])))))) ? (((var_8 ? var_14 : (arr_3 [i_2] [4])))) : var_8));
                                var_18 = var_3;
                                var_19 ^= (((arr_0 [i_0]) == 4294967295));
                                var_20 = ((+(max((arr_1 [i_0] [i_0]), 2646431578))));
                                arr_13 [i_4] [i_1] [16] |= ((((((arr_0 [i_1 - 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 2])))) ? ((max((arr_0 [i_1 - 1]), (arr_0 [i_1 + 1])))) : ((min((arr_0 [i_1 - 2]), (arr_0 [i_1 + 1]))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_2] [i_2 + 1] &= (((((max((arr_9 [i_1 - 2]), (arr_9 [i_1 - 1]))))) + (max((arr_12 [i_2] [i_2] [i_2 - 1] [i_1 - 1] [i_2] [2] [i_0]), (arr_8 [i_0] [6] [i_2] [i_2])))));
                    var_21 = (arr_10 [i_2 - 2] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_22 = ((!(arr_12 [i_0] [i_0] [i_0] [i_1 - 1] [i_0] [i_1 - 2] [15])));
                                var_23 &= ((~(arr_5 [i_0] [i_2])));
                                var_24 = (min(var_24, ((((((min(var_0, var_15))) ? (arr_17 [i_0] [i_0]) : ((((arr_2 [i_2]) ? var_7 : (arr_9 [i_0])))))) & ((~(arr_18 [i_0] [i_0] [i_1 + 1] [i_2] [i_5 - 2] [i_2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (((((var_7 ? var_1 : (min(var_7, 1573038314))))) ^ (((var_8 <= var_10) ? ((var_12 ? var_13 : var_6)) : (var_4 + var_4)))));
    var_26 *= ((min(var_12, var_7)));
    #pragma endscop
}
