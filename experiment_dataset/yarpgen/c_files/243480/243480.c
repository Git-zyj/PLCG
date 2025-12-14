/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (2147483647 & 12);
        var_18 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (((arr_0 [i_0]) ? 4294967283 : (arr_0 [i_0])))));
        var_19 = (~(min((((!(arr_1 [10])))), (arr_2 [i_0]))));
        var_20 = ((!(((((arr_2 [i_0]) ^ 0))))));
        arr_4 [i_0] = (~4294967283);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] = (((arr_6 [i_1] [12]) ? ((min(1, 2097152))) : 0));
        var_21 = ((4294967295 ? (arr_7 [i_1]) : ((((((arr_6 [i_1] [i_1]) | var_5))) ? (-32767 - 1) : (32767 & var_15)))));
    }
    #pragma endscop
}
