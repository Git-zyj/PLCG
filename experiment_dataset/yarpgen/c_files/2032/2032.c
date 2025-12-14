/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((var_5 ? 1938283497 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 &= (arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 *= (arr_13 [i_2 - 1] [i_1] [i_1] [i_0]);
                            var_16 = (var_12 | var_12);
                            var_17 *= (((3 ? (arr_4 [10] [i_1]) : ((205 ? (arr_4 [i_1] [19]) : 49152)))));
                        }
                    }
                }
                arr_14 [8] [i_0] [i_0] = 248;
                var_18 = (((arr_6 [i_0 - 2] [i_0 - 3] [i_0 + 1]) <= (((arr_4 [i_1] [0]) ? ((41104 ? var_7 : 24473)) : 248))));
            }
        }
    }
    #pragma endscop
}
