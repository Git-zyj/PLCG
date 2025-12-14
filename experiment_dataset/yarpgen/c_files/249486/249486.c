/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (192 / 189);
    var_14 = (((var_7 + 2147483647) << ((((min(193, 47))) - 47))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = 83;
                var_16 = ((172 >= ((-((min(-89, 51)))))));
            }
        }
    }
    var_17 = 228;
    #pragma endscop
}
