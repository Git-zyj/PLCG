/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((4 ? (!var_3) : (min(var_7, 14)))) & (((var_12 < 1) ? 18446744073709551605 : (var_4 - 18446744073709551615)))));
    var_18 = -var_0;
    var_19 = var_14;
    var_20 = ((((var_11 <= ((var_3 ? var_11 : 15939))))) > var_12);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = (((-(arr_3 [i_0] [i_0]))));
        var_22 = var_10;
        var_23 = ((48072 ^ ((max(1, 80)))));
        arr_4 [i_0] = (max(((min(1, 1))), (((32767 < ((11542786513467361428 ? 8823884188956876211 : (arr_1 [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_24 = 1;
        var_25 = (arr_5 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] = (((((68 ? 1 : 3))) ? (arr_5 [i_2 + 1] [i_2 + 1]) : 4661671720148058382));
        var_26 = var_2;
    }
    #pragma endscop
}
