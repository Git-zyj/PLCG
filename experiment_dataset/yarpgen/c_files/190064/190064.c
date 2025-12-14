/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (max(var_17, ((((((~(((arr_1 [12]) | var_14))))) ^ ((((max(var_0, (arr_0 [0])))) ? (arr_1 [i_0]) : (~var_5))))))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] [12] = ((((min((arr_1 [i_0]), (arr_1 [i_0])))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : ((((min((arr_0 [i_0]), (arr_0 [i_0])))) ? var_13 : var_9))));
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (arr_1 [i_1])));
        var_19 = ((((((255 ? (arr_1 [i_1]) : (arr_5 [i_1])))) ? ((max((arr_1 [i_1]), var_13))) : 0)));
        var_20 ^= ((min((((var_12 * (arr_4 [i_1]))), (min(var_6, var_9))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_21 = -341;
        var_22 = ((((~(arr_7 [i_2]))) >> (((arr_1 [i_2]) - 28948))));
    }
    var_23 = (max(var_8, var_11));
    #pragma endscop
}
