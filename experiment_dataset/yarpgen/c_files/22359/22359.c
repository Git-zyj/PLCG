/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((max(var_7, -5567))))));
                                arr_12 [20] [i_1 + 1] [i_2] [i_3] [i_4] |= ((-((((min(var_1, -4072692426351932532))) ? var_11 : var_6))));
                            }
                        }
                    }
                    arr_13 [i_0 + 1] [i_1] [i_1 + 2] = (arr_1 [i_0]);

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_17 [i_1] [i_0] [i_1] [i_1] [6] [i_0] = 1093;
                        arr_18 [i_1] = (((((~(arr_5 [0] [i_1 + 2] [i_1])))) ? 61349 : (((((~(arr_4 [i_0])))) ? var_3 : 235150275))));
                        var_14 = (~(((arr_11 [i_2] [i_1 - 1] [i_2] [i_5] [i_5] [i_1] [i_0 - 1]) ? var_0 : 4072692426351932532)));
                        var_15 = var_11;
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_22 [i_6] [i_6] [i_2] [i_1 + 2] [i_6] [i_0] = (max((arr_9 [i_0 - 1]), (((!(var_10 * var_6))))));
                        arr_23 [i_0] [i_0] [i_6] [i_0] [1] = (((var_11 * (arr_16 [5] [i_1] [9] [i_2] [i_6]))));
                        arr_24 [11] [i_6] = min(((var_2 ? ((4072692426351932531 ? var_4 : var_6)) : 4)), ((((!6777942884123959349) < (!var_8)))));
                        arr_25 [i_6] = (min(((max((arr_20 [i_0 + 1] [i_0 - 1] [i_0 + 1]), var_5))), ((15 ? var_5 : var_1))));
                        var_16 = (((((((((arr_11 [15] [i_1] [i_1] [15] [i_6] [i_6] [16]) << (var_8 - 4007)))) ? ((((arr_21 [i_0] [i_1 + 3] [i_2] [i_6]) && var_0))) : var_5))) ? ((+(((-2147483647 - 1) ? var_0 : 28)))) : ((var_3 ? (((arr_20 [i_0] [i_1] [i_2]) ? var_5 : var_5)) : (var_5 & 22)))));
                    }
                    var_17 = ((((((254 ? var_0 : var_7) != (-14640 == var_5))))));
                    var_18 -= 3;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                arr_31 [i_8] [i_8] [7] = (min((max(-113, var_10)), (((((235150275 ? 4072692426351932531 : var_7))) ? (34867 < 4) : var_8))));
                var_19 = var_6;
            }
        }
    }
    var_20 ^= (((((~(max(var_7, var_0))))) ? (((~1845909345) & (max(var_1, var_3)))) : ((5 ? (!-4072692426351932532) : 1152851135862669312))));
    #pragma endscop
}
