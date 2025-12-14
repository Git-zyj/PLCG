/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= 2365398356191881548;
    var_13 = var_11;
    var_14 = 226433113;
    var_15 = ((((min((~1700193498), (max(-2365398356191881549, -6885502804449666017))))) ? var_5 : (((~((var_7 ? -80 : var_3)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((arr_0 [i_0] [i_0]) + ((0 | (((arr_1 [i_0]) ? -1 : var_1)))));
        var_16 += (min((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 ^= (arr_5 [i_1]);
        arr_7 [i_1] &= (((arr_4 [i_1]) | (arr_4 [i_1])));
    }
    #pragma endscop
}
