/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (!(((((((!(arr_5 [7] [i_1] [i_1]))))) + ((3 >> (var_10 - 711454435)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_16 = ((!(arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1])));
                            var_17 = (min(((((arr_8 [i_0] [2] [i_0]) ? (arr_8 [i_0 - 1] [0] [i_0]) : -2025059930))), -6129908072090926711));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
