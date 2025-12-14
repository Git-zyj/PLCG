/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (arr_3 [16] [i_0] [16]);
                var_16 += (((((+(((arr_4 [i_0] [2] [i_1 + 2]) - (arr_5 [i_0] [19] [i_0])))))) % (arr_0 [i_0] [15])));
            }
        }
    }
    var_17 = (min(var_17, var_6));
    var_18 = ((((max((8830803038684498057 << var_3), (var_13 >= var_0)))) ? (max((((var_11 ? var_1 : var_1))), var_13)) : var_8));
    #pragma endscop
}
