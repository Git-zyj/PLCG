/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 -= var_2;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (arr_12 [i_4] [i_3] [i_2] [i_1 + 1] [i_0]);
                                var_20 *= ((!(arr_7 [i_1 - 1] [i_2] [i_3])));
                                arr_15 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0] [i_0] [i_0] = ((-(arr_11 [i_4] [i_2] [i_1] [i_0])));
                                var_21 = (max(var_21, (((var_15 | (((((((arr_12 [i_4] [i_2] [i_2] [i_1] [i_0]) ? var_1 : var_8)) == (arr_12 [i_4] [i_3] [i_2] [i_1] [i_0]))))))))));
                                var_22 = (min(((var_15 ^ (arr_9 [i_1 - 1] [i_1 + 1]))), ((((arr_9 [i_1 - 1] [i_1 + 1]) ? (arr_9 [i_1 - 1] [i_1 + 1]) : (arr_9 [i_1 - 1] [i_1 + 1]))))));
                            }
                        }
                    }
                }
                var_23 = (((((arr_12 [i_0] [i_0] [17] [i_0 + 1] [i_1 + 1]) % (~var_14))) / (arr_7 [i_1] [i_1] [i_0])));
            }
        }
    }
    var_24 = var_5;
    var_25 = var_9;
    #pragma endscop
}
