/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(4294967295, 906104346));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_16 += (var_1 ? (1 + 1) : (max(15, -1)));
                arr_5 [i_0 + 2] [i_1] [i_0] = (((((16670373524443746232 ? var_5 : (~var_0)))) > 9223372036854775807));
            }
        }
    }
    #pragma endscop
}
