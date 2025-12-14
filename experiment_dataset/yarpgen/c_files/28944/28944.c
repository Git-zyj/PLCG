/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((((~(max((arr_1 [i_0]), (arr_0 [i_0]))))) == ((var_2 ? (arr_4 [i_1]) : (min((arr_3 [i_0] [i_0]), (arr_1 [i_0]))))))))));
                var_19 = ((-47686 ? (((~-1982933118) ? (var_10 > var_6) : (min((arr_0 [i_0]), (arr_0 [i_0]))))) : (arr_0 [i_0])));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_20 = ((17858 + ((((max(var_14, var_10))) ? (((arr_0 [i_1]) ? var_9 : var_15)) : (47679 | 47672)))));
                    var_21 = (max(var_21, ((((((~(max(-77, 4937520563694392817))))) ? ((max((max((arr_4 [i_0]), (arr_6 [i_0] [i_0] [i_0]))), 2))) : (((((var_4 ? var_16 : (arr_0 [i_1])))) ? (arr_5 [12] [i_1] [i_1]) : 3)))))));
                    var_22 *= max((((max((arr_5 [i_0] [i_1] [i_0]), (arr_3 [i_0] [i_0]))))), (arr_4 [i_0]));
                    var_23 = (max(((-(arr_6 [i_0] [i_1] [i_2]))), ((min((arr_6 [i_0] [7] [i_2]), (arr_6 [17] [i_1] [i_2]))))));
                }
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    arr_9 [i_3] [i_1] [i_1] = ((((!(((arr_1 [i_0]) == (arr_8 [i_0] [i_0] [i_0] [i_3]))))) ? (((arr_5 [i_0] [i_0] [i_3]) - 49866)) : -0));

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_24 = ((((min((13 && 18446744073709551615), 127))) ? ((max(49866, (49866 || 7383332638394804389)))) : 1));
                        var_25 = (((((((arr_5 [i_0] [i_0] [i_0]) | 1))) ? (((arr_3 [14] [i_3]) << (var_2 + 2978768023475115795))) : ((((arr_2 [15]) || var_12))))));
                    }
                    arr_12 [i_0] [i_1] [i_3] = (max(((((~7383332638394804389) || (arr_4 [i_3 + 1])))), ((((93 ? 17841 : var_10)) ^ (2147483647 || var_4)))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_26 += ((var_4 - (((~((49872 * (arr_7 [i_5] [i_5] [i_5] [i_5]))))))));
        arr_15 [i_5] [i_5] = (min(((~(!var_5))), (((arr_2 [i_5]) ^ (arr_13 [i_5])))));
        var_27 = (((((arr_5 [i_5] [i_5] [i_5]) ? (arr_1 [i_5]) : (arr_5 [i_5] [5] [i_5]))) | (((((arr_5 [i_5] [i_5] [16]) < (arr_5 [i_5] [i_5] [i_5])))))));
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        var_28 = ((((((arr_0 [16]) ? ((var_7 ^ (arr_2 [20]))) : ((((arr_13 [i_6]) && (arr_11 [i_6] [16]))))))) ? ((((~(arr_0 [i_6]))))) : (((!(arr_2 [i_6 - 1]))))));
        arr_18 [i_6 - 1] = (max(((max(var_3, (arr_0 [6])))), (((!(arr_11 [i_6] [16]))))));
    }
    #pragma endscop
}
