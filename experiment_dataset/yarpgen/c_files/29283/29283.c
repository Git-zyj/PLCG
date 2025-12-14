/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 |= (~262143);
                                var_15 ^= (min(130255499, ((((min(var_9, (arr_6 [i_0])))) << (var_5 - 9699269641602125794)))));
                                arr_13 [i_0] [i_1] [i_0] [i_0] [i_4] = ((max(130255499, (((!(arr_9 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4])))))));
                                var_16 *= (~-3904729276081108091);
                                var_17 = 130255499;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_18 = (max(var_18, (--var_6)));
                        arr_17 [i_0] [i_0] [i_2] [i_1] [i_2] [i_0] = (min((((-((max(var_10, var_8)))))), ((-(~960330395)))));
                        var_19 += ((-(arr_15 [i_5] [i_2] [i_1])));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_20 = (min(var_20, (3334636901 >= 35)));
                                var_21 += (min((((!((max(127, 1)))))), (arr_1 [i_0])));
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] [i_0] [i_1] = max(16, -3904729276081108091);
                }
            }
        }
    }
    #pragma endscop
}
