/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((50812 << (14732 <= 50796)));
    var_14 = ((((max(var_11, (min(747644306, 14716))))) ? var_0 : var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((0 + (var_8 <= 1))));
                var_15 = arr_2 [i_0 + 1] [i_0];
            }
        }
    }
    var_16 = (var_1 | var_2);
    #pragma endscop
}
