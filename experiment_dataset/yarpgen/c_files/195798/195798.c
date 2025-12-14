/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_1 <= -18142795330923159314);
    var_20 = var_11;
    var_21 = (~-231660882638208363);
    var_22 = (max(var_22, var_8));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_23 *= var_2;
        arr_3 [i_0] = ((-(arr_1 [i_0] [i_0])));
    }
    #pragma endscop
}
