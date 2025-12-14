/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((min((arr_2 [i_1]), var_7)))));
                            arr_11 [i_0] [i_3] [i_0] [i_3] = (((((arr_10 [i_3 - 1] [i_3] [1] [i_3] [i_3 - 1] [i_3]) ? (arr_7 [i_0] [i_3 + 1] [i_3 - 1] [i_0]) : (arr_10 [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3])))) + (max((arr_7 [i_0] [i_3] [i_3 + 1] [i_0]), var_11)));
                        }
                    }
                }
                var_17 = (arr_9 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_18 = 7;
    #pragma endscop
}
