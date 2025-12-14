/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (((arr_1 [i_0]) ? var_15 : (arr_1 [i_0])));
        var_19 = ((!(-101 <= var_8)));
        var_20 = (((arr_1 [i_0]) == 895471459625382207));
        arr_3 [i_0] [10] = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (((((((~var_4) || (var_7 + var_7))))) * (756357890 * 3728591139041287742)));
        arr_8 [i_1] = (max(((((var_5 * 0) | (arr_6 [i_1 - 1])))), var_7));
    }
    var_21 = ((((((var_10 + 2147483647) >> (((~var_15) - 17393745550879892327))))) ? ((var_10 ? var_12 : (100 == var_2))) : (((0 & var_1) | (~1303)))));
    #pragma endscop
}
