/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (var_5 ? var_1 : (min(((var_7 ? var_9 : var_4)), var_10)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 *= ((((min((arr_1 [i_0]), (arr_0 [8] [i_0])))) ? ((((((arr_1 [i_0]) ^ (arr_1 [i_0])))) ? ((((1 > (arr_1 [i_0]))))) : var_12)) : (((((arr_2 [i_0] [i_0]) > (((arr_0 [i_0] [i_0]) ? var_8 : 186))))))));
        arr_3 [8] = var_14;
        var_22 = (arr_1 [i_0]);
        var_23 = (max(var_23, (((max(((((arr_2 [i_0] [i_0]) ^ (arr_1 [i_0])))), (min(255, -1)))) == var_8))));
    }
    var_24 *= var_6;
    var_25 = (max(var_25, (var_3 == 8192)));
    var_26 = var_12;
    #pragma endscop
}
