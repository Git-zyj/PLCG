/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((-(2304573933633153942 * 9816)));
        var_18 = ((arr_2 [6]) ^ -419422496);
        var_19 = (arr_2 [i_0]);

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_20 &= ((!(arr_5 [i_1 + 2] [i_1] [i_0])));
            var_21 = (!var_5);
            var_22 = (~6597069766656);
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_23 = (max(var_23, (((504834738 << (26313 - 26312))))));
            var_24 += ((504834725 ? -9817 : -504834762));
            arr_9 [i_0] [i_2] = (~28);
            var_25 = var_1;
            arr_10 [i_2] [i_0] [i_2] = ((-(((var_10 || (arr_2 [i_0]))))));
        }
    }
    var_26 -= ((var_13 ? -var_6 : ((var_14 ? var_14 : var_15))));
    #pragma endscop
}
