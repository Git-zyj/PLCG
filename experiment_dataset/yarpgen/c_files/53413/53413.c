/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 = var_10;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_19 = ((((max((var_9 >= 0), var_13))) | (41862 || 23886)));
            var_20 = (i_0 % 2 == 0) ? (((var_13 % var_6) >= (((arr_0 [i_0]) >> (((arr_0 [i_0]) - 49317)))))) : (((var_13 % var_6) >= (((arr_0 [i_0]) >> (((((arr_0 [i_0]) - 49317)) + 30273))))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_21 = ((~((var_14 ? (arr_1 [i_0]) : var_10))));
            arr_10 [i_0] [i_2] |= (((var_1 << (41862 - 41847))));
        }
        var_22 = max(((33554431 | (arr_5 [i_0]))), var_12);
        arr_11 [10] [i_0] &= (var_10 && 11);
    }
    #pragma endscop
}
