/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= 63436;
    var_17 = min(((1 ? (!127) : var_8)), ((-8473988669858040632 ? var_13 : var_13)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((arr_1 [i_0]) ? 255 : ((min(2100, (arr_0 [i_0]))))));
        var_19 = arr_0 [i_0];
        var_20 = (max(var_20, ((min((arr_1 [i_0]), (min(((-(arr_1 [i_0]))), ((min((arr_1 [i_0]), (arr_1 [i_0])))))))))));
        var_21 = (arr_0 [i_0]);
        var_22 -= (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_23 = (((((~(arr_2 [i_1])))) ? ((-((~(arr_3 [1] [1]))))) : -107));
        arr_4 [i_1] = (arr_2 [i_1]);
        var_24 = (min(((~(((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1]))))), (arr_2 [i_1])));
        var_25 = (min((arr_2 [i_1]), ((((max(9139, (arr_2 [i_1])))) ? ((min((arr_2 [i_1]), (arr_2 [i_1])))) : (arr_3 [24] [23])))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_26 ^= -9151;
        var_27 ^= -9122;
    }
    var_28 = (min(var_28, var_15));
    #pragma endscop
}
