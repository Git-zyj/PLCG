/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_16 != var_12) ? ((((var_12 ? var_14 : var_1)) - (var_7 || var_1))) : ((min(((var_13 ? var_6 : var_6)), ((min(var_15, var_5))))))));
    var_18 = (min(var_5, (0 >= 1)));
    var_19 |= ((~((-((var_10 >> (var_9 - 9720103048393873385)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_0] = (((((var_8 ? var_6 : var_0))) ? (((-1 + 2147483647) << (1571270690 - 1571270690))) : var_5));
                        var_20 *= ((var_13 ? var_4 : ((var_13 ? var_6 : var_9))));
                    }
                    arr_13 [i_2] [15] [i_0 - 4] [i_0] = ((var_5 ? (~1098437885952) : ((((max(var_7, var_11))) ? ((240 ? var_9 : 6655209759861976912)) : (((var_10 ? var_1 : var_13)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_20 [i_4] [i_4] = (~6655209759861976910);
                                var_21 = ((-4294967278 ? (max(var_13, var_13)) : (var_8 || var_10)));
                                var_22 |= (((((((var_8 ? var_5 : var_4))) ? -var_15 : (min(var_10, var_5))))) / ((var_12 ? -var_15 : ((var_4 ? var_9 : var_0)))));
                                arr_21 [i_4] [10] [i_4] [i_5] = (((((-((var_9 ? var_10 : var_10))))) ? var_11 : 1571270676));
                            }
                        }
                    }
                    var_23 = (min(var_23, (((var_16 ? (((((var_0 ? var_1 : var_11))) ? (var_7 % var_7) : ((var_2 ? var_7 : var_2)))) : (((((var_7 ? var_11 : var_0))) ? (max(var_0, var_7)) : var_0)))))));
                }
            }
        }
    }
    #pragma endscop
}
