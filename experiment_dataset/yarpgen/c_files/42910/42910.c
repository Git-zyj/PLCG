/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_8 ? (max(25, 113424650)) : (~41)));
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 *= (arr_5 [i_0] [i_1] [i_2]);
                    var_17 ^= -8778;
                    var_18 -= ((8777 ^ var_7) > (((((min(-8763, var_10)))) % -8161632160824820278)));
                }
            }
        }
    }
    #pragma endscop
}
