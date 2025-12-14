/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_12 ? var_3 : 1637847587));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (arr_3 [i_1] [3]);
                var_16 = (arr_0 [i_0] [9]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] = var_13;
                            var_17 = (((arr_3 [i_2] [i_3]) ? (arr_0 [i_1] [13]) : (((-1 * (arr_7 [i_3] [i_3] [i_3] [1]))))));
                            var_18 = (((arr_0 [i_3] [i_0]) && ((min(var_1, (arr_3 [i_3] [i_2]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
