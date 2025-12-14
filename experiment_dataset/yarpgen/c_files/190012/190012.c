/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!62718);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = ((-(min(((var_1 ? 2817 : 62718)), 17719))));
                                var_17 = ((var_12 ? 62694 : (min(652436608, (arr_2 [i_0])))));
                                arr_15 [i_2] [i_2 - 1] [i_3] [i_2] [i_2 - 1] [i_1] [i_2] = ((~((var_8 ? -9223372036854775806 : 0))));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = (min((max((arr_5 [i_0 - 1] [i_0 - 1]), (arr_11 [i_4 - 3] [i_2] [4] [i_2 + 1] [i_2 + 1]))), ((((((var_10 ? var_3 : 62694))) || var_7)))));
                                var_18 = (max(var_18, ((~(((arr_11 [i_0 - 1] [i_0 + 1] [i_2 + 1] [i_3] [i_3]) & (arr_5 [i_0 - 1] [i_0 - 1])))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_2] [i_2] = ((~(max(var_14, var_6))));
                }
            }
        }
    }
    #pragma endscop
}
