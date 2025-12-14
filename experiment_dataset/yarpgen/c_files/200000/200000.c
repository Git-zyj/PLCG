/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = var_4;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_14 [9] [10] [i_0] [i_2 + 2] [i_2] [i_3] = ((~(arr_2 [i_0])));
                        arr_15 [i_0] [i_2 + 2] [i_1 + 1] [i_1] [i_0] [i_0] = ((!(arr_11 [i_2 + 1] [i_0])));
                        arr_16 [i_0] [20] [i_0] = (var_11 ? var_0 : (arr_5 [i_2] [i_2] [i_2 - 1]));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_21 [i_0] = var_6;
            var_13 += (((arr_5 [i_0 + 2] [i_0] [i_4]) ? 68 : var_0));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_14 += (((var_7 ? (arr_1 [i_0 + 1] [i_0]) : var_11)));
            arr_24 [16] [i_5] [i_0] = var_8;
        }
        arr_25 [i_0] = ((((var_9 ? var_8 : 4434477123288127942)) << ((((4294967295 ? (arr_17 [i_0] [i_0]) : 0)) - 29))));
    }
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        arr_28 [i_6] = (((((-(arr_26 [i_6 + 1])))) < -7220794601433574000));
        var_15 = (((var_1 ? 8778913153024 : 7220794601433573997)));
        var_16 = (((~((13979152567100368290 ? (arr_27 [i_6] [15]) : 1)))));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_17 = (min(var_17, (((((((arr_23 [18] [i_7] [10]) % ((4434477123288127942 ? (arr_18 [10]) : var_9))))) ? 9223372036854775797 : ((((!((((arr_17 [i_7] [i_7]) ? var_3 : var_1))))))))))));
        arr_31 [i_7] = arr_13 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7];
        arr_32 [10] [i_7] = -var_4;
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {
        var_18 += (((7220794601433574000 ? var_11 : (arr_20 [i_8] [i_8 - 2] [i_8]))) > var_8);
        arr_35 [i_8 - 1] = ((((arr_9 [8] [14] [i_8]) >= 1)));
    }
    var_19 ^= (var_6 > var_11);
    var_20 = var_1;
    var_21 = (min(((((min(29, var_3)) > var_5))), (((((var_3 ? var_8 : var_3))) ? var_7 : -1))));
    #pragma endscop
}
