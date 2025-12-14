/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_4 [0] [i_0] = ((arr_3 [i_0]) / (((arr_2 [i_0]) ? -1421183180 : var_1)));
        var_19 = (((1463346158540289334 & 13100667899614531849) ? (17 - var_0) : (((arr_2 [i_0]) ? 31787 : var_3))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_20 = var_4;
        var_21 = (((((((min((arr_7 [i_1]), (arr_5 [i_1] [i_1])))) ^ 11980316915939959367))) ? ((85 ? ((1463346158540289334 ? 5346076174095019769 : (arr_3 [i_1]))) : 253)) : -var_0));
        var_22 += ((((var_16 ? var_16 : 1421183175)) / var_11));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_23 = ((1852577872 ? var_7 : ((((min((arr_10 [i_2] [i_3] [i_2]), -8006921821928996076))) ? (((max(98, var_17)))) : (arr_10 [i_2] [i_2] [i_2])))));
            var_24 = (arr_8 [i_2]);
            var_25 = (max(var_25, 156));
        }
        var_26 &= ((((min((arr_8 [i_2]), (30 * var_4)))) ? (arr_9 [i_2]) : (((min(162, 1))))));
        var_27 = (arr_10 [i_2 + 1] [i_2 + 1] [i_2]);
        var_28 = (((((((((arr_9 [i_2]) ? 2 : var_5))) ? (((var_11 + 2147483647) >> (((arr_11 [i_2]) - 17881286258140682072)))) : (((arr_9 [i_2]) & var_8))))) ? ((var_11 ? ((max((arr_8 [i_2]), var_1))) : (((arr_11 [i_2]) ? 1 : (arr_11 [i_2]))))) : 13549));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_29 ^= (arr_13 [i_4]);

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {

            for (int i_6 = 3; i_6 < 19;i_6 += 1)
            {
                var_30 = (((((arr_15 [i_5]) * 254)) != 30));
                var_31 = var_14;
            }
            var_32 = ((209 % (((var_5 || (arr_13 [i_4]))))));
        }
        var_33 = (((arr_16 [1] [i_4] [1]) ? ((-(arr_12 [i_4] [i_4]))) : (((arr_16 [20] [i_4] [14]) ? (arr_15 [20]) : (arr_17 [i_4] [i_4] [i_4])))));
    }
    var_34 &= (max((((((var_18 ? var_3 : var_7))) ? var_17 : var_4)), (((((8719 ? 1105160061 : var_8))) * ((var_11 ? var_17 : var_4))))));
    #pragma endscop
}
