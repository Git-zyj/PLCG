/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 ^= (arr_2 [i_0] [i_0] [i_2]);
                    var_15 = (min((max((arr_1 [i_1] [i_1]), (arr_1 [i_0] [i_0]))), ((120 != (arr_1 [i_0] [i_1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_16 = (min(var_16, 8));
                                var_17 = (max((min(255, (1394326854 / -48))), ((((-1 ? 56973 : (arr_14 [i_4] [i_4] [i_7])))))));
                                arr_22 [i_3] [24] [i_3] [i_4] = ((-((65535 ? (var_4 || var_9) : var_7))));
                                arr_23 [i_3] [i_3] [i_4] [5] [i_3] = var_2;
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    arr_26 [i_4] = (arr_13 [i_4] [i_4] [i_4]);
                    arr_27 [i_4] [i_4] [i_4] [i_4] = 0;
                    var_18 = (min(var_18, ((min(4294967295, -114)))));
                    var_19 = -12;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    var_20 = (max(var_20, var_0));
                    var_21 = (max(var_21, (((var_0 ? var_1 : ((max((arr_25 [i_9] [i_10] [i_11]), var_5))))))));
                    var_22 |= 159;
                }
            }
        }
    }
    #pragma endscop
}
