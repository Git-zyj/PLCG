/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_16 = 1;
        var_17 = (min((((arr_0 [i_0 + 1] [i_0]) & var_14)), (min((((arr_0 [i_0] [i_0 - 3]) ? 60 : 152748645)), (arr_3 [i_0 - 2] [i_0 - 1])))));
        var_18 |= ((((((arr_3 [i_0] [i_0 + 1]) ? (arr_3 [i_0] [i_0 - 3]) : (arr_3 [i_0 - 3] [i_0 + 1])))) ? (arr_3 [i_0] [i_0 - 2]) : ((((arr_3 [i_0] [i_0 - 3]) ? (arr_3 [i_0] [i_0 - 1]) : (arr_3 [i_0] [i_0 - 1]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_2 [i_1]) ? ((-6884122925350331568 ? ((192 ? var_11 : var_11)) : 2469406051)) : -5));
        var_19 |= 1;
    }
    var_20 = ((((1644373411 >= ((0 ? var_1 : -41)))) ? var_3 : ((-958160262 ? 28169 : 4))));
    #pragma endscop
}
