/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_1 <= (((-((max(var_12, 62))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = var_4;
        var_16 = 19;
        var_17 = (((15 & var_1) ? (max((((1056857573 ? var_7 : 0))), (arr_1 [i_0] [i_0]))) : 1056857580));
        arr_5 [0] = min(1056857574, 1906053818);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = arr_8 [i_1];
        var_18 = (((((1056857568 ? 1 : 65535))) ? (~4) : (arr_0 [1] [i_1])));
        var_19 = (((arr_1 [i_1] [i_1]) && (arr_1 [i_1] [i_1])));
        arr_11 [i_1] = 4294967295;
    }
    #pragma endscop
}
