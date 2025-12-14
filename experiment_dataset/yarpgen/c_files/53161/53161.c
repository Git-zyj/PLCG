/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 = (max(var_19, ((((arr_3 [i_0] [8]) | (arr_4 [i_0]))))));

            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                var_20 &= ((!(arr_2 [i_0])));
                var_21 = ((var_3 | (arr_0 [i_2 - 1])));
                var_22 = (arr_3 [i_1] [i_0]);
            }
            arr_7 [i_0] [i_0] [i_0] = (arr_0 [i_0]);
        }
        var_23 = ((var_4 < (18446744073709551615 || -1150172712)));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_24 = (((var_8 > var_16) + ((~((min(var_2, var_3)))))));
            arr_13 [i_4] [i_4] [7] &= (arr_10 [i_3]);
        }
        var_25 = min((((min(0, 1)))), (-1018886440 != 17572));
        var_26 |= (arr_12 [i_3] [i_3]);
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_27 = (min(var_27, (((((max((arr_14 [i_5] [i_5]), var_0))) || (((~(arr_14 [i_5] [i_5])))))))));
        var_28 = (max(var_28, (((var_11 % (min(((min(1, var_2))), (((((arr_10 [i_5]) + 2147483647)) << (((((arr_0 [i_5]) + 1681668321)) - 13)))))))))));
    }
    var_29 -= (-6437 | 17548);
    var_30 = var_4;
    var_31 += (((((var_13 | var_3) ^ (~var_17))) | (1 == 1)));
    var_32 -= var_8;
    #pragma endscop
}
