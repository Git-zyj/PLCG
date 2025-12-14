/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_2 - 1] [i_2] = ((((((!var_3) | 42150))) ? (min((1 | 5), 23)) : var_10));
                            var_12 = ((var_8 ? (arr_8 [i_0] [i_1] [i_0] [i_3]) : (((-79 + 2147483647) >> var_7))));
                        }
                    }
                }
                var_13 = 28284;
                var_14 = min((arr_0 [i_0]), ((var_1 ? (arr_4 [i_0] [i_0] [8]) : var_7)));
                arr_12 [i_0] [i_0] = ((var_4 & (0 - 2135390874)));
            }
        }
    }
    var_15 = 0;
    #pragma endscop
}
