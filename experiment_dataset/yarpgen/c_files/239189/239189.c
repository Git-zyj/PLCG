/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((((max(3375972028, var_10))) ? var_6 : var_6))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 -= (((((~(max(var_7, -8902952299087703601))))) ? (((((var_6 ? 846161774 : (arr_1 [i_0])))) ? 0 : (min((arr_0 [12]), var_10)))) : var_3));
        var_14 = 7486706048549676239;
        var_15 = (1 ? (((arr_1 [i_0 - 1]) - var_4)) : ((((!(arr_1 [i_0 - 1]))))));
        var_16 &= ((((arr_0 [14]) ? (arr_0 [8]) : var_2)));
        var_17 = ((((var_11 < ((4294967266 ? (arr_1 [i_0]) : var_0)))) ? ((((4294967295 ? var_6 : (arr_0 [i_0]))))) : (((arr_2 [i_0]) ? 64653 : (((arr_1 [i_0 - 1]) ? var_8 : var_10))))));
    }
    var_18 = var_6;
    #pragma endscop
}
