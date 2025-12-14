/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_14 = ((max(2700357771, -17031)));
        var_15 = ((-17037 ? 1594609510 : 1594609525));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 = var_2;
        var_17 = (min(var_17, (((((max(var_13, var_2))) ? var_3 : ((max(var_7, var_3))))))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_1] = var_13;
            var_18 = (max(var_18, (((1956251437 - (var_13 ^ var_9))))));
            arr_11 [i_2] = -2029706260;
        }
    }
    var_19 ^= max(1061002510, 2700357770);
    #pragma endscop
}
