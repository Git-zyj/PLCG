/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = ((-((-((var_8 ? var_1 : 21))))));
        var_16 = 0;
        arr_3 [i_0] [i_0] = -2147483647;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_6 [2] [i_1] [2] = (!23859);
            var_17 *= (((4294967295 ? 1 : 9)) / ((1 ? 88 : -107)));

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                var_18 = (min(var_18, var_0));

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [i_0] [i_4] [i_4] [i_4] [i_0] = (((arr_12 [i_4] [1] [i_2] [9] [9] [i_2]) % var_8));
                        var_19 = (max(var_19, (~-123)));
                        var_20 = (min(var_20, ((((-1875238587 == var_10) && 4)))));
                        var_21 = (min(var_21, ((((((-103 ? -108 : 79))) && (var_11 / -2116695373))))));
                    }
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_22 = (min(var_22, ((((arr_15 [i_1 + 1] [i_3] [i_3] [i_1 + 1] [5] [i_3]) != var_3)))));
                        arr_17 [i_0] [i_0] [i_2] [2] [i_5] = -1875238576;
                        var_23 = ((((((arr_12 [i_5] [i_1] [i_2] [i_3] [i_3] [i_5]) ? -1875238555 : var_1))) ? (arr_15 [i_0] [i_1] [i_1 + 1] [i_2 + 1] [i_3] [i_5]) : (((-119 ? 1875238544 : 232)))));
                        arr_18 [i_0] [i_1] [15] [i_5] [i_5] = ((84 ? 12 : 9));
                    }
                    var_24 = (min(var_24, (!var_9)));
                }
            }
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_25 = -90;
            var_26 = (max(var_26, ((((min(997613919, ((var_4 ? 110 : 1136114335))))) ? ((~((((arr_0 [i_0] [i_0]) && 5))))) : (!106)))));
            var_27 = ((1 ? 634422451 : -733250339873949849));
            var_28 = (65535 / 4209595237481190115);
            var_29 = (max(var_29, (((!(((-2116695348 ? 2147483647 : 1))))))));
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_30 = (((((var_13 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [19] [i_7]) : 0))) ? (((-113 & (arr_11 [i_7] [i_7] [i_7] [i_7] [4] [i_7])))) : ((4767443710732085625 ? (arr_11 [i_0] [i_0] [i_0] [6] [i_0] [i_0]) : var_6))));
            var_31 = 896983474;
            arr_23 [3] [3] = (min((((min((arr_2 [i_0]), 18446744073709551598)) + ((max(4767443710732085633, (arr_11 [i_7] [i_7] [15] [i_7] [i_7] [i_0])))))), (((((min(7340032, var_6))) ? (((arr_9 [i_0] [i_0] [i_7]) - var_13)) : 65535)))));
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_32 = (min(var_32, var_4));
        var_33 = (min(var_33, 1));
        var_34 = 0;
    }
    var_35 = ((1 ? 2 : 22426));
    #pragma endscop
}
