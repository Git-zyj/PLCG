/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~((var_7 ? 67 : ((min(var_13, var_0)))))));
    var_20 = var_7;
    var_21 = ((-((-var_8 ? var_0 : (var_0 > var_9)))));
    var_22 = ((~(var_16 < -68)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_5;
        arr_5 [i_0] = (max((((arr_3 [i_0] [i_0]) ^ 471821079)), (((~(arr_0 [i_0] [i_0]))))));
        arr_6 [i_0] [i_0] = (arr_2 [i_0]);
    }
    #pragma endscop
}
