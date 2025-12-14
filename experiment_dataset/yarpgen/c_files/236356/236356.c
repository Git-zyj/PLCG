/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((max((min(var_5, var_0)), var_5)), ((max(var_8, var_0)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 -= (max((!var_7), ((-(~var_7)))));
        arr_3 [13] [i_0] = max((((-(var_6 & var_6)))), (max((var_9 % var_1), ((max(var_2, var_2))))));
        var_12 = var_4;
        arr_4 [i_0] = max(4099290113207574045, 2719898528);
        var_13 &= ((-(min(var_2, var_0))));
    }
    var_14 = (max((((-(max(var_2, var_2))))), var_1));
    #pragma endscop
}
