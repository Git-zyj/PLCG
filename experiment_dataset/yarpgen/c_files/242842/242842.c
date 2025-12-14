/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(~-var_18)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((((max((arr_4 [i_0] [i_1 + 1] [i_0]), (arr_4 [i_0] [i_1 + 1] [i_0])))) ? (((arr_4 [i_0] [i_1 - 2] [i_0]) ? var_5 : (arr_4 [i_0] [i_1 + 1] [i_1]))) : (((arr_4 [i_0] [i_1 - 1] [i_1]) ? (arr_4 [i_1] [i_1 - 2] [i_1]) : (arr_4 [i_0] [i_1 + 1] [7]))))))));
                arr_7 [0] = (arr_1 [i_1 - 1] [13]);
            }
        }
    }
    var_22 = (max(var_22, var_3));
    var_23 = (min(var_23, (((var_4 ? ((var_3 ? var_16 : ((var_1 ? var_18 : var_16)))) : ((max(((var_5 ? var_1 : var_6)), var_12))))))));
    var_24 = var_11;
    #pragma endscop
}
