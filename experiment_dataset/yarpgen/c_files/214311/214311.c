/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1473258925382383957;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((!((min((~39), 17183013834624068153))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [2] [i_1 + 3] &= ((10851207204525214563 ? 16973485148327167658 : 1));
                            arr_14 [i_0 + 1] [i_1] [i_3] = ((-(max(-2375746542241228221, 4092026841))));
                        }
                    }
                }
            }
        }
    }
    var_21 = max(var_15, (min(((max(2665606386, 109))), ((var_18 ? var_11 : var_14)))));
    var_22 *= (min((2 != 1216), (min((min(1, 7172434139826892472)), ((max(38082, var_18)))))));
    #pragma endscop
}
