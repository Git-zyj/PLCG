/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!13);
    var_13 = ((~(min(7187, 2))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((((-((-7200 ? (arr_0 [i_0] [i_0]) : -7200)))) + ((min(13, (-31363 + 30502))))));
        arr_3 [i_0] = (((((4310094713418273842 ? -105 : (arr_1 [i_0])))) ? (((~(arr_1 [i_0])))) : (min(2147483647, 1656883341))));
        var_14 = (min(((min((arr_0 [i_0] [i_0 - 1]), -7200))), (max((min((arr_0 [i_0] [17]), 14343521314372001171)), ((min(15, 178)))))));
    }
    #pragma endscop
}
