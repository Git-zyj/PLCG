/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((((-9223372036854775807 - 1) | (var_5 * var_12)))), var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((~var_9) << (((((min((arr_0 [i_0] [2]), (arr_2 [i_0] [i_1] [i_0]))) << ((var_10 ? var_3 : var_1)))) - 1038))));
                var_14 = var_0;
                arr_5 [i_0] [i_1] = (min((~-1066185555), ((-(arr_2 [i_0] [12] [i_1])))));
            }
        }
    }
    var_15 = ((~(((((-1066185545 ? 1 : -1066185532)) >= ((max(var_10, var_5))))))));
    var_16 = var_5;
    var_17 = (max(var_17, (((((((!(!var_9))))) < (((!var_9) ? var_12 : var_8)))))));
    #pragma endscop
}
