/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((var_6 ? (((var_6 + (max(var_12, var_14))))) : (min(var_2, (min(var_8, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (min((((arr_0 [i_0]) / (max(4294967295, (arr_2 [i_0]))))), (((arr_1 [i_1 - 4]) ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = (min((max((((arr_1 [i_0]) / (arr_10 [i_0] [16] [i_2]))), (arr_4 [0] [i_2] [i_3]))), ((((min(1, (arr_5 [i_0] [i_1] [i_2] [i_3]))))))));
                            var_19 = (min((min(63552, 7991263540277843266)), ((((((var_4 && (arr_8 [i_3 - 1] [i_2] [i_1] [i_0])))) | (arr_6 [11] [i_3]))))));
                            var_20 = min((min(((min((arr_10 [i_0] [i_0] [i_0]), (arr_3 [i_3])))), (min((arr_2 [i_0]), 223)))), 1073969404);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
