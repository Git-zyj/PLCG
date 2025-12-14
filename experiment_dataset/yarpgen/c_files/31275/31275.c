/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = (min(((var_4 ? (!var_2) : var_3)), var_13));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0]) / 1));
        arr_3 [i_0] = ((var_13 ? ((25 ? -1573798793 : 1)) : ((-(arr_2 [i_0])))));
        arr_4 [i_0] = (((-5337687145867069241 ^ 5337687145867069227) ^ (arr_2 [9])));
    }
    #pragma endscop
}
