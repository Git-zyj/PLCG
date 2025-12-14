/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_20 = (40 ? (arr_3 [i_0 + 2] [i_0 - 1]) : (arr_3 [i_0 + 1] [i_0]));
        arr_4 [i_0] = 62;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_21 = (var_1 ? ((var_12 ? (((max(var_18, 0)))) : ((6 ? 60975 : 2973728239)))) : (((10 ? 49392 : 143))));
        var_22 = ((((37117 >> (49364 - 49353)))) ? 16144 : (min(3941685730, 4294967280)));
    }
    #pragma endscop
}
