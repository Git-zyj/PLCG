/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [1] = (((255 < (arr_0 [i_0 + 3] [i_0 - 1]))));
        var_19 *= ((((~((17 ? (arr_0 [i_0 + 1] [9]) : 1)))) * -17));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 = ((!(((arr_4 [i_1]) > (arr_4 [i_1])))));
        var_21 = (min(var_21, ((((((arr_3 [i_1]) * 1))) ? (((((arr_3 [i_1]) == (arr_5 [i_1]))))) : (arr_4 [17])))));
    }
    var_22 |= 1;
    var_23 += (!var_0);
    #pragma endscop
}
