/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -8;
    var_19 = (min(var_4, var_0));
    var_20 = (min(var_20, var_6));
    var_21 = (-8 * 12472759280178525421);

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_22 = (max(((min(-7, var_15))), (arr_1 [i_0])));
        var_23 = (((min((arr_0 [i_0 - 1] [1]), (arr_0 [i_0 + 1] [i_0]))) ? ((max(-32755, 32755))) : ((-(arr_0 [16] [16])))));
        var_24 = (((((((5580917482671536465 ? (arr_2 [i_0]) : 7))) ? 1 : 1))) ? var_6 : 32763);
        var_25 = (~(((1 < (max(var_1, 11408963975806749609))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_1] = ((+(((!124) ? 1 : ((~(arr_5 [i_1] [i_1])))))));
            var_26 = (arr_3 [i_1]);
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_27 = ((7 ? ((+(((arr_1 [i_3]) ? var_0 : 32754)))) : (((((min(8, 1))) && (((var_0 * (arr_3 [i_3])))))))));
            arr_11 [i_1] [i_3] [i_3] = (((max(9223372036854775807, 1))) && (-14205 / 32754));
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_28 = ((-((min((arr_10 [i_4] [i_1]), (arr_10 [i_1] [i_4]))))));
            var_29 = 0;
        }
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        var_30 = (min((max(11808, (67108608 ^ -6341240320524188144))), ((((arr_5 [i_5] [19]) ? (1 / -68) : ((1 ? (arr_4 [i_5 + 1] [i_5]) : 1)))))));
        var_31 = (((arr_7 [i_5]) ? ((((arr_3 [i_5 + 1]) * (576460202547609600 == -32749)))) : ((106 % (~var_13)))));
        var_32 = (max(var_32, (((((arr_0 [i_5 + 1] [i_5 + 1]) - 53727))))));
    }
    #pragma endscop
}
