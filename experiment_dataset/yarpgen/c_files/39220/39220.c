/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((-26 ^ 1308026066) ? (180 + var_1) : var_17)), (min((var_12 | var_17), (~var_13)))));
    var_20 = var_5;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((-2095584221 ? ((33 ? (var_13 && var_15) : (arr_0 [2]))) : ((max(79, var_14)))));
        var_21 = (min(var_21, ((min(var_18, (~-3540127187893699778))))));
        var_22 ^= var_8;
        var_23 = (max(var_23, (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_24 = (max(var_24, ((((((max(var_1, var_6))) ? var_16 : 3762202855))))));
        var_25 = (~var_3);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_12 [5] [9] = (arr_6 [10]);
        var_26 -= (((((((max((-127 - 1), var_7))) ? (max((arr_11 [i_2] [i_2]), var_17)) : (((max(var_0, 87))))))) ? (((arr_10 [i_2] [i_2]) ? (arr_10 [i_2] [i_2]) : (min(2095584202, (arr_7 [i_2]))))) : (arr_10 [i_2] [i_2])));
        var_27 = ((77 ? -160020989 : (-127 - 1)));
        arr_13 [11] = 54;
        var_28 += (max((min(8980, var_3)), (((var_13 > var_4) ? ((-35 ? (arr_7 [16]) : (-127 - 1))) : -32463))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_29 = (min(var_29, (((var_12 > ((var_8 ? 81 : (arr_14 [i_3]))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 12;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_30 = -998826100202981746;
                                arr_26 [i_3] [i_4] [i_5] [i_6] [i_7] = ((-(9 | 137)));
                            }
                        }
                    }
                    var_31 = (arr_23 [5] [i_4] [i_5 - 3] [i_4]);
                    var_32 = arr_14 [i_5 + 1];
                }
            }
        }
        arr_27 [2] [i_3] = (arr_6 [i_3]);
        var_33 = (min(var_33, (var_17 < var_8)));
    }
    #pragma endscop
}
