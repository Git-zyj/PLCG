/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = ((~(~var_1)));
            arr_8 [i_0] [i_0] [i_1] = (min((min(var_3, var_14)), var_3));
        }
        var_15 = (min(var_15, var_0));
        arr_9 [i_0] = ((!(~var_11)));
        var_16 *= 224;
        var_17 *= (-var_5 >> (!var_9));
    }
    var_18 ^= (((((var_10 ? (min(var_12, var_14)) : ((var_13 ? var_5 : 4262435031769100172))))) && (((-9 + (max(1, var_8)))))));
    var_19 = ((var_0 ? var_0 : var_10));
    #pragma endscop
}
