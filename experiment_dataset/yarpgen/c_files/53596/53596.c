/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [2] = 104;
        arr_4 [i_0] = (arr_1 [8]);
        arr_5 [i_0] [3] = ((-((var_10 ? var_5 : var_6))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = ((arr_7 [i_1]) && (arr_7 [2]));
        var_13 = -48;

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_14 = (var_4 | 1);
            var_15 |= ((((var_12 ? -27 : var_1))) ? var_11 : ((((arr_9 [i_1] [i_1] [2]) ? -56 : (arr_6 [5])))));
            arr_11 [i_2] [i_1] = ((-10995 ? (arr_6 [i_2]) : (((arr_9 [i_1] [i_1] [i_2]) ^ 11782562279478565675))));
        }
    }
    var_16 = var_8;
    var_17 = (max((((((min(var_5, var_0))) ^ -116))), 18446744073709551615));
    var_18 *= var_4;
    #pragma endscop
}
