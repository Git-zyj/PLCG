/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 &= -var_3;

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_14 = ((!(arr_0 [i_0 - 4])));
        var_15 -= (max((arr_0 [i_0]), ((((((arr_0 [i_0 + 2]) ? 225 : (arr_2 [i_0])))) ? ((((arr_0 [23]) / (arr_1 [i_0 - 2] [i_0])))) : (max(18446744073709551615, (arr_1 [i_0] [i_0])))))));
        var_16 = (min(var_16, (((!(((arr_1 [i_0] [i_0 + 2]) < (arr_1 [i_0] [i_0 - 3]))))))));
        var_17 -= ((~(((arr_2 [i_0 - 4]) * 0))));
    }
    var_18 = var_9;
    var_19 = (!var_5);
    #pragma endscop
}
