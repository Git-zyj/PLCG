/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 += (((-6999118154649641733 + 9223372036854775807) >> (119 - 80)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_17 &= (((((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_0 [i_0]))) < var_10));
            arr_6 [i_1] [i_0] [i_0] = ((~(((((var_11 ? var_8 : var_8))) ? ((min(67, var_12))) : var_9))));
            arr_7 [i_0] = (9589 < 0);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_11 [i_0] [i_0] = ((~(55946 / var_10)));
            arr_12 [i_2] [i_2] [i_0] &= (!var_15);
            var_18 = (min(var_18, (((var_0 ? (arr_3 [i_0] [i_2] [i_0]) : var_6)))));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_19 = (((31 < 73) ? (arr_1 [i_3]) : ((((((arr_15 [14] [i_3]) ? 0 : 4115268035))) ? (((!(arr_5 [i_3])))) : ((12164901373193070586 ? var_7 : 1))))));
            var_20 = (max(var_20, ((((((min(var_12, 3660900608361566821)) ? (arr_14 [i_0]) : ((-(arr_15 [i_0] [i_3]))))))))));
            var_21 *= ((((~var_0) ? (arr_3 [i_0] [i_0] [i_0]) : var_2)) != (arr_0 [i_0]));
            arr_16 [i_0] [i_0] [i_0] = (((((var_2 < var_11) ? ((var_2 ? 122 : var_5)) : var_2)) * var_2));
            var_22 = (max(var_22, (arr_0 [i_3])));
        }
    }
    var_23 = min((max((158 != var_0), var_4)), (((!(~var_13)))));
    var_24 = (((~11) - (var_14 != var_11)));
    var_25 = (max(var_25, (((0 ? ((511 ? var_13 : (var_11 != var_4))) : ((min(902662598, var_10))))))));
    #pragma endscop
}
