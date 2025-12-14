/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (0 && 253);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (~(arr_1 [i_0] [i_1 + 2]));
                var_15 = (arr_3 [i_1 + 2] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 = 4294967290;
                            var_17 = (((((0 ? 6 : 241))) + 4182289235346259197));
                        }
                    }
                }
            }
        }
    }
    var_18 = (min((-9223372036854775807 - 1), var_7));
    #pragma endscop
}
