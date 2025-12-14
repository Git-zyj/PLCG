/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 |= ((((((arr_6 [i_2] [i_1 + 1] [i_0]) ? (arr_6 [i_0] [1] [i_2]) : (arr_6 [i_2] [i_1 - 1] [i_0])))) ^ ((~(~var_5)))));
                    var_11 = -32742;
                }
            }
        }
    }
    var_12 ^= -var_7;
    var_13 -= (((((min(65527, 1)))) ? (!var_2) : (~var_9)));
    var_14 = ((((var_4 ? (-6920 / 60567) : (var_9 ^ 17179869056))) + var_1));
    var_15 = (-var_7 % var_1);
    #pragma endscop
}
