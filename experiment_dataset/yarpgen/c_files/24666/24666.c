/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, -32250));
        var_17 = -122865838;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_18 ^= 32227;

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_7 [i_2] = (((arr_6 [i_1] [i_1] [i_2]) ? ((-(arr_3 [8]))) : 32247));
            arr_8 [i_2] = (~(((arr_3 [i_2]) ? (arr_5 [i_2] [i_1] [i_1]) : -32250)));
            var_19 = ((!(arr_0 [i_2])));
        }
        arr_9 [i_1] = 47667;
        var_20 &= ((17869 < (arr_3 [i_1])));
        var_21 += ((((!(arr_2 [i_1] [i_1]))) || (((9244 ? 31896 : (arr_0 [i_1]))))));
    }
    #pragma endscop
}
