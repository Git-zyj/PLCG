/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 245;
    var_19 &= (min(2679927043, var_9));
    var_20 = (max(var_20, var_15));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(8117845204921781965, var_13));
        var_21 = 4499201580859392;
        var_22 = 24;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_23 = (min(var_23, ((((~(((!(arr_6 [9] [i_0]))))))))));
            arr_7 [i_1] = -8117845204921781977;
            arr_8 [i_1] [i_1] = (min((arr_0 [i_0]), (min((~var_16), (arr_6 [i_0] [i_1])))));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_24 = (arr_2 [i_2 + 2] [6]);
            var_25 ^= ((-((~(max((arr_2 [i_0] [i_2 + 2]), -8117845204921781967))))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_26 = (arr_4 [i_3]);
            arr_14 [i_0] [i_0] = ((~((min(1, (arr_1 [i_0]))))));
        }
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        var_27 = var_3;
        var_28 = (-127 - 1);
        var_29 = var_6;
        var_30 = (!-8117845204921781970);
        var_31 = var_4;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_32 += (arr_16 [i_5]);
        var_33 = (max(var_33, (((!(((-(arr_4 [2])))))))));
        var_34 = ((~(min(var_16, -8117845204921781966))));
    }
    #pragma endscop
}
