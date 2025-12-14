/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_14);
    var_18 = (((((-var_13 ? (~74) : (70 && 87)))) ? (min((min(-1, var_0)), var_6)) : (((((-75 ? 15198742831789984441 : -14))) ? var_5 : var_15))));
    var_19 = var_0;
    var_20 |= var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = var_14;
        var_22 += ((8962 ? ((var_0 ? (arr_0 [i_0]) : 15036762638086363961)) : (((74 ? -63 : var_15)))));

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_23 = (((~(arr_4 [i_1] [i_1 - 1]))));

            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                var_24 = ((-14 ? 63 : (arr_5 [i_0] [i_2] [i_2 + 2])));
                var_25 ^= -var_2;
                arr_9 [i_0] [6] [i_1] [i_1 - 1] = ((((arr_0 [8]) ? (arr_2 [i_0] [i_0]) : var_5)));
            }
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                var_26 = 124;
                arr_12 [i_1] [i_1] = 9223372036854775807;
                var_27 = (arr_11 [i_0] [i_1] [i_3 - 3] [i_3]);
            }
        }
    }
    #pragma endscop
}
