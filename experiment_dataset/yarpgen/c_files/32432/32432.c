/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (max(((2147483647 ? ((var_13 >> (((-2147483633 - -2147483632) + 3)))) : (4155588404223150196 < -5))), (-127 - 1)));
        var_20 = -var_3;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] [i_1] |= ((-((max(-117, 4)))));
        arr_7 [i_1] = (((min(var_10, (arr_2 [i_1]))) | ((max(((-(arr_2 [i_1]))), (arr_5 [i_1]))))));
        arr_8 [i_1] = ((-(4 / var_15)));
        arr_9 [i_1] = ((~(min(31958, var_0))));
        var_21 = (arr_4 [i_1]);
    }
    var_22 = (!1);
    #pragma endscop
}
