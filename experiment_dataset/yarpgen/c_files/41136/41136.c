/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_0 ? var_4 : 64));
    var_20 += ((((var_18 ? var_4 : -64))));
    var_21 = ((((((0 >> (var_13 - 1488869981))) ? ((max(127, var_0))) : -1))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_4 - 3] [1] [i_4] [i_0] [i_0] = max((((min(117, 31)))), (max((((arr_5 [i_0 - 1] [i_2] [4]) ? 65404 : 13913443675809136371)), -var_13)));
                                var_22 = (-(((!((((arr_2 [i_4] [i_3]) ? var_16 : var_18)))))));
                                var_23 = (min(var_23, (((-(((!((max(268435392, 18446744073709551615)))))))))));
                                var_24 = (max((max(9007199254740991, -8452064142454705919)), 15));
                            }
                        }
                    }
                }
                arr_17 [11] [i_1] [i_1 - 1] = (((2239 ? (((!(arr_12 [10] [i_1 + 1])))) : -359949273)));
                var_25 = (359949264 == 1834497586);
            }
        }
    }
    var_26 = (min(var_26, -25));
    #pragma endscop
}
