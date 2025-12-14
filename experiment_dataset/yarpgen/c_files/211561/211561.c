/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_3));
    var_21 = var_8;
    var_22 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((!(((var_10 ? var_13 : (arr_4 [i_0] [i_1 - 1]))))));
                var_23 = ((((-(min(var_13, (arr_4 [i_0] [1]))))) * (((!2940375386126040233) ? var_5 : (var_10 < var_11)))));
            }
        }
    }
    #pragma endscop
}
