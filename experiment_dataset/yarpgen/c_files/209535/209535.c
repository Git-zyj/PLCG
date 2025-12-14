/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_19 = (((arr_4 [i_1 - 1] [i_1 - 1]) ? 0 : (arr_4 [i_1 - 1] [i_1 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 *= ((-(arr_9 [9] [9] [4] [i_1 - 1] [4] [i_3 - 1])));
                                var_21 = (min(var_21, ((-(arr_3 [i_2] [1])))));
                                var_22 = 64827;
                                var_23 = ((-(arr_15 [i_3 - 3] [i_2] [2] [i_1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_24 = ((284312890522690871 ? 128 : 18446744073709551615));
                                var_25 = (min(var_25, (arr_17 [i_0] [i_5 - 3] [i_0] [1] [6])));
                                var_26 = (((arr_14 [i_2] [i_1] [i_2] [i_6] [i_6] [i_5] [3]) ? (arr_19 [i_0] [i_5] [i_6] [10] [i_1 + 1] [i_5]) : var_2));
                            }
                        }
                    }
                    arr_24 [i_1] = (((3744332052 | 0) >= -89));
                    var_27 = (arr_7 [i_0]);
                }
                var_28 -= (arr_11 [i_1 - 1] [i_1] [8] [5]);
                var_29 = (((((arr_10 [5] [i_1 + 1] [i_0] [i_0]) | (arr_15 [12] [i_1 - 1] [12] [12]))) | 255));
                arr_25 [i_0] [i_0] [i_0] = (arr_11 [i_0] [0] [1] [1]);
                var_30 ^= (((((var_1 || (arr_13 [i_1 - 1])))) << (10351198554745150695 - 10351198554745150681)));
            }
        }
    }
    var_31 = (min(var_1, var_6));
    var_32 = var_1;
    #pragma endscop
}
