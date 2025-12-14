/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 *= (min((!var_8), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_0] |= (--1);
                                var_14 = (max((((arr_6 [i_3 - 2] [i_3 - 2] [3] [i_4 + 1]) + 0)), (arr_6 [i_3 - 2] [i_1] [i_3 - 2] [i_4 + 1])));
                                arr_13 [i_4] [i_1] [i_1] [i_1] = (((arr_11 [i_1] [i_1] [15]) ? var_2 : ((max((arr_9 [i_1] [i_4] [i_4]), (((arr_8 [i_0] [i_1] [16] [8] [i_2] [i_2]) ^ -1)))))));
                                var_15 = (arr_8 [i_0] [i_0] [i_0] [i_0] [11] [i_0]);
                                var_16 = (((min(-2022543422261029346, 11804229040160074359))));
                            }
                        }
                    }
                }
                var_17 = ((!(arr_1 [i_1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    arr_21 [i_5] [14] = var_11;
                    var_18 = ((arr_11 [i_5] [7] [i_7]) ? (((6403 << (((-2022543422261029341 + 2022543422261029361) - 19))))) : 1);
                    var_19 = (arr_8 [i_7] [i_7] [i_6] [1] [1] [i_5]);
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_20 = ((+((var_6 ? (min((arr_20 [i_5] [i_6] [i_7] [1]), (arr_23 [i_5] [i_5 + 1] [i_5] [i_5] [i_5]))) : (arr_6 [i_5] [i_5] [i_7] [i_7])))));
                                var_21 = (((((arr_8 [i_5 - 1] [i_6] [i_7] [i_5] [i_9] [i_8 + 1]) ? (var_2 != -21720) : ((~(arr_3 [i_5 + 2] [i_6] [i_7]))))) / 6403));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, ((min((min(1, 2022543422261029346)), (min((var_4 && 5196108093320871622), (max(30, 426240266)))))))));
    #pragma endscop
}
