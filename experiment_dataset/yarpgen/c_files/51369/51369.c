/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -9223372036854775797;
    var_20 = var_18;
    var_21 = ((-(4879 == 3186990499)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = -3633004118;
                arr_7 [i_0] = (((((-14879 ? 0 : 0))) ? 1 : (-14860 * 14860)));
                var_22 = (((1 || -262144) ? var_9 : 18606));
            }
        }
    }
    #pragma endscop
}
