/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = (!47867);
    var_17 &= ((!(((var_4 | -63) > var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = ((((((min(var_7, var_14)) | (var_1 + 4294967295)))) != (5091643350713488843 | 710)));
                arr_5 [0] = (max(((var_0 ? var_1 : var_2)), (((min(4294967286, var_6)) + (1363337691 ^ 63097)))));
                arr_6 [i_0] [i_0] = ((((((var_4 ? var_3 : var_8)) ? ((var_6 ? var_7 : var_2)) : (((max(28314, var_12))))))));
            }
        }
    }
    var_19 = (min(var_3, var_1));
    #pragma endscop
}
