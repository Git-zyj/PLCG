/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(((-((max(var_1, var_3))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 ^= (max(1, 1));
        var_20 -= var_11;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = 1;
        arr_8 [i_1 - 1] [i_1] = (max((!var_4), 12047951596379161148));
        var_21 ^= var_9;
        var_22 = (min(var_22, var_2));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_23 -= -var_3;
            var_24 ^= (max((arr_12 [i_1] [i_2 - 1] [i_2]), ((((var_11 || 49) < -var_16)))));
            var_25 &= (arr_5 [i_1] [i_2]);
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_26 = (arr_0 [i_3]);
            var_27 ^= 1;
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_28 *= (~var_1);
        var_29 = ((((min(var_17, 1))) || -28));
    }
    var_30 = (max((var_13 / var_4), var_14));
    #pragma endscop
}
