/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 = 6193242602277998536;
                                var_12 = ((((((arr_5 [7] [i_1]) / 85)) / -64)));
                                var_13 = ((var_9 & (((1080835863 * (((var_0 > (arr_3 [i_2] [i_2])))))))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] [7] = ((((((64 > ((var_8 ? var_8 : -121)))))) > (arr_15 [i_1] [i_1] [0] [0] [0])));
                var_14 = 1;
            }
        }
    }
    var_15 = (max(var_15, var_7));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_29 [i_9] [i_7] [i_6] [i_7] [8] = 4270375679980507132;
                                var_16 = (arr_0 [i_9 + 2] [i_6]);
                                var_17 = ((-6555 ? var_2 : ((((((arr_24 [i_6] [i_6] [i_9]) / (arr_12 [i_8] [i_8] [i_8])))) ? -4409045321176512266 : (max((arr_17 [i_5] [i_6]), (arr_14 [3] [i_6] [i_7] [i_8] [i_9])))))));
                            }
                        }
                    }
                }
                var_18 = (arr_28 [i_5] [i_5] [i_5] [i_6 - 1] [6]);
                arr_30 [i_5] = ((((arr_14 [i_5] [i_5] [i_5] [i_5 + 1] [i_5]) > (arr_11 [i_6 - 1] [i_5 + 1]))) ? (arr_22 [i_6 - 1] [i_5 - 1] [9]) : (max((arr_14 [1] [1] [i_5] [i_5 - 1] [1]), (arr_22 [i_6 - 1] [i_5 - 1] [i_6]))));
            }
        }
    }
    var_19 = -4409045321176512266;
    var_20 = ((3331 ? (~var_4) : ((-(var_6 && var_10)))));
    #pragma endscop
}
