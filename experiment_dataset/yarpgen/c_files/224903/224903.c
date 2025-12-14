/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~var_6) ? ((var_6 ? ((var_10 ? var_4 : var_1)) : (var_6 ^ var_1))) : var_10);
    var_15 = (min(var_0, var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 ^= min(var_6, (max(((var_13 - (arr_2 [i_0] [i_0]))), (arr_5 [i_0] [i_0] [i_0] [i_0]))));
                    arr_8 [i_1] = ((((((arr_3 [i_0] [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1])))) ? (((arr_2 [i_0] [12]) & (arr_3 [8] [i_1]))) : ((-(arr_3 [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 += (((var_1 & var_3) ^ (((arr_5 [i_0] [i_1] [20] [i_3]) ? var_0 : (arr_5 [i_1] [i_2] [i_3] [i_4])))));
                                var_18 = (arr_6 [i_0] [1] [i_4]);
                            }
                        }
                    }
                    var_19 = var_0;
                    var_20 &= ((((arr_1 [i_1] [i_0]) & (0 && 1))) != (((-(arr_10 [i_0] [i_0] [i_0] [5])))));
                }
            }
        }
    }
    var_21 = (((((!var_8) <= (max(var_8, 2147483647))))) != var_8);
    var_22 = (((((-var_9 != ((var_6 ? 2147483647 : -2147483637))))) == (((var_13 || (!var_12))))));
    #pragma endscop
}
