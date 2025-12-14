/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(var_12, -1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = -1139070320005054676;
        var_16 = ((-1139070320005054656 ? -1139070320005054679 : 8382611408459048276));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = (((((arr_5 [i_1]) ? 255 : var_13))) ? (arr_5 [i_1]) : (0 <= 255));
        arr_8 [i_1] [i_1] = ((((var_0 && (arr_6 [i_1] [i_1]))) ? (~-2763069836846321776) : 1137030997246315351));
        arr_9 [i_1] = (-(((min(3, var_2)) - (~-2763069836846321762))));
        arr_10 [i_1] [i_1] = (((-9223372036854775807 - 1) || -1));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_13 [i_2] = max((arr_5 [0]), (arr_5 [0]));
        var_17 = (((-((6976649450465384288 ? var_5 : (arr_1 [i_2]))))));
        arr_14 [i_2] = (-9223372036854775807 - 1);
    }
    var_18 ^= ((((~(min(var_10, -5905271537843589287))))) ? var_3 : (-9223372036854775807 & var_3));
    #pragma endscop
}
