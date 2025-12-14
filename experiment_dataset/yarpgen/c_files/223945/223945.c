/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_4] = (((arr_12 [i_0] [i_0]) || (((var_8 & ((((arr_0 [i_2]) | var_2))))))));
                                var_18 = 1052214187;
                                var_19 ^= ((~((~(arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1])))));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] &= (min(((-((((arr_1 [i_0]) || (arr_3 [i_0] [i_0])))))), (max((arr_13 [i_0] [i_1] [i_1] [i_0] [i_0] [i_4 - 1] [i_4 - 1]), (arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4 - 1] [19])))));
                                arr_16 [i_4] [i_4] [i_0] = (min((arr_10 [i_0] [i_0] [i_4 - 1] [i_4 - 1] [i_4] [i_4]), ((min((arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]), (arr_0 [i_4 - 1]))))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] = (((arr_4 [i_1] [i_1] [i_1]) ? (((arr_1 [i_0]) ^ (arr_4 [i_0] [i_0] [i_0]))) : ((((!(arr_4 [i_0] [i_0] [i_0])))))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_21 [i_5] = (arr_3 [i_5] [i_5]);
        var_20 |= ((((((arr_9 [i_5]) | 1052214187)) >> ((((9908792800929184989 ? 1048575 : 0)) - 1048566)))));
        arr_22 [i_5] [i_5] = ((((min(var_13, (arr_4 [i_5] [i_5] [i_5])))) ? -3242753123 : (((-(min((arr_3 [i_5] [7]), var_2)))))));
        arr_23 [i_5] = ((3350283706 ? (((max(60061, 28672)))) : 3350283706));
        var_21 = ((((((((arr_2 [i_5] [i_5]) + 2147483647)) >> (((arr_19 [i_5]) - 30923))))) <= ((((((arr_5 [i_5] [i_5] [i_5]) | var_1))) ? ((126 ? var_12 : (arr_6 [15] [i_5] [i_5]))) : 16384))));
    }
    #pragma endscop
}
