/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(max(-var_14, var_3))));
    var_19 *= (min(var_1, ((var_5 ? ((var_5 ? var_9 : 1)) : 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = ((-8848708074564776295 ? var_12 : (~var_2)));
                var_21 ^= var_14;
                var_22 = ((min(-2387048772, -var_4)));
                var_23 -= (((--3995200919772032057) ? (arr_3 [i_1]) : (arr_3 [i_0])));
                var_24 = (((((max((arr_1 [i_1]), var_7)))) ? 1 : ((-(arr_0 [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
