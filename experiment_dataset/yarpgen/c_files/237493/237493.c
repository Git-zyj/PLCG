/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max((max(7575, ((var_15 ? (arr_0 [i_0]) : (arr_5 [i_1] [i_1 - 1] [i_0]))))), 57960));
                var_20 &= (((arr_0 [i_1 - 3]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 3])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [18] |= 177;
                            var_21 ^= var_18;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_22 *= ((1 ? -4615 : 65535));
                                arr_22 [i_0] = ((-(arr_5 [i_0] [i_0] [i_0])));
                                arr_23 [i_1] [i_1] = (((-(((arr_7 [i_6] [i_1] [i_5]) ? var_0 : (arr_20 [i_0] [0] [i_0] [i_0] [9]))))));
                                var_23 += ((-(arr_2 [i_6])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_24 = (max((arr_2 [16]), (((arr_27 [7] [20] [6]) & (min((arr_25 [3] [i_1] [i_1] [18]), var_13))))));
                            var_25 |= (((arr_5 [i_1 - 3] [i_1 + 2] [i_1 - 3]) / (arr_5 [i_1] [i_7] [i_8])));
                            var_26 = (min((!-8684), ((!(!105)))));
                            var_27 = (1798662069 % 4130615595);
                            var_28 -= (((arr_15 [i_8 - 4]) / var_0));
                        }
                    }
                }
            }
        }
    }
    var_29 = (min(2750, 240));
    #pragma endscop
}
