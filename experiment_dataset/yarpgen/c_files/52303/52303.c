/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(var_14, (5223114932935301270 * -1690168197)))) ? var_0 : (~var_13)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 |= var_4;
                                var_17 -= ((arr_2 [i_0]) ? ((((14750 >= ((var_5 ? (arr_5 [i_3] [i_2] [i_3] [i_4]) : var_2)))))) : ((-((var_4 ? 2950615083221080463 : var_8)))));
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_4 + 2] [i_4 + 2] = ((((var_13 ^ ((max(42224, var_0))))) / (min((((-(arr_1 [i_4])))), ((-(arr_8 [18] [3] [i_2] [19] [i_1])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_18 ^= (~18);
                                arr_18 [i_1] [i_1] [i_5] [i_5] = (!-125);
                                var_19 = (max(var_19, ((min(((23306 ? (((arr_8 [i_0] [10] [i_2] [i_1] [i_6]) ^ 42233)) : 907739162)), var_13)))));
                            }
                        }
                    }
                    arr_19 [i_1] [i_1] [i_2] = var_9;
                    var_20 = 42224;
                }
            }
        }
    }
    #pragma endscop
}
