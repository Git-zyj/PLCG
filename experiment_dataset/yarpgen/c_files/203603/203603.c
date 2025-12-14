/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 += (((arr_5 [i_4] [i_1]) <= (arr_7 [i_4] [i_1] [i_4] [i_3] [i_4])));
                                arr_12 [i_3] [i_3] = (min((((var_9 ? var_18 : var_11))), (((min((arr_11 [i_1] [i_3] [i_4]), 133169152)) ^ (((arr_5 [i_0] [i_2]) ? 0 : var_3))))));
                                var_21 = ((((min(var_10, (((arr_11 [i_0] [i_0] [i_0]) | var_16))))) ? var_5 : (max((arr_5 [i_4] [i_4]), 8))));
                                var_22 = (arr_5 [i_1] [i_0]);
                            }
                        }
                    }
                    var_23 -= ((((((arr_2 [i_0] [i_0]) > (arr_4 [i_0] [i_0])))) + (((arr_3 [i_0] [i_0]) << ((((min((arr_3 [i_2] [i_2]), var_15))) - 151))))));
                }
            }
        }
        var_24 += 0;
        var_25 *= (((!2) && (((max(var_0, 2))))));
        var_26 |= (((min((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]), 0)) * ((((var_10 && (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        var_27 = ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_0]))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_28 = (max(var_28, (~255)));
        arr_15 [i_5] = ((((((arr_6 [i_5]) ^ 18446744073709551613))) ? (arr_11 [i_5] [i_5] [i_5]) : 17154));
        var_29 = (min(var_29, var_6));
    }
    var_30 += var_1;
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    var_31 += (((min(var_10, (var_0 >= var_16))) <= ((((arr_4 [i_6] [i_6]) & var_18)))));
                    var_32 &= -23932;
                }
            }
        }
    }
    var_33 = ((62293 & ((((var_10 ? var_6 : 50705))))));
    #pragma endscop
}
