/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(2531628008098679983, 99))) & (((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))))));
        var_15 = (((((var_2 >= -11646) ? 5878241447872407941 : (((arr_1 [i_0]) ? var_5 : 7651926760335196105)))) > (max((arr_0 [i_0 - 1] [i_0]), var_3))));
    }
    var_16 = (min(var_16, 3089227583));
    var_17 = ((((min((11631 & 4846021830237264928), var_0))) ? (max((((12568502625837143674 ? 111 : 48074))), var_6)) : var_1));
    #pragma endscop
}
