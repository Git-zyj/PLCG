/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = ((((min((~var_5), (arr_3 [i_2 + 1] [i_2 - 2] [i_2 + 1])))) ? ((((((arr_5 [i_2 + 1]) >= (arr_6 [i_0] [7] [2])))) << (((min(var_1, 288230101273804800)) - 3248970059)))) : var_7));

                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        var_20 = (816383166891857278 << (((((arr_8 [i_3] [i_3 + 1] [i_3] [i_3] [4] [0]) + 36)) - 16)));
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] = -28;
                        var_21 -= ((-((min((((arr_3 [i_0] [i_1] [i_3]) && var_18)), (((arr_7 [i_0] [i_1] [i_2] [i_3]) != var_7)))))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_22 = (min(var_22, ((((((+((((arr_10 [i_0] [i_0] [i_1] [i_2] [8]) > var_15)))))) ? 35184372088831 : (max(((var_7 ? -156614167285881683 : (arr_8 [i_0] [i_1] [i_1] [i_2 - 1] [12] [i_1]))), (arr_4 [i_0] [i_0] [i_2]))))))));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_23 ^= ((((~(arr_11 [i_2 - 1] [i_4] [i_5] [i_4] [i_5]))) == (((min(3200365030, (arr_6 [i_1] [i_2 - 1] [i_5])))))));
                            var_24 = (max((arr_4 [14] [i_2 - 2] [i_2 - 1]), (min((arr_4 [i_0] [i_2 - 1] [i_2 - 2]), (arr_4 [i_2] [i_2 - 2] [i_2 - 2])))));
                        }
                    }
                }
            }
        }
        var_25 = min(((((arr_2 [i_0] [i_0]) != (arr_7 [i_0] [i_0] [i_0] [i_0])))), ((var_6 ? var_7 : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    var_26 = var_16;
    #pragma endscop
}
