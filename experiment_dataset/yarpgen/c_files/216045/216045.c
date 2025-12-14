/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = ((((((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0])))) ? (max(((2147483643 ? (arr_1 [i_0]) : 2147483643)), ((min(var_1, 30))))) : (arr_3 [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [3] [2] [i_0] [3] = ((var_16 ? (((((arr_8 [i_1] [i_1 - 2] [i_3 - 1]) >= (arr_2 [i_0] [i_3 - 1]))))) : (2147483643 ^ 9223372036854775807)));
                                var_22 = max(((~(arr_4 [i_0] [i_0]))), -51);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_16;
    #pragma endscop
}
