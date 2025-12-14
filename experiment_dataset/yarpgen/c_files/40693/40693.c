/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_9 ? (((((var_16 ? var_4 : 4294967285))))) : (max(((max(var_7, var_18))), var_8))));
    var_20 = (max(var_20, (-var_11 != var_11)));
    var_21 = ((((!(!var_5))) ? var_18 : var_2));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_22 = (max(var_22, ((21192 != (min((arr_1 [8]), (arr_1 [2])))))));
        var_23 = (max((arr_0 [6]), 3));
        arr_2 [14] [i_0] = ((arr_1 [i_0]) * 7);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_24 = (max(4294967288, 0));
        var_25 ^= ((!((!(-8576437345647968826 == 7)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2] |= (arr_7 [i_2]);
        arr_11 [6] [i_2] = (!64);
        var_26 = (((((6 ? (arr_5 [i_2] [i_2]) : (arr_3 [i_2] [i_2])))) ? (((arr_9 [i_2]) & 65515)) : (arr_4 [i_2] [i_2])));
        var_27 = 132;
    }
    #pragma endscop
}
