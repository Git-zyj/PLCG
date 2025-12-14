/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [13] [i_0] [i_1] = 429086410;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 ^= (((((var_4 ? ((((arr_1 [i_1] [i_4]) ? var_9 : (arr_11 [i_0] [4] [i_2] [i_3] [i_4])))) : (arr_0 [i_4 - 1] [i_4 - 1])))) ? ((~(min(var_7, 1)))) : (arr_8 [i_0] [i_1] [1] [i_4])));
                                arr_14 [i_0] [i_0] [i_0] [i_0] = ((+(((arr_3 [i_4 + 1] [i_4 + 1]) % (arr_3 [i_4 + 1] [i_4 - 1])))));
                                arr_15 [i_0] [i_1] [i_2] [3] [10] = 65535;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_13 *= ((((((~var_5) ? (arr_4 [i_5]) : (arr_13 [1] [9] [i_6 + 2])))) ? var_0 : (-2147483647 - 1)));
                    var_14 = (arr_13 [i_7] [i_6 + 1] [i_5]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((max((arr_19 [i_6 - 2] [i_6 + 2]), (arr_19 [i_6 - 1] [i_6 - 3]))) <= (((arr_19 [i_6 + 1] [i_6 + 1]) ? (arr_19 [i_6 - 3] [i_6 - 3]) : -91))))));
                                var_16 *= (((arr_7 [i_7] [i_6 + 2]) ? (arr_4 [i_7]) : ((-(arr_24 [1] [i_8] [1] [i_6] [i_5])))));
                                arr_26 [i_9] [i_8] [3] [3] [5] [5] = (((arr_11 [i_5] [2] [i_5] [i_5] [i_5]) ? (+-1018524734) : (~var_5)));
                            }
                        }
                    }
                    var_17 ^= ((!((((arr_0 [i_6] [i_6 - 1]) ? (arr_0 [11] [i_6 - 1]) : var_9)))));
                }
            }
        }
    }
    var_18 = ((+((var_11 ? (~-6372) : var_10))));
    #pragma endscop
}
