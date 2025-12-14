/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 2836343118;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (!192);
        arr_3 [1] [i_0] = (18446744073709551589 && var_14);
    }
    var_18 = var_0;
    var_19 |= ((var_16 ? (+-15) : ((min(var_5, 2305838611167182848)))));

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [5] [i_1] = (((min((arr_5 [5] [i_1]), (-13 - var_14))) >= var_14));
        var_20 |= ((var_12 + ((-(arr_5 [i_1] [i_1])))));
        arr_7 [i_1] = min((((arr_4 [i_1]) ? var_6 : 100663296)), (~18446744073608888301));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_21 = (((100663296 * var_0) ? var_7 : ((((!(arr_8 [i_2 + 1])))))));
        var_22 = (max(var_22, 7420102002500481356));
    }
    #pragma endscop
}
