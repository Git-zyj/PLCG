/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 133;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_13 += (arr_3 [i_0] [i_0]);
        arr_4 [3] = ((-(((var_8 != (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_14 *= (min((((((var_6 * (arr_6 [i_1])))) ? 108 : 102)), 108));
        var_15 = (max(4294967285, ((4294967278 ? 10 : 18))));
        var_16 = (((((11 / (~var_10)))) ? ((((var_9 + (arr_7 [i_1] [i_1]))))) : (max((arr_6 [i_1]), ((((arr_5 [i_1]) & (arr_0 [i_1]))))))));
    }
    var_17 = 255;
    var_18 = (((~1) ? (min((((var_9 ? var_4 : var_6))), var_5)) : var_9));
    #pragma endscop
}
