/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 ? var_8 : 6228));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (min(((!(arr_1 [i_0] [i_0]))), ((!(arr_1 [i_0] [i_0])))));
        var_16 = (min(var_16, ((((((~((max((arr_0 [i_0]), 32767)))))) && (((arr_1 [i_0] [i_0]) != var_11)))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = (~var_4);
        var_18 -= 6661521044760090561;
    }
    var_19 = (((((((min(255, var_6))) ? var_2 : -11785223028949461054))) ? ((~(81 || var_0))) : ((var_1 / ((var_7 << (var_0 - 2545096372)))))));
    var_20 = (((((var_2 ^ (var_13 && var_2)))) + ((-(min(var_5, var_9))))));
    #pragma endscop
}
