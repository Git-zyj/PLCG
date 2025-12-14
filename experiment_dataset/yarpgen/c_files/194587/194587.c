/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = ((242 ? -2443673436 : ((1 ? 577857266 : (arr_9 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0])))));
                            var_18 = ((65517 & (((18 ? 65518 : var_12)))));
                            var_19 = (max((((arr_1 [i_2] [i_3]) ? (arr_2 [i_1]) : (arr_2 [i_3]))), (((arr_1 [i_3] [i_0]) ? var_4 : 95))));
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    arr_14 [i_0] [4] [i_0] &= (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_20 = (((((89 && ((var_9 == (arr_7 [i_0] [i_0] [i_0] [i_0])))))) >> (((max(((147 ? var_0 : 18)), 189991556)) - 3367041384789466467))));
                                var_21 = (max(var_21, (((max(var_14, 18))))));
                            }
                        }
                    }
                    var_22 = 45;
                    arr_21 [i_4] [i_1] [i_4] = (((((var_12 ? (((max(-4, (arr_2 [i_0]))))) : (max((arr_7 [i_0] [i_1] [i_1] [i_4]), var_16))))) ? (1 + var_11) : 104));
                }
            }
        }
    }
    var_23 |= (((((var_5 >> 3) ? (max(var_14, var_13)) : (var_14 > -36))) <= var_12));
    var_24 = (max(var_16, (((max(var_7, 105)) * (var_6 == var_12)))));
    #pragma endscop
}
