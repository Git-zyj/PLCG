/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (min((~-1242819663), var_7));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_20 = (((arr_2 [i_0] [i_0]) ? 1 : (((arr_0 [i_0]) ? var_18 : 15))));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 3]) : ((-(arr_2 [i_0 - 4] [i_0 + 1])))));
        var_21 *= (~3);
        var_22 += (((arr_0 [i_0 - 1]) ? (((var_15 >= (arr_0 [i_0])))) : 86));
    }
    var_23 = (min(var_23, ((max((~var_12), (((!((max(0, 1)))))))))));
    #pragma endscop
}
