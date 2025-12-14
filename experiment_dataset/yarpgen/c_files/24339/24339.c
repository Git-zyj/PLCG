/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_4;
    var_18 = ((((max(var_10, ((var_1 ? var_12 : var_15))))) ? var_16 : (((((max(1, 63633)))) - (min(1, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 -= var_1;
                arr_5 [i_0] [i_1] [1] = ((((((var_9 <= var_5) << (((min(var_12, (arr_2 [i_0] [i_0] [16]))) - 204))))) != var_14));
                arr_6 [i_1] [i_0] [i_0] |= (((((max(var_13, var_5)))) ? ((((((max(var_5, (arr_4 [i_0] [9]))))) < (max((arr_0 [i_1] [1]), (arr_1 [i_0])))))) : ((-(var_3 + 63636)))));
            }
        }
    }
    var_20 = (max(var_20, var_2));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_21 &= (32753 % 4165121433);
                    arr_14 [i_2] = (63633 && 1);
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [1] [i_2] [8] [i_6] [1] = (max((arr_12 [1] [i_2 - 3]), var_5));
                                arr_22 [i_2] [i_3] [i_3] [i_3] [i_2] [9] = (~1876160687789114416);
                                var_22 = (min(var_22, (((((((min(134217696, var_15))) ? 32767 : (arr_20 [8] [i_3] [i_4] [8] [i_6 + 2]))) | (((arr_12 [i_4] [1]) ? (arr_1 [i_4]) : (arr_1 [i_3]))))))));
                                arr_23 [12] [i_3] [i_4] [i_4] [4] [i_2] = ((~((((var_16 || (-32767 - 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
