/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    var_19 ^= (((((arr_0 [i_0]) || (arr_0 [i_2]))) ? (((arr_0 [i_1]) ^ (arr_0 [i_0]))) : (arr_0 [i_1])));
                    var_20 *= max((((arr_4 [i_2 - 1] [i_2 - 3] [i_2 - 1]) + (arr_5 [i_0] [i_2 + 4] [i_2 - 2] [i_2 - 3]))), ((((arr_4 [i_2] [i_2 + 1] [i_2 + 4]) ? 0 : 13))));
                }
            }
        }
    }
    var_21 = var_6;
    var_22 = (max(((((-9223372036854775806 ? 103 : 17926321768708741286)))), (((~var_4) ? (~9223372036854775805) : (~3033123394091323907)))));
    var_23 = var_11;
    #pragma endscop
}
