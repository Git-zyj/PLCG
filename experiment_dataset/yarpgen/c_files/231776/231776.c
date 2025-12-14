/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((-1 ? (!var_6) : ((max(var_1, var_10))))))));
    var_13 *= 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (max(var_14, var_8));
                var_15 = ((var_6 ? (((arr_4 [i_1] [i_1]) ? 1 : (arr_3 [i_1] [i_1] [i_0]))) : ((128 ? var_7 : var_0))));
                var_16 = ((-(((arr_1 [i_0] [i_1]) ? var_10 : (arr_3 [i_0] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
