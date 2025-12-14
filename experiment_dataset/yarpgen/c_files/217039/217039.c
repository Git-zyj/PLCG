/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = min((arr_0 [i_0 + 1] [i_0 - 4]), ((((arr_3 [i_0]) && (arr_0 [i_0 - 2] [i_0 - 1])))));
                    var_10 = (((var_5 ^ 112) / var_5));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_11 = (min((arr_3 [i_0]), (~var_8)));
                                var_12 = (max((min(var_5, var_6)), ((min(var_9, var_9)))));
                                var_13 = (-((~(arr_9 [i_0] [i_4 + 3] [i_2 + 1] [17] [i_1] [i_0]))));
                            }
                        }
                    }
                    var_14 |= ((((min(((max(111, var_3))), var_6))) ? (((((-112 ? (arr_9 [2] [i_1] [i_1] [i_1] [i_0] [2]) : (arr_10 [i_2] [i_2] [i_1] [i_1] [i_0 - 2] [i_0 - 2])))) ? (arr_11 [10] [i_1]) : (var_4 * var_4))) : (((var_7 / var_2) + var_4))));
                }
            }
        }
    }
    var_15 = var_1;
    var_16 = var_3;
    var_17 = ((min(549755813887, 174596566017563134)) == (var_2 + var_1));
    #pragma endscop
}
