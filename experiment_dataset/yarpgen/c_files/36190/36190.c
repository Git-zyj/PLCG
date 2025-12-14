/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = var_9;
                                var_20 = ((!((var_6 != (((min(127, 112))))))));
                            }
                        }
                    }
                    var_21 = (max(var_21, -var_10));
                }
            }
        }
    }
    var_22 -= var_10;
    var_23 = (-127 - 1);
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    arr_20 [i_5 + 3] [i_5] [i_6] [i_7] = var_7;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_24 = (max(var_24, (((-((var_4 ? -14717 : var_16)))))));
                                var_25 = (((max(4, -14717))) << (4294967293 - 4294967266));
                                var_26 = (min(var_26, (((4294967289 ? 6721376011746909361 : (max(var_17, var_9)))))));
                            }
                        }
                    }
                    var_27 += var_17;
                    var_28 = ((25 ? var_8 : (((var_13 >> (185 - 162))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_29 = (min(var_29, var_4));
                                arr_31 [i_5] [i_10] [i_5] [i_5] [i_5] [8] [11] = var_8;
                                arr_32 [i_5] [i_6] [i_7] [i_10] [i_10] [i_10] = -33;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
