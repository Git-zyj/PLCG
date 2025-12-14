/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((((max(var_10, 0)))) / ((var_9 * ((4294967290 ? var_7 : 0)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = (max(((((arr_12 [i_0] [i_0 + 2] [i_0 + 2] [i_1] [i_1]) ? 9 : 255))), (min(((-72 ? var_7 : -2102629179)), (((var_2 ? var_6 : 255)))))));
                                var_18 = var_4;
                                arr_13 [i_1] [i_3] [i_2] [i_0] [i_1] = (((min(2440078574, (arr_2 [i_2] [i_4]))) ^ (((((1 ? var_11 : var_10))) ? ((var_4 ? var_12 : 18446744073709551615)) : ((((arr_12 [i_0] [i_1] [i_1] [i_1] [i_4]) * var_14)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_1] [i_2] [i_5] [14] [14] [i_6] = ((((max(225, var_3))) ^ 1));
                                arr_21 [i_1] [i_1] [8] = ((var_14 | (((((~(arr_16 [i_0] [18] [8] [8])))) ? var_9 : ((~(arr_8 [i_2])))))));
                                var_19 *= (((((((min(16646144, var_3))) ? (arr_0 [i_1]) : -9223372036854775807))) != (arr_2 [i_5] [i_5 + 2])));
                            }
                        }
                    }
                    var_20 = var_13;
                }
            }
        }
    }
    #pragma endscop
}
