/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((2295397885 * 0) && ((max((var_15 && var_14), var_15)))));
    var_20 = var_0;
    var_21 = -9223372036854775786;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_22 = (arr_1 [i_0 - 4] [i_0 + 1]);
        var_23 = ((-(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_24 = ((((max((arr_0 [i_1]), (arr_3 [i_1] [i_1])))) && ((!(arr_4 [i_1])))));
        var_25 &= ((!((((arr_0 [12]) ? 656718263 : -1741242259)))));
        var_26 = (min(var_26, ((((((-14309943710405391363 ? 2428400069 : (arr_4 [6])))) ? (max((((!(arr_5 [10])))), (max(443372625, var_12)))) : (((((arr_4 [6]) && (~-188967558))))))))));
        var_27 = (min(var_27, 4294967295));
    }
    var_28 = (max((var_3 ^ var_6), (((max(var_11, 581373394)) * -1089470258))));
    #pragma endscop
}
