/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(9208070916683017393, (((-34 ? var_0 : var_14)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_21 = (!(((arr_3 [i_1] [i_1 + 2] [i_1]) < (arr_3 [i_1] [i_1 + 2] [i_1]))));
            var_22 = ((!(((var_19 - (arr_4 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_23 *= arr_8 [i_0] [2];
            var_24 = (!61);
            var_25 -= ((((max((((!(arr_6 [i_0] [0] [i_0])))), (~49)))) ? (var_4 & var_8) : var_9));
            var_26 = (max((arr_7 [i_0] [i_2 + 1] [i_0]), ((max((arr_1 [i_0] [i_2 + 1]), var_0)))));
        }
        var_27 ^= (((((var_7 ? (((max(139, 0)))) : ((var_6 ? var_18 : var_12))))) ? (max((((var_12 ? 1 : var_0))), var_7)) : (((((max(1, 67104768))) ? (arr_5 [i_0] [i_0]) : (min((arr_7 [i_0] [i_0] [i_0]), (arr_5 [i_0] [9]))))))));
        var_28 = (max(var_19, var_5));
        var_29 = 67104768;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_30 = (((arr_4 [i_3]) ? 18446744073709551615 : (arr_3 [i_3] [i_3] [i_3])));
        var_31 = ((!(arr_10 [i_3] [i_3])));
        var_32 &= ((!0) >> var_3);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_33 = (-9223372036854775807 - 1);
        var_34 = var_1;
    }
    var_35 = var_18;
    #pragma endscop
}
