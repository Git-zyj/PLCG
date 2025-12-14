/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_8));
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 |= arr_10 [i_2 - 2] [i_1] [i_2] [i_0 - 1];
                            var_19 ^= (((arr_2 [i_3]) >= 134));
                        }
                    }
                }
                var_20 |= ((144 < (arr_7 [i_0 + 1])));
            }
        }
    }
    #pragma endscop
}
