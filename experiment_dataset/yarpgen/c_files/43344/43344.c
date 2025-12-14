/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_7, ((max(1906228255, 0)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = -25;
        arr_2 [1] = (524287 == ((-((-9176 ? var_10 : var_8)))));
        var_13 += ((var_5 + (min(-1405787972, 1044076981348693594))));
        arr_3 [3] = max((min((arr_1 [i_0]), var_5)), ((-(max(var_3, 18446744073709551615)))));
        var_14 *= ((((((~(arr_0 [i_0]))))) ? var_6 : var_8));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 = ((((min(var_4, (var_7 - 4294967295)))) ? (min((arr_1 [i_1]), var_6)) : var_5));
        arr_8 [12] &= var_7;
        var_16 = ((~(((!(15599122975596001533 / var_5))))));
        arr_9 [i_1] = (!((max((arr_5 [i_1] [7]), (arr_6 [i_1] [i_1])))));
        var_17 = -19387;
    }
    #pragma endscop
}
