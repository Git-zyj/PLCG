/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(5312, 119));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 -= (min((((((-47 ? -83 : var_15)) >= (arr_4 [i_0 - 1] [i_0 - 1])))), (max((min(12575505979273525416, -17)), -23913))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = (~-40);
                                var_20 = (((((max((arr_7 [i_1] [i_1] [i_3] [i_4]), 1)))) <= 0));
                                arr_14 [i_0 + 2] [i_1] [i_2] [i_3] [0] [i_3] = ((~((28 ? (max(var_9, var_13)) : (((max(31, 1))))))));
                            }
                        }
                    }
                }
                arr_15 [i_1] = (min(((max(((var_6 ? -6 : (arr_13 [i_0] [i_1]))), (max(8858224796540874040, var_12))))), (max(16880445933516724657, 23904))));
            }
        }
    }
    var_21 = ((var_0 * ((5311 << (-5312 + 5321)))));
    #pragma endscop
}
