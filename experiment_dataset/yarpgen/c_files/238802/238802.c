/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = ((((((arr_1 [i_0] [3]) ^ (arr_1 [i_0] [i_0])))) ? (max(var_4, (arr_4 [i_0] [i_0]))) : (-9223372036854775807 - 1)));
                var_16 = (((max((((arr_2 [i_0] [i_1]) ^ var_11)), ((-25 ? 15618193157046353650 : var_4)))) <= var_2));
                var_17 &= ((((((-(arr_4 [i_0] [12]))) + 2147483647)) << (((max(var_1, ((1099330979 ? var_4 : var_2)))) - 13783211122786771185))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = ((((~(arr_6 [i_0] [i_2]))) >= -25));
                                var_19 = ((((max((((arr_3 [i_0]) ? 3430887813069280130 : var_5)), (((arr_13 [i_4] [5] [i_4] [8] [i_4]) ? (arr_7 [i_0] [i_0]) : (arr_2 [i_0] [i_4])))))) ? (arr_10 [i_0] [i_3] [4] [i_3]) : 163));
                                var_20 = ((2172 < ((((min((arr_7 [i_0] [i_3]), 6884923152195796895))) ? (min(-6884923152195796895, 30)) : ((((arr_1 [i_0] [i_4]) ? 2148 : (arr_6 [i_0] [i_1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_7 << (!var_6)));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            {
                arr_18 [i_6] = (~2076722033);
                arr_19 [i_6] = (((((((var_14 ? var_5 : -6884923152195796895)) ^ (((((arr_15 [i_5 - 2]) >= 6884923152195796887))))))) ? -366216586 : (((var_2 < ((-277879955384805442 ? var_1 : var_14)))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_22 = (max(var_22, (((-((~(((arr_16 [i_8] [i_6] [18]) / 124)))))))));
                            var_23 = (min((((max(var_8, 10395)))), (((arr_24 [i_6 - 1]) ? var_0 : (arr_24 [i_6 + 1])))));
                            var_24 = (((((((~(arr_14 [i_5]))) <= (min(var_1, 32)))))));
                            arr_26 [i_5] [14] [14] [i_7] [i_6] = (min(var_13, (((-(arr_24 [i_6 + 1]))))));
                            var_25 = (((((-var_1 ? (((arr_23 [i_6] [i_6 - 1] [17] [i_6 - 1]) ? var_9 : 217096237235085544)) : ((var_8 << (((arr_21 [i_6]) - 1602897678))))))) ? (max((min(var_1, var_14)), var_6)) : var_10));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
