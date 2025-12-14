/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(((!(((var_4 ? var_9 : var_5))))))));
    var_16 = (((((var_4 ? 24941 : var_4))) ? ((-1 ? var_6 : var_3)) : var_8));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (((657796456 ? -24933 : 657796456)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = (((max((!-24920), ((!(arr_1 [i_0]))))) ? (((var_13 + 2147483647) << var_4)) : (min((arr_0 [17]), ((1 ? (arr_0 [i_0]) : var_13))))));
            var_19 = ((~(arr_2 [i_1])));
            arr_4 [i_0] [i_0] [i_1] = (1 > 24941);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_20 = (min(var_20, (((((((657796439 ? -9118 : -12484)) + 2147483647)) << (((-123 + 131) - 8)))))));
            var_21 = (arr_6 [i_0] [i_0] [i_0]);
        }
        var_22 = (arr_6 [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
