/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = ((var_4 ? var_6 : ((((((arr_4 [3]) / var_7))) ? (var_7 / var_5) : var_3))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [1] &= (((1493 ? ((8388604 ? 2050140878 : (arr_8 [i_0] [i_1] [8] [i_3] [8])) : 1409671747))));
                            arr_11 [i_0] = (((((arr_4 [i_3 + 1]) ? var_9 : var_8)) & (((!(arr_4 [i_3 - 3]))))));
                        }
                    }
                }
            }
        }
    }
    var_12 = (min(var_12, (2885295532 * 1927634072697585531)));
    #pragma endscop
}
