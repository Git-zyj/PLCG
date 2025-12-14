/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 &= (((((arr_3 [i_1] [i_1] [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (((45 ? -18504 : 18504))))) ^ ((((((arr_4 [15]) ? (arr_3 [14] [i_0] [13]) : (arr_1 [1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 += (((((~(arr_7 [i_0] [6] [i_0] [i_3 + 1] [i_3] [i_2])))) ? (arr_11 [1]) : (((arr_1 [i_0]) % (arr_11 [i_0])))));
                                var_16 *= ((((((arr_3 [i_3 - 1] [14] [i_0 - 1]) ? (arr_3 [i_3 - 1] [0] [i_0 + 1]) : (arr_3 [i_3 - 4] [i_1] [i_0 + 2])))) ? (arr_3 [i_3 + 2] [15] [i_0 + 1]) : (((arr_3 [i_3 + 1] [i_1] [i_0 + 2]) ? (arr_3 [i_3 + 1] [i_1] [i_0 + 2]) : (arr_3 [i_3 - 3] [i_1] [i_0 - 1])))));
                                var_17 &= (max(((-(arr_1 [i_3 + 2]))), ((((((arr_2 [1]) * (arr_11 [i_2])))) ? (((arr_4 [9]) ? (arr_11 [i_1]) : (arr_1 [i_4]))) : (arr_4 [i_0 + 2])))));
                                var_18 ^= (min(((((((arr_4 [2]) ? (arr_10 [i_0] [i_1] [3] [1] [3] [i_1]) : (arr_6 [1] [12] [i_2])))) ? (arr_8 [i_0] [2] [i_3] [i_3]) : (arr_10 [18] [i_1] [i_2] [1] [i_3 - 2] [i_4]))), ((((((arr_6 [i_4] [i_2] [i_4]) * (arr_3 [1] [16] [i_4]))) == (arr_9 [i_0] [0] [i_2] [i_2] [7]))))));
                                var_19 = (max(var_19, ((min(((((arr_8 [i_0 + 2] [i_3 - 2] [i_3] [i_3 - 4]) >= (arr_8 [i_0 + 2] [i_3 + 1] [i_3] [i_3 - 4])))), (((arr_8 [i_0 - 1] [i_3 - 4] [i_3 - 4] [i_3 - 1]) ? (arr_8 [i_0 - 1] [i_3 - 1] [i_3 + 2] [i_3 - 2]) : (arr_8 [i_0 + 2] [i_3 - 4] [i_3] [i_3 - 4]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
