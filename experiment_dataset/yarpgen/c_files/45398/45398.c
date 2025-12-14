/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_2);
    var_11 = (min((((var_8 ? ((17044367365680700956 ? var_0 : var_4)) : (var_0 / var_4)))), (min(var_6, var_8))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_9 [i_0 - 1] [i_1] [i_2] [i_3] = (arr_1 [i_0]);
                            arr_10 [i_0] [i_0] = (max(var_8, (((((((arr_8 [i_0] [i_1] [i_2] [i_1]) * 0))) || ((((arr_7 [16] [i_1] [i_2] [i_3]) ? var_1 : var_8))))))));
                        }
                    }
                }
                arr_11 [i_1] = ((var_1 ? ((max(1973121409, (((-127 - 1) ? 30970 : -39))))) : (min(((min(12230, (arr_6 [i_0] [i_0] [i_0] [i_1 + 2])))), 156))));
                arr_12 [i_0 + 2] [i_1] = var_5;
                arr_13 [i_0 - 1] [i_1 - 2] = (((arr_5 [16] [i_1 + 2] [i_1 - 4]) ? var_0 : -103));

                for (int i_4 = 4; i_4 < 21;i_4 += 1)
                {
                    arr_16 [i_0] = (((1 ? ((min((arr_8 [3] [i_1 + 1] [i_1] [i_4 - 1]), (arr_3 [i_4])))) : (arr_2 [i_0] [i_1]))));
                    arr_17 [i_0] [i_1] [11] = (var_5 * (((!(arr_14 [i_0] [i_1] [i_4 + 3])))));
                    var_12 += (((arr_15 [i_0] [i_1] [i_4]) ? (max(((((arr_6 [i_0] [i_0] [i_4 + 2] [i_0]) ^ 255))), (max(var_0, (arr_0 [i_0 + 1]))))) : (arr_8 [1] [1] [18] [i_1 - 3])));
                    var_13 = (min(((min(71, (arr_6 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 4])))), (max((arr_6 [i_1] [i_1] [i_1] [i_1 - 1]), var_7))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_24 [i_5] [i_5] = 310056813;
                        var_14 = (min(var_14, (arr_15 [i_1 + 1] [i_5 - 1] [i_5 - 1])));
                        var_15 = (min(var_15, ((((arr_14 [i_0] [i_1 - 4] [i_5]) ? ((8255391114533370576 ? 308 : (arr_0 [i_1]))) : ((((arr_19 [i_6] [i_6] [i_5] [i_6]) & (arr_3 [i_6])))))))));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_16 = var_5;
                        arr_28 [i_5] [i_5] [i_5 - 1] [i_5] [i_7] [i_5] = 1516338823;
                    }
                    arr_29 [i_5] [i_1] [8] [i_5] = 13653911759989013061;
                }
            }
        }
    }
    #pragma endscop
}
