/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(((!(!var_2))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 |= (min((~7936), (((arr_2 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0])))));
        var_20 += (((((~(arr_1 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : 557017580657031049)) : ((min((arr_1 [i_0]), var_9)))));
        arr_4 [i_0] [i_0] = (max(var_16, ((17889726493052520567 ? -2147483645 : 557017580657031062))));
        arr_5 [i_0] [i_0] = 557017580657031049;
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_21 = (max(var_21, (!var_3)));
        arr_10 [i_1] = (max(((min((arr_7 [i_1 - 1]), (arr_7 [i_1 - 1])))), ((246 ? var_16 : (arr_7 [i_1 + 1])))));
    }
    var_22 = -var_7;
    var_23 = var_7;
    var_24 = var_8;
    #pragma endscop
}
