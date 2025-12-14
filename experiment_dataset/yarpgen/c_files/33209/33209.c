/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((19 ? ((min(var_15, 19))) : 119));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1 + 1] [i_0] [i_0] = ((((max((140 - 120), ((18446744073709551608 - (arr_2 [i_0] [i_1] [i_1])))))) ? (((min((min((arr_7 [i_0] [i_0] [i_1 + 1] [i_2]), (arr_2 [i_0] [i_1] [i_1]))), ((min((arr_0 [i_1] [i_2]), var_10))))))) : (max(var_17, (~14852230760366302720)))));
                    var_19 += min(((var_13 ? (((arr_9 [1] [1] [i_2] [i_2]) << (3594513313343248910 - 3594513313343248888))) : 114)), 45343);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = ((+(((((arr_14 [i_0] [i_1] [7] [i_0] [i_4]) ? (arr_9 [i_0] [15] [2] [i_0]) : 48976))))));
                                var_21 = min(45343, 45368);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_12;
    var_23 = (((var_16 + 9223372036854775807) << (135 - 135)));
    #pragma endscop
}
