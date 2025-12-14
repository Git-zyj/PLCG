/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_14 | var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] = ((-(arr_8 [i_0] [i_0] [i_0])));
                            arr_12 [i_0] = ((max(var_12, (arr_10 [i_2 + 2] [i_3] [i_3 - 3] [i_2 + 2] [i_2 + 2]))));
                            var_18 = (i_0 % 2 == 0) ? ((((arr_4 [i_1] [i_2] [i_3]) >> (((arr_3 [i_0] [i_1] [i_0]) - 63940))))) : ((((arr_4 [i_1] [i_2] [i_3]) >> (((((arr_3 [i_0] [i_1] [i_0]) - 63940)) + 27405)))));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] = (arr_8 [i_0] [i_0] [i_0]);
                            var_19 = ((-(max((arr_2 [i_2 - 1]), (arr_9 [i_2 - 2] [i_3] [i_3 - 1] [i_2 - 2] [i_2 - 2])))));
                        }
                    }
                }
                arr_14 [i_0] = ((113 ? (arr_4 [i_0] [i_0] [i_1]) : (!var_6)));
                var_20 ^= ((((min(66, 47918)))) / ((var_13 ? (arr_8 [i_0] [i_1] [i_0]) : (arr_7 [i_0] [i_0] [i_1]))));
                var_21 = (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_1]) ? (arr_10 [i_1] [i_1] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
