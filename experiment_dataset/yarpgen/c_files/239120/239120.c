/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 43540;
    var_21 -= ((((max(var_4, ((43546 ? 43546 : 108))))) ? (+-65535) : var_8));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_22 *= max((((max(2996395649487492098, var_5)) >> ((((43562 ? (arr_1 [i_0 + 2]) : 9223372036854775807)) + 74)))), (((((((arr_2 [14] [14] [14]) ? (arr_0 [i_0 - 1] [6]) : 9223372036854775807))) ? (arr_2 [16] [16] [i_1 - 3]) : (((!(arr_1 [i_0]))))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_23 ^= (((-9223372036854775807 + 9223372036854775807) << (var_10 + 4041880049958160582)));
                    var_24 = (max((11 < 18), -75));
                }
            }
        }
    }
    #pragma endscop
}
