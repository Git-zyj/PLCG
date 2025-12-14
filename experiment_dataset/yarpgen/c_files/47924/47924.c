/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (((arr_1 [i_0] [i_0]) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_2)) : (min(1622683306, (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = 82;
        var_15 = (((((-(arr_1 [i_0] [i_0])))) ? ((5 ? 2990866696404698709 : 18446744073709551592)) : (arr_1 [i_0] [i_0])));

        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_8 [i_0] [i_1] [i_0] [i_0] = (((arr_4 [i_1 + 2] [i_2]) ? ((var_6 ? ((-(arr_1 [i_0] [1]))) : var_1)) : 2956));
                var_16 = var_14;
                arr_9 [i_0] [i_0] = ((((((arr_1 [i_1 + 2] [i_0]) ? var_2 : (arr_1 [i_1 - 2] [13])))) ? ((var_5 ? var_9 : (arr_7 [i_1 - 3] [i_1 - 3] [i_1 - 1]))) : 88));
            }
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_17 = var_8;

                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {
                    var_18 = ((2795839999 ? var_9 : ((min((arr_5 [i_4 - 1] [i_4 - 1] [i_4 - 2]), 1)))));
                    var_19 = (((((-((1987470328 ? var_1 : 36))))) ? (((arr_5 [i_4 - 1] [i_4 - 1] [i_1 - 2]) ? -1 : (arr_5 [i_4 - 3] [i_4 - 3] [i_1 - 3]))) : -31));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_20 = 2147483645;
                    arr_18 [i_0] [11] [i_1] [i_1] [i_3] [i_5] = ((-(arr_14 [i_0] [i_1])));
                    arr_19 [i_0] [i_1] [i_3] [i_1] = (min(1, -13287470639468237029));
                    var_21 = (min(var_21, (arr_10 [8] [i_1] [i_1] [i_5])));
                    var_22 = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    arr_22 [i_0] [i_0] [i_1] [i_3] [i_1] [i_0] = (arr_15 [i_3] [i_1] [i_1]);
                    var_23 = (min(var_23, (((224 ? 9514 : 33266)))));
                }
            }
            arr_23 [i_0] [i_0] [i_1] = ((var_4 ? ((((arr_0 [i_1 - 2]) ? (arr_16 [i_0] [i_0] [i_1 + 1] [i_0]) : -10282))) : ((var_3 ? (arr_0 [i_1 - 1]) : (min(var_9, 15455877377304852922))))));
        }
        arr_24 [i_0] = var_7;
    }
    var_24 = var_13;
    #pragma endscop
}
