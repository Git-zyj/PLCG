/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((min(((-(~var_12))), (((((max(1, 1152921504606846975))) ? (max(29214, var_6)) : (min(-1039, var_6))))))))));
                var_17 *= (max(((~(min((arr_0 [i_0]), (arr_4 [20] [20]))))), ((~(((!(arr_4 [i_0 + 1] [21]))))))));
            }
        }
    }
    var_18 = (max(var_18, (((!((((((var_4 ? 65535 : var_3))) ? (max(var_6, var_11)) : (((var_10 ? var_15 : var_13)))))))))));
    #pragma endscop
}
