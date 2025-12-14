/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = ((9223372036854775800 ? 27 : ((-((502397637 << (118 - 116)))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [1] = -2147483627;
                    arr_11 [i_0] [i_0] [i_2 - 1] = (((((~(arr_9 [i_0] [i_0]))) + 2147483647)) >> (((((arr_6 [i_2] [i_1 + 1]) ? (~15) : (max(var_1, 16)))) - 4294967271)));
                    arr_12 [i_0] = (min(-16, (arr_3 [13])));
                }
            }
        }
    }
    var_11 = (min(-var_3, 9223372036854775800));
    var_12 += ((min(((4294967272 ? 122581100573743017 : var_1), ((9223372036854775807 ? 574208952489738240 : var_7))))));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_13 = (max(var_13, (((8551686308039708194 ? 9895057765669843437 : (arr_0 [i_5] [i_5]))))));
                                arr_23 [i_3] [i_3] [i_5] [i_6] [i_5] [i_3] = ((~(arr_22 [i_6] [i_7 - 1] [i_6] [i_5] [i_6] [i_4] [i_3])));
                                arr_24 [i_6] [i_4] = (((((arr_19 [i_6] [15] [i_5] [i_3] [i_6]) + 954623282))) ? (arr_15 [i_7] [i_6 - 1] [i_4 - 1]) : ((var_2 ? (arr_1 [i_3] [i_3]) : (arr_6 [i_5] [i_7]))));
                            }
                        }
                    }
                    var_14 = (arr_18 [i_4 - 1] [i_4 - 1] [i_3 - 1] [i_3 + 1]);
                    arr_25 [i_3] [i_4] [i_4] [i_4] = var_6;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_3] [9] [i_8] = (((arr_22 [i_4] [i_4 - 1] [8] [i_8] [i_4 - 1] [i_8] [2]) | ((((((~(arr_6 [i_4] [i_4]))) == (((-(arr_18 [i_4 - 1] [i_8] [i_8] [i_8]))))))))));
                    var_15 ^= (arr_6 [i_4] [i_8]);
                    var_16 = -8747722793034969855;
                    arr_30 [i_8] [1] = ((((0 ? 36 : (arr_7 [i_3]))) >> (((max((~-1), (15599236827170457978 ^ 1))) - 15599236827170457974))));
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                arr_39 [i_3] [i_10] [i_10] [i_10] [i_10] [i_9] = (min(((4294967279 - (arr_15 [i_3 + 1] [i_3 - 1] [i_4 - 1]))), (((var_7 ? 1 : 1)))));
                                arr_40 [1] [i_4] [i_9] [i_10] [13] = (max(93, 15888457641929064967));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 ^= var_6;
    #pragma endscop
}
