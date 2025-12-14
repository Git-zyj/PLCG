/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_6, var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 -= (arr_4 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((min(115, (max((arr_10 [i_2 + 1] [i_2 - 2] [20] [0] [3]), (arr_10 [i_2 - 1] [i_2 - 3] [i_2 - 3] [i_2 - 1] [4]))))))));
                                arr_13 [i_2] [1] [i_1] [i_2] [15] [i_4] = (max((min(var_9, ((max((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]), var_8))))), ((((16375883836490744156 ? 1 : -54))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_1] [i_2] [i_5] [i_6] = (((arr_12 [i_0] [i_1] [i_2 + 1] [i_1] [i_6]) - ((~(arr_0 [i_0] [1])))));
                                var_15 *= (arr_15 [i_0] [i_2] [9] [i_6]);
                                var_16 = (((min(89, (arr_17 [i_0] [i_1] [i_2] [i_2 + 1] [0] [i_2 - 1])))) ? ((((((~(arr_9 [i_0] [i_1] [i_5] [i_0])))) | (min(var_10, (arr_8 [i_2])))))) : 15926658737252219728);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            {
                var_17 ^= (~1);
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((((((arr_10 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1]) > ((max(var_8, (arr_17 [i_7] [i_8] [i_8] [14] [2] [i_10]))))))) > (max((((arr_15 [i_7] [i_8] [i_9] [i_10]) ? (arr_22 [i_7] [i_8] [i_9 - 2]) : var_8)), 1862857228)))))));
                            var_19 = (min(var_19, (32 <= -493799381)));
                            arr_29 [i_10] [i_8] [i_9] [i_10] = ((((+(max((arr_3 [i_8] [i_10]), (arr_21 [i_7] [i_9]))))) > (min((((arr_8 [i_10]) + (arr_21 [i_9] [i_10]))), ((max(var_1, 1)))))));
                        }
                    }
                }
                var_20 -= (arr_23 [17] [i_7 - 1] [i_8]);
                var_21 = (((var_10 != var_5) ^ ((99 ? 164 : ((max(var_5, 91)))))));
                var_22 -= 1;
            }
        }
    }
    var_23 = ((((((var_4 ? 120 : 17590))) ? var_2 : var_9)));
    #pragma endscop
}
