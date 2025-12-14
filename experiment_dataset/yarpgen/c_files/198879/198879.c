/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 893;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = (var_4 >= 2147483647);
                                var_16 = (((min((arr_4 [i_1 - 2] [i_1 - 2]), 0)) & ((((arr_4 [i_4 - 2] [i_1 - 2]) ? (~-794269722) : (min(var_8, (arr_13 [i_3] [i_1]))))))));
                                var_17 = (((-818614324 ? (arr_12 [i_0] [i_1]) : var_0)));
                                var_18 = (arr_10 [i_4] [i_1] [i_1]);
                            }
                        }
                    }
                }
                var_19 = -13;
            }
        }
    }
    var_20 ^= var_7;
    #pragma endscop
}
