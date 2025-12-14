/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] |= (arr_0 [5]);
        var_11 = (max(var_11, ((((1239738803 * 4241020008502297791) ? (arr_0 [i_0]) : (~2254905545))))));
    }
    var_12 = (min(var_12, (var_8 >= 4164479846)));
    var_13 = (min(var_13, ((((((var_1 ? (((2254905534 ? 9498 : var_9))) : var_7))) ? (((-((var_6 ? 121 : var_5))))) : (max(51, -537793550994179414)))))));
    var_14 = var_0;
    var_15 = 2062801276;
    #pragma endscop
}
