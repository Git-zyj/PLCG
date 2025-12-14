/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (((((((min((arr_8 [i_0] [i_0] [i_0] [i_0]), var_5))) || (0 < 1))))) + (max(((max(var_1, (arr_4 [i_0] [i_0])))), (min(var_8, (arr_0 [i_0]))))));
                    var_12 = (((((234 % 255) ^ ((-(arr_0 [i_2]))))) >> (((((min(var_4, var_9)) + (var_1 / 2147483623))) + 813212807949640637))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_13 = ((~((min(5596472458090303948, var_7)))));

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        var_14 = (min(((+(((arr_17 [i_6] [5]) % -24)))), (((!(arr_17 [i_5] [i_5]))))));
                        var_15 = (max(var_15, (((!(((4481626054126884654 || var_6) < (-69 & var_1))))))));
                    }

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_16 = (((((((max(31, var_5))) && ((max((arr_4 [i_3] [i_7]), (arr_15 [i_3] [1] [4]))))))) < (((var_10 != var_2) & ((((arr_18 [i_4 - 1] [i_5] [i_7]) < (arr_22 [i_4] [i_7]))))))));
                        var_17 = (max(((~((~(arr_21 [i_3] [i_4 + 1] [i_5] [i_7] [i_7] [i_3]))))), ((var_7 / (~-686981038)))));
                        var_18 = (min(var_18, (min((((-10403367180319925602 > (((((-127 - 1) >= 36))))))), (min(((((arr_18 [i_7] [i_4 - 1] [i_3 + 1]) >> (((arr_5 [i_5]) + 35))))), (var_8 + var_8)))))));
                        var_19 ^= (min((max((var_9 != var_3), (~18446744073709551596))), (min((4547882490414301414 + 15632130780572109204), (!-31269)))));
                    }
                    var_20 = ((((((!(((~(arr_18 [i_3 - 2] [i_3 - 2] [i_4])))))))) & ((((max(var_9, var_6))) & (((arr_22 [i_3] [i_5]) & var_3))))));
                }
            }
        }
    }
    var_21 = ((~((~(var_0 % 17)))));
    var_22 = ((-((-(!31272)))));
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 14;i_10 += 1)
            {
                {
                    var_23 = (min(((((min((arr_27 [i_10] [i_9] [i_10]), (arr_22 [i_8] [i_9]))) == ((max((arr_4 [i_8] [i_10]), -24)))))), (((max((arr_23 [i_8]), 11832913983681728064)) * var_6))));
                    var_24 = ((((min((max(var_3, var_3)), ((min(1305, var_4)))))) % (max((!var_8), (max(var_10, 518318312))))));
                }
            }
        }
    }
    #pragma endscop
}
