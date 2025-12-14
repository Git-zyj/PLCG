/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (57 <= 0);

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_14 = max((arr_0 [i_0]), (min(252, (max(240, var_6)))));
        var_15 += 255;
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_16 = 17;
        var_17 = ((135 ? 23 : 181));
    }
    var_18 = (max(var_7, 135));
    var_19 = var_8;
    var_20 = ((((min(var_4, var_1))) & ((((240 >> (var_0 - 155)))))));
    #pragma endscop
}
