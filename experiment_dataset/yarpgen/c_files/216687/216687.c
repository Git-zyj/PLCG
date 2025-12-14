/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~var_2) - ((-61 ? var_8 : (((min(123, -107))))))));
    var_11 ^= var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 ^= (!107);
        var_13 = -var_8;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_14 ^= ((-((min((arr_1 [i_0]), (arr_1 [i_1]))))));
            arr_6 [i_0] [i_1] [i_1] = var_5;
        }
        arr_7 [i_0] = ((min(123, 123)));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_15 = var_9;
        var_16 ^= var_9;
        var_17 = var_8;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_18 -= (min(var_6, (((arr_1 [i_3]) ? var_8 : (arr_2 [i_3] [i_3] [i_3])))));
        arr_13 [i_3] = (((((arr_0 [i_3] [i_3]) ? 126 : (arr_8 [i_3] [i_3]))) << (var_3 + 90)));
    }
    #pragma endscop
}
