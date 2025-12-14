/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = ((-(0 / 2097151)));
        arr_2 [i_0] = (max(((var_3 ? (2251799813685247 / var_6) : 18444492273895866370)), (((((var_8 != (arr_0 [i_0]))) ? ((((arr_0 [19]) > var_8))) : -var_10)))));
    }
    var_14 = var_3;
    #pragma endscop
}
