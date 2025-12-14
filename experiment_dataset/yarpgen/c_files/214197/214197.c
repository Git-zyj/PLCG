/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_1] [i_1] [i_3] = (min(-var_10, (arr_5 [i_0] [i_1] [i_0])));
                            var_12 = (((((~((-(arr_1 [i_0 + 1])))))) ? ((((((arr_7 [1] [1] [i_3]) <= 1485048286)) ? -1 : ((var_6 ? (arr_0 [i_0] [i_1]) : var_10))))) : (arr_3 [i_0 + 1])));
                            arr_10 [i_0] [1] [i_3] [i_3] [i_1] = ((((arr_4 [i_2]) ? (!var_3) : (var_10 >> 1))));
                            var_13 = (max((max(((min((arr_6 [i_1] [i_3]), (arr_5 [i_0] [i_2] [i_3])))), -18446744073709551615)), (((~((max((arr_0 [i_0] [i_0]), (arr_6 [i_2] [i_2])))))))));
                        }
                    }
                }
                arr_11 [i_0 + 1] [i_0] = var_9;

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_16 [i_0 + 1] [i_1] [i_4] = var_4;
                    arr_17 [i_0] [i_1] [i_4] |= ((arr_3 [i_0 + 1]) ? 127 : 18446744073709551601);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            {
                var_14 = (((((~(arr_6 [i_5] [i_6 + 1])))) ? ((((arr_6 [3] [i_6 + 1]) ? (arr_6 [i_5] [i_6 + 1]) : (arr_6 [i_5] [i_6 + 1])))) : (min(18446744073709551615, var_0))));
                arr_22 [i_6] [i_6 - 1] = (((((((18446744073709551615 ? var_6 : (arr_0 [i_5] [i_6])))) ? (((max((arr_0 [i_5] [i_6 - 1]), (arr_21 [i_6 + 1]))))) : ((18446744073709551615 ? (arr_8 [i_6] [i_5] [i_5] [i_5]) : (arr_4 [i_5]))))) | ((var_6 ? (arr_14 [i_5] [i_6]) : (arr_8 [i_6 + 1] [i_6] [i_6 - 1] [i_5])))));
                arr_23 [i_6] [i_6] = (((arr_18 [i_6 - 1]) ? (-32073 ^ 1307400319) : (((var_0 ? (~130) : (arr_13 [i_5]))))));
                var_15 = (arr_2 [i_5] [i_6]);
            }
        }
    }
    #pragma endscop
}
