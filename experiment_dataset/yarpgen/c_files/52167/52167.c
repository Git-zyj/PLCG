/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_11, 4458833242680919750));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 += (min(((var_9 | (min((arr_14 [2] [i_1] [i_1] [i_1] [i_1] [4]), 0)))), ((((arr_0 [i_0 - 2]) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (arr_3 [i_0 - 1] [i_0 + 1]))))));
                                var_22 = ((~(((!(arr_16 [i_2 - 1] [i_2] [i_1] [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0]))))));
                                arr_18 [i_4] [5] [i_4] = var_12;
                                arr_19 [i_0] [i_1] [i_2] [2] [i_0] &= ((~((var_13 << (var_11 - 38219)))));
                            }
                        }
                    }
                    arr_20 [4] [i_1] [i_1] = ((!(((-4458833242680919750 ? ((max(-407610166, (arr_4 [i_0])))) : (max(var_0, (arr_7 [1] [i_0 + 1] [i_1]))))))));
                    arr_21 [i_0] = (max(-407610168, 255));
                }
            }
        }
    }
    var_23 = ((!(var_1 || -var_2)));
    var_24 = (!var_3);
    #pragma endscop
}
