/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((61 ? -109 : -17923));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (~(max(((var_0 ? (arr_0 [i_0]) : (arr_1 [i_0]))), (((arr_1 [i_0]) & (arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = ((((min((~-4228654469908462914), var_11))) || ((71 != (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_1] |= (((((((arr_0 [i_0]) ? var_17 : 71)) << (((arr_0 [i_0]) - 27798)))) + ((((!(((1152921504606846976 ? (arr_0 [i_0]) : (arr_4 [i_1]))))))))));
            arr_6 [i_0] [i_1] = (min(((min((min(var_10, (arr_1 [i_1]))), -4647387740392155499))), var_0));
        }
    }
    var_22 = var_7;
    #pragma endscop
}
