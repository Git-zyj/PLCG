/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((((((arr_0 [i_0 - 1]) ? 0 : (arr_0 [i_1])))) ? ((~(((arr_2 [i_1]) ? var_13 : (arr_5 [i_0] [i_0 - 2] [i_0] [i_0 - 2]))))) : (arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 1]))))));
                    var_17 = (min(var_17, (min((((arr_4 [i_0 - 2] [i_0 - 1]) ? (arr_4 [i_0 - 2] [i_0 - 1]) : (arr_4 [i_0 - 2] [i_0 - 1]))), (((arr_4 [i_0 - 2] [i_0 - 1]) ? (arr_4 [i_0 - 1] [i_0 - 1]) : (arr_4 [i_0 - 1] [i_0 + 1])))))));
                    var_18 = (min(var_18, (((((3266525110 == (((-1 / (arr_1 [i_0] [14])))))) ? (((arr_3 [i_0 + 1] [10]) + (arr_0 [1]))) : (-1023403895104294951 < 26358))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_15, (max((arr_10 [20] [i_3] [i_3] [i_2] [i_2] [i_1] [15]), (arr_10 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [1] [i_0 - 1] [i_0 + 1])))));
                                var_20 = (var_12 | -14);
                                var_21 = (((arr_12 [7] [i_1] [i_2] [20] [i_4]) ? (((arr_6 [3] [i_2] [i_3] [i_4 + 1]) ? (arr_7 [i_4] [22] [10] [i_3] [i_0 - 1] [i_0 - 2]) : (((((arr_9 [15] [19] [0] [i_1] [18]) + 9223372036854775807)) << (1 - 1))))) : -6803537117274630166));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_13;
    #pragma endscop
}
