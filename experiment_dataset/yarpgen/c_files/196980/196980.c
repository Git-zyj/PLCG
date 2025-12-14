/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] = (((((var_14 * (arr_3 [i_1 - 2])))) + (max(((max(var_8, 30956))), var_3))));
            var_17 = (max(var_6, (((arr_0 [i_1 - 2]) << (var_7 < 30971)))));
            var_18 -= (max(34359738367, var_1));
            var_19 = (((((var_12 | var_2) ? (var_4 | var_8) : (~var_15))) % ((~(((!(arr_0 [i_1 - 2]))))))));
            var_20 = (((((~(((arr_4 [i_1] [i_1]) ^ (arr_1 [i_0] [i_1])))))) ? ((165 & ((((arr_2 [16]) ? var_16 : var_0))))) : 44));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 = (((var_9 <= var_3) + (arr_1 [i_0] [i_0])));
            var_22 = var_11;
        }
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            arr_13 [i_3] = ((((((arr_6 [i_0] [i_0]) << (var_16 - 25405)))) || (((var_14 ? -var_10 : (var_15 || var_2))))));
            var_23 = (min((30956 & 7772422610395578194), var_12));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_24 = ((((~((max(var_12, var_10))))) <= (((((var_8 ? var_1 : -17)) >= (arr_24 [i_0] [i_7 - 1] [i_7] [i_6] [i_0]))))));
                                var_25 -= var_8;
                                var_26 = ((!(((var_5 ? ((((arr_0 [i_4]) > var_4))) : (var_11 <= 12520035185640690520))))));
                                var_27 = ((((30971 ? ((var_16 ? (arr_20 [i_0] [i_4]) : var_1)) : (arr_22 [i_7 - 1]))) >> (((max(var_2, -16)) - 18446744073709551573))));
                            }
                        }
                    }
                    var_28 = ((((max(var_1, 536870911)) | var_10)));
                    var_29 = max((max(var_16, var_16)), ((((-1990682197 ? var_9 : 0)))));
                    var_30 = arr_15 [i_4];
                    var_31 = var_16;
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_32 = (max((min((var_13 / var_5), (-460349162 == var_16))), ((max((var_15 && var_3), var_9)))));
        var_33 = (max((var_15 / var_1), (min((((arr_24 [i_8] [i_8] [i_8] [i_8] [i_8]) * var_6)), ((min(var_5, (arr_4 [i_8] [i_8]))))))));
        var_34 = ((((((arr_8 [18]) & var_14))) ? (arr_18 [i_8] [i_8] [15] [i_8]) : ((var_11 ? var_2 : var_3))));
        var_35 = (max(((var_2 ^ (arr_25 [i_8]))), (~65515)));
    }
    var_36 = 17;
    #pragma endscop
}
