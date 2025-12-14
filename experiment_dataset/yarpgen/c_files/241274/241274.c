/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_17 ^= (arr_2 [i_1] [i_0]);
                var_18 = (min((min(14030818712481797476, 1794279352)), 65520));
                var_19 &= -1794279339;
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
