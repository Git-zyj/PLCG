/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = 32767;

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_1] [i_0] [i_0] [i_0] |= max(0, (((arr_5 [i_1]) - (arr_2 [i_0]))));
                        arr_12 [i_0] [i_0] [16] [i_0] [i_1] = (min((min((arr_1 [i_0]), 65535)), (((arr_1 [i_0]) % (arr_1 [i_0])))));
                        var_16 = (min(var_16, (!209)));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_17 = 209;
                        arr_16 [i_1] [i_1] [i_2] = ((~(arr_14 [i_0] [i_0] [i_4] [i_4] [i_4] [i_4])));
                    }
                    var_18 += ((arr_10 [i_0] [i_0] [i_1] [i_2]) & var_8);
                    arr_17 [i_0] [i_1] = (arr_10 [i_0] [i_1] [i_0] [i_0]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    arr_27 [i_6] = (((arr_8 [i_6 - 3] [i_6 + 1] [i_6 - 1] [i_6 - 3]) != ((0 ? 209 : 240))));
                    var_19 += (~var_13);
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_20 = (((((((arr_2 [i_9 - 1]) < (min((arr_25 [i_6] [i_5] [i_5] [i_6]), var_3)))))) | (min(var_12, (var_10 ^ var_7)))));
                                arr_33 [i_5] [i_5] [i_7] [i_6] [i_9 - 2] = ((!((max((480 * 0), (arr_22 [i_6] [i_7] [i_8]))))));
                                var_21 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
