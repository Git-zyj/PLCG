/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((max((min(((min(var_4, var_11))), var_15)), ((max(((var_3 ? 194 : var_7)), (max(var_1, var_9))))))))));
    var_17 = (((((min(var_10, var_7)))) <= (((!(((var_4 ? var_3 : var_15))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = ((var_3 ? (max((var_9 || var_5), (min((arr_0 [i_0]), var_8)))) : (arr_3 [i_0])));
        arr_4 [i_0] [i_0] = (var_2 + 610578068);
        arr_5 [i_0] [i_0] = 610578096;
    }
    var_19 = ((max(var_10, var_12)));
    #pragma endscop
}
