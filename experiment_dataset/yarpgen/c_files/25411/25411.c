/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(-27, 29)))) >= (min(38, 9197072318833944702))));
    var_15 ^= (((max(var_2, (((var_1 ? var_11 : var_1))))) ^ ((max((var_1 && var_9), ((var_6 ? var_10 : 45)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = ((((((((arr_3 [i_0] [i_1]) ? 9197072318833944702 : (arr_3 [i_0] [i_1])))) ? (((arr_2 [i_0]) ? var_12 : (arr_1 [i_0]))) : (min(var_12, -20330)))) * (((!(9197072318833944712 ^ var_11))))));
                arr_5 [i_1] &= (arr_4 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = (arr_15 [i_0] [i_1] [i_2] [i_3]);
                                var_18 = (((6034095988159880532 <= -6034095988159880528) * ((237 ^ (arr_10 [i_0] [i_1] [i_0] [i_4])))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] = ((((((var_5 < (arr_9 [i_0] [i_1] [i_2] [i_3]))) ? var_1 : (min(2147483642, (arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]))))) + 0));
                                var_19 = (min(var_19, var_7));
                                var_20 = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, ((((((21 <= 0) * 0)) >> (((var_13 ^ var_8) ? ((-6353 ? 0 : -6034095988159880533)) : var_4)))))));
    #pragma endscop
}
