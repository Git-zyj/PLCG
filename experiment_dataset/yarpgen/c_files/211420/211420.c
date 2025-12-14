/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (!var_7)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((var_2 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (((!(arr_0 [7] [i_0])))) : (!var_11));
        arr_3 [i_0] [15] = (((((1154880989 ? ((~(arr_1 [i_0]))) : (~var_11)))) ? (!1154880989) : ((1154880995 ? var_11 : var_6))));
        var_17 = ((~((~(~1154880995)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((!(!6402378673563984903)));
        var_18 = -var_7;
    }
    #pragma endscop
}
