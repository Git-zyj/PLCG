/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 &= arr_1 [i_0];

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_16 = ((((((var_13 ? var_6 : var_1)))) || (((arr_2 [i_1 + 1] [i_1 + 1]) && ((max((arr_2 [i_0] [i_0]), -193613649)))))));
            var_17 = var_6;
            arr_5 [i_1] = var_3;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_10 [i_0] [i_2] [i_0] = 22;
            var_18 *= ((var_2 <= var_11) / ((-71 ? 11 : -1322704480)));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            var_19 = (min(var_19, var_9));
            var_20 = (((arr_7 [i_3 + 1] [i_3 - 1] [i_3 - 1]) % (arr_7 [i_3 - 2] [i_3 - 1] [i_3 + 1])));
        }
    }
    #pragma endscop
}
