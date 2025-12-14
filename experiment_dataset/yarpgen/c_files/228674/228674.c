/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_10 = (((-25 ? (((var_6 ? 16 : 83)) : (min(var_1, var_5))))));
                    var_11 = -156;
                    var_12 = (max((max(var_0, 4294967246)), var_6));
                    var_13 = var_6;
                }
            }
        }
    }
    var_14 |= 18446744073709551607;
    #pragma endscop
}
