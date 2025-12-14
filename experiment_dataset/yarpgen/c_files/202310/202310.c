/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((((((65 || var_9) ? (arr_2 [i_0] [i_1] [i_2]) : (arr_5 [i_0] [i_0] [i_2])))) ? ((max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))) : ((((((arr_8 [i_0] [i_0] [i_0] [10]) || (arr_3 [1] [1] [i_2]))) || (!9)))))))));
                                var_17 = (((((0 ? (arr_1 [i_0]) : (arr_3 [4] [12] [i_2]))) * ((max(var_10, 1))))));
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] [i_2] = var_1;
                    arr_13 [i_1] &= (((((-15091 ? var_14 : -1922274601))) ? (((arr_10 [i_0] [i_1]) ? (arr_5 [i_0] [15] [i_2]) : 18446744073709551605)) : (((arr_10 [i_0] [i_0]) ? var_2 : (arr_10 [i_0] [i_0])))));
                    var_18 *= (min((((arr_6 [i_0] [i_1] [i_2]) ^ (arr_6 [i_0] [i_1] [i_2]))), ((~(min((arr_8 [11] [14] [i_1] [11]), var_8))))));
                    arr_14 [i_0] [i_0] [8] [i_0] = (max((max((arr_5 [i_0] [2] [i_1]), 14413)), ((min((arr_5 [i_2] [i_1] [i_0]), (arr_10 [i_0] [i_1]))))));
                }
            }
        }
    }
    var_19 = (max(var_19, var_15));
    var_20 = (((!((max(2984394607, var_11))))));
    var_21 |= ((var_10 ? (max(((var_3 ? var_0 : var_5)), -119)) : ((((3495559934 ? 14412 : (-127 - 1))) * ((var_11 ? var_9 : 143))))));
    #pragma endscop
}
