/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (min((max((arr_2 [i_0 - 1]), (((arr_0 [i_0] [i_0]) ? (arr_4 [i_1] [i_1]) : (arr_5 [i_1 + 1] [i_0] [i_0]))))), ((-(arr_4 [i_0 - 1] [i_0 - 1])))))));
                var_17 = (max(var_3, ((((min((arr_2 [i_0]), var_13))) ? (arr_1 [i_0 - 1]) : ((var_12 ? 45 : var_4))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_18 ^= var_9;
                            var_19 = (max(var_19, (arr_6 [1] [i_2] [i_1 - 1])));
                            var_20 ^= ((~((+(((arr_6 [i_1] [i_1] [i_1]) ? var_10 : (arr_1 [i_2])))))));
                        }
                    }
                }
                var_21 = (min((((var_6 ? (arr_9 [i_1] [i_1] [i_1 + 1] [i_0] [i_0 - 1] [2]) : (min(var_6, (arr_3 [i_0] [7] [i_1 + 1])))))), (max(4294967271, var_4))));
            }
        }
    }
    var_22 = (((((~(max(var_8, 127))))) ? var_11 : ((-var_2 ? var_11 : (((min(var_5, var_5))))))));
    #pragma endscop
}
