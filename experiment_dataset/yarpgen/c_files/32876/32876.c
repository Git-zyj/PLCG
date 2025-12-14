/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] = (69 ^ 75);
                                var_12 ^= (((max((max(96, 18301726264600545080)), -69))) ? ((1 ? 23561 : -1)) : ((max(-69, ((max((arr_1 [i_1]), 40400)))))));
                                var_13 -= ((5585925296697251832 ? -1 : 61));
                                var_14 = (min(var_14, ((max(237, 75)))));
                            }
                        }
                    }
                }
                var_15 += 18301726264600545080;
                arr_17 [i_1] [4] [i_1] &= min((((var_3 ^ (((0 ? var_4 : 84)))))), (((arr_3 [4] [i_0]) ? (arr_13 [10] [10] [i_0] [i_1] [i_0] [i_1] [i_1]) : (((-(arr_9 [i_0] [i_0] [9])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_16 = (((((~0) + 2147483647)) >> ((((((min(67, var_0))) ? 114 : (((var_6 ^ (arr_21 [1] [i_6])))))) - 89))));
                                var_17 = (min(var_17, -69));
                            }
                        }
                    }
                }
                var_18 = (((63 <= 0) ? ((90 ^ (-127 - 1))) : (((!(-32767 - 1))))));
                var_19 = (min(var_19, ((((arr_24 [i_5] [i_5] [i_6] [i_5] [i_6] [i_5]) ^ (max((arr_24 [0] [i_6] [0] [8] [i_5] [8]), (arr_19 [i_5]))))))));
            }
        }
    }
    #pragma endscop
}
