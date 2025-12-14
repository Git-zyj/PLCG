/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((max(32764, (8286988738840971701 ^ var_9))))));
    var_12 = (min(var_2, -992346433));
    var_13 = ((((((var_0 && 1608020391) ? var_6 : ((var_9 ? var_8 : -1834))))) ? ((((var_0 ? var_8 : -150967803691883243)))) : var_3));
    var_14 = max(((max(-6660173004022858447, var_8))), 4778150673768877283);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, (arr_0 [15])));
        var_16 *= var_2;
        var_17 *= ((!(arr_2 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = (var_0 | 4427843867376438320);
        var_18 = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_19 *= (min(((((max((arr_4 [i_1]), (arr_4 [i_1])))) ? 14772961045474994056 : (((max(63702, var_6)))))), ((((arr_5 [i_1]) || ((!(arr_4 [i_1]))))))));
        var_20 = (min((arr_4 [i_1]), ((var_9 ? (arr_5 [i_1 - 2]) : (arr_5 [i_1 + 1])))));
        var_21 = 9176190816026999980;
    }
    #pragma endscop
}
