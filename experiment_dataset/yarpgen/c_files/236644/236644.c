/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((+(((var_12 ^ var_10) ? var_6 : var_9))));
    var_17 = (((min(var_3, var_7)) | (((((min(var_12, var_2))) ? (~23) : (~var_6))))));
    var_18 = var_6;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = ((((((var_1 == (((min((arr_1 [i_0]), var_4)))))))) ^ var_9));
        var_20 |= var_12;
        var_21 = (((arr_1 [i_0]) - var_5));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((~((max(var_15, var_5)))));
        arr_5 [i_1] = (((min(9223372036854775790, 58)) >> (((((arr_2 [i_1] [i_1]) ? var_12 : (arr_2 [i_1] [i_1]))) - 5838))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((max(((min(223, 152))), (min((((arr_2 [i_2] [i_2]) ? var_13 : var_2)), (!192))))))));
        arr_9 [i_2] [i_2] = (arr_8 [i_2]);
    }
    #pragma endscop
}
