/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 ^= (max(var_1, (((((1848375683766705639 % (arr_6 [i_0] [i_1]))) != (((~(arr_2 [i_0] [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (((((arr_7 [i_0] [i_1] [i_2] [i_0] [i_0] [7]) ? (max(786432, var_10)) : (((29974 ? (arr_2 [i_0] [i_1]) : 146)))))) ? (max(((17628 ? 4719549220554804547 : -17628)), (arr_5 [i_0] [i_2]))) : var_14);
                                arr_12 [i_1] [i_3] = ((-(min((var_14 || 19617), (arr_10 [i_0 - 2])))));
                                var_20 = (min(var_20, (((+((((var_8 > var_5) && (((19617 ^ (arr_5 [i_1] [i_3]))))))))))));
                                arr_13 [i_0] [i_0 + 1] [i_0] [i_1] [i_2] [i_3] [i_0 + 1] = (~((((((arr_8 [i_3] [i_3] [i_1] [i_0]) ? (arr_3 [6]) : (arr_9 [8] [8] [17] [i_4])))) ? (arr_5 [i_1] [i_3]) : (~-17629))));
                            }
                        }
                    }
                    var_21 = (max(var_21, var_12));
                }
            }
        }
    }
    var_22 = var_11;
    var_23 = var_15;
    #pragma endscop
}
