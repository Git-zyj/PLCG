/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min((((var_17 << (var_6 - 3086733629)))), (((220 >> (var_12 - 3103140533)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [18] [18] [i_1] [i_2] |= var_13;
                    var_20 = (max(var_20, (arr_1 [i_0])));
                }
            }
        }
    }
    var_21 = (max(var_21, ((((~var_0) << (var_3 + 75))))));
    var_22 ^= var_17;
    var_23 = (min((((var_13 ? -1443110861 : (var_6 >= 1443110860)))), (min(var_14, (max(-753341923, 4095))))));
    #pragma endscop
}
