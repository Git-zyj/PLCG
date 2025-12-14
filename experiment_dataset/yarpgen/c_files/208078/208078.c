/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -618219165;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((~(arr_1 [i_0] [i_1])));
                    arr_9 [i_0] [i_2] [i_2] = (((((arr_3 [i_0] [i_0] [i_0]) + 9223372036854775807)) << (618219165 - 618219165)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_3] [i_3] [i_2] [i_3] &= (min((arr_6 [i_0] [i_1] [i_2] [i_3]), (arr_10 [i_0] [8] [i_0] [i_0] [i_0] [i_0])));
                                var_18 -= (min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), ((15185818028543791419 ? var_9 : ((-618219165 / (arr_12 [i_2] [i_4])))))));
                                var_19 ^= ((10 ? 79 : (arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])));
                                var_20 = (arr_7 [i_3] [i_3] [i_3]);
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_2] [i_1] = (max(7858727627038705301, (((-((max(10, 119))))))));
                    arr_19 [i_1] [i_1] [i_1] = (arr_7 [i_0] [i_1] [5]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_21 ^= ((1047477548801625878 << (((-3129886632031255541 + 3129886632031255572) - 28))));
        arr_22 [i_5] = (10 - var_5);
    }
    var_22 = var_8;
    var_23 = var_12;
    #pragma endscop
}
