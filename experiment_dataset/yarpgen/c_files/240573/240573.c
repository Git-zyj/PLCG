/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = ((((((var_2 >> (7837920327031188975 - 7837920327031188960))) | (~1))) ^ (min(((~(arr_0 [4] [4]))), (~var_9)))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_11 = (((arr_2 [i_0] [2]) >> (((((~var_4) | 35)) + 30751))));
            arr_7 [9] [i_0] [1] = (min(((((~var_6) && (((var_6 ? (arr_6 [i_0] [i_0]) : (arr_5 [i_0] [i_0]))))))), var_1));
            arr_8 [i_0] [12] [2] = (((arr_5 [i_0] [4]) | (arr_6 [10] [10])));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_12 = 221;
                        var_13 = var_0;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    {
                        arr_26 [8] [i_0] [i_0] [i_0] = (!23);
                        arr_27 [2] &= (min(36, ((-673718658159573645 ? (min(2723552003, 7837920327031188975)) : var_0))));

                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            var_14 = 186;
                            arr_31 [9] [9] [i_0] [i_0] [11] = var_4;
                            var_15 = (((arr_30 [i_0] [10] [6] [1] [11] [6]) ? ((max((~233), -var_8))) : ((1938120778 - (~var_6)))));
                            var_16 -= (((((arr_24 [i_7] [9] [i_7] [i_7 + 3]) < (arr_24 [i_6] [3] [i_6] [i_7 - 1]))) ? (var_2 || var_4) : ((-(arr_24 [3] [3] [3] [i_7 - 1])))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                {
                    arr_37 [i_0] [i_0] [1] [i_0] = (((((229 < -2643) ? (min(-3134069226232858167, 23844)) : (!var_3)))) ? var_3 : (min(-12267864026100458903, 183819185414668256)));
                    arr_38 [i_0] = ((-(arr_32 [i_0] [i_0])));
                    var_17 = ((~(min((~var_0), (3626091547 - var_0)))));
                }
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
