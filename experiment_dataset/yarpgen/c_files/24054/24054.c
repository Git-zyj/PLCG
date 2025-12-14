/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = (min(((var_5 ? (var_2 * 0) : var_4)), (max(var_3, (var_15 ^ var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = var_7;
                                var_20 += (min((((((max(-92, var_6))) && (var_3 | var_4)))), (max(72, var_0))));
                                var_21 = ((+((72 ? ((min((arr_1 [i_0] [i_0]), -28))) : (((5210 != (-127 - 1))))))));
                                var_22 = ((((min((arr_11 [i_3] [i_3]), -92))) ? ((~(var_12 & -65))) : ((min((arr_10 [i_3] [i_3]), var_8)))));
                                var_23 = min((var_2 != var_7), (-32767 - 1));
                            }
                        }
                    }
                }
                var_24 |= ((+((((min((-127 - 1), 87))) ? var_15 : -73))));
                var_25 = (((arr_6 [i_1 - 2]) || -19));
                var_26 = (min(var_26, ((min((((var_9 ? var_15 : 31))), -17910)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_17 [i_6] = (min((max(var_15, (min(var_5, var_0)))), (arr_15 [i_6])));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_27 ^= ((-72 ? 255 : 38));
                                var_28 *= (min(var_12, (arr_21 [i_5] [i_9] [i_7] [i_8] [i_9])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (min(var_29, (-127 - 1)));
    #pragma endscop
}
