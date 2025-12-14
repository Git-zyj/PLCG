/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 ? (((!88) % var_10)) : (!8018)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [9] [i_1] [9] = ((!(((arr_2 [i_0] [i_1]) || (arr_0 [12])))));
                arr_6 [10] = var_6;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            {
                var_12 = var_10;
                var_13 = (max((~0), (((((!(arr_8 [i_2]))) && (((1 - (arr_10 [i_2])))))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_3] [i_4] [4] [2] = ((!(((((~(arr_17 [i_2] [4] [i_2] [i_2]))) >> (((((arr_17 [i_3] [i_4] [i_5] [i_6]) + var_0)) + 45107)))))));
                                var_14 = (max(var_14, ((((((min(155, (arr_8 [i_2]))))) ? (arr_12 [i_2] [i_2] [i_2]) : ((((!(((var_8 + (arr_1 [i_3])))))))))))));
                                var_15 = ((0 ? (arr_2 [i_4] [i_4]) : (((((arr_20 [i_2]) != var_0)) ? (max((arr_14 [12] [i_4] [i_4]), 34)) : (var_0 <= var_2)))));
                                var_16 = (min(var_16, (((((var_1 || (arr_1 [i_3]))) || (arr_2 [i_2] [7]))))));
                            }
                        }
                    }
                }
                var_17 = (var_0 ? var_2 : ((max((arr_12 [i_2] [i_2] [i_3]), (arr_13 [i_2] [i_2] [i_2] [i_2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_18 |= ((((max((var_9 & var_7), (((var_9 + (arr_27 [11] [6]))))))) ? ((((var_4 + var_0) != (max((arr_33 [0] [i_9]), (arr_31 [i_10] [4] [13] [i_7 + 1])))))) : ((-((min(var_10, var_10)))))));
                            arr_35 [i_7 - 1] [i_8] [i_8] [15] [i_7 - 1] |= (arr_26 [i_10]);
                            var_19 = ((var_5 || ((max((arr_34 [i_8]), (arr_27 [i_7 - 2] [i_9 - 1]))))));
                        }
                    }
                }
                var_20 = ((~(((arr_32 [i_7 - 1] [i_7]) + 4294967293))));
                var_21 = (min(var_21, 18446744073709551606));
                var_22 = (((((arr_32 [i_7 - 3] [i_7 + 2]) + (arr_32 [i_7 - 3] [i_7 + 2]))) != (26341 % 2)));
            }
        }
    }
    #pragma endscop
}
