/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (((max(1301926164, ((1 ? 1 : -124))))) ? var_1 : (min(976848989, (1 / 124))));
                arr_5 [i_0] [i_1] [i_1] = ((~(4454603558187197922 != 47)));
            }
        }
    }
    var_15 = max(255, (max(9, 221)));
    var_16 = (((((max(var_13, 1) > (((255 ? 2147483647 : 2147483647))))))));
    var_17 = (var_13 ? 2147483647 : ((~(min(var_9, var_0)))));
    #pragma endscop
}
