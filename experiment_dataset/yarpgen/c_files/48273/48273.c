/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((((var_5 ? 17719576030112617449 : var_1)) ? ((95 ? -508483327 : 2523948272)) : (var_7 | 0)))))));
    var_14 |= 4294967280;
    var_15 = (((((-1 ? var_2 : var_6))) ? var_6 : (max(((-16304 ? 231 : var_9)), -9446))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 += (arr_1 [i_0] [1]);
        arr_3 [i_0] [1] = (((arr_2 [i_0] [10]) ? (arr_2 [i_0] [i_0]) : -7326435846780469793));
        var_17 = (max(var_17, (((7955841115236297458 ? ((4294967280 ? 1023 : (arr_2 [i_0] [i_0]))) : ((~(arr_0 [5]))))))));
        arr_4 [i_0] = ((1045029751 ? (arr_2 [i_0] [i_0]) : -464627281));
    }
    #pragma endscop
}
