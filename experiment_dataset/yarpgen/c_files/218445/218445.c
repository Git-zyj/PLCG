/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (~1);
                                var_21 ^= ((((min(((((arr_2 [i_1] [i_4 + 1]) ? (arr_12 [i_1]) : (arr_4 [i_0 + 3] [i_1] [i_2 - 1])))), (min(1, var_14))))) ? (arr_3 [i_1]) : ((((arr_14 [i_4 + 2] [i_3 - 1] [i_2] [i_2] [i_0]) <= 65535)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_22 = (max(var_22, 101));
                                arr_23 [i_0] [i_1] [i_5] [i_5] [i_1] [i_5] = (min((max((arr_21 [i_0] [i_7 + 1] [i_0 + 1] [i_6 + 1] [i_7] [i_0 + 4]), var_9)), -62));
                            }
                        }
                    }
                }
                arr_24 [i_1] = 1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_34 [i_11] = (((min((((arr_3 [i_8]) ? 1301369469722683008 : var_5)), 145))) ? 165 : (((!var_2) ? (arr_14 [i_11] [i_10] [i_10] [i_9] [14]) : ((min(2757, 1))))));
                            arr_35 [i_11] [i_10] [i_9] [i_11] = ((-(((((30 ? 1 : 1))) ? ((2539295306 ? 1 : 249)) : 1))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 9;i_13 += 1)
                    {
                        {
                            var_23 ^= ((-268435456 || ((((9380 ^ var_11) + (((min((arr_29 [i_12] [i_12] [1]), (arr_40 [i_13 - 3] [i_9] [i_9] [i_9]))))))))));
                            arr_41 [i_13] = ((((min((arr_1 [i_13 - 2] [i_13 - 2]), 1701470867779456021))) ? (arr_1 [i_13 - 3] [i_13 + 1]) : (((min(var_10, (arr_3 [i_13 - 1])))))));
                        }
                    }
                }
                var_24 = 3269770716;
                var_25 = ((((101 ? -53 : 1)) >= ((min(1, 1)))));
            }
        }
    }
    #pragma endscop
}
