/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [1] [i_1] [i_4] = ((var_8 != (~63)));
                                var_10 |= var_6;
                                var_11 |= var_7;
                                var_12 |= var_5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_13 = (min(((max(-var_5, ((63 ? 929249442 : var_2))))), (min(12958864232020384085, var_4))));
                                var_14 = min(-70, 49);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_15 = ((-((-(max(25916, 16609819055367906058))))));
                                arr_27 [i_0 - 1] [i_1] [1] [i_1] [i_1] = -var_8;
                            }
                        }
                    }
                    arr_28 [i_0] [i_1] [i_1] [2] = var_8;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {
                    arr_39 [i_10] [i_10] [17] = (((~6) ? var_2 : 64475));
                    arr_40 [i_10] [i_10] = var_6;
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_16 = ((~(arr_33 [i_13] [3])));
                                var_17 = 5144663577063588488;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 1; i_14 < 13;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 12;i_18 += 1)
                        {
                            {
                                var_18 = 98;
                                arr_59 [2] [2] [2] [1] [i_18] = ((var_2 & ((~(~46)))));
                                var_19 = ((-(((~var_5) & var_4))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 14;i_20 += 1)
                        {
                            {
                                var_20 = (2410735862527160311 && -1);
                                arr_66 [i_19] = -var_6;
                                arr_67 [i_16] [i_15] [i_15] [i_15] [i_15] |= var_4;
                            }
                        }
                    }
                    arr_68 [i_14] [i_15] [i_16] [i_15] = (arr_25 [i_15] [i_15] [i_15] [i_16] [i_15]);
                }
            }
        }
    }
    #pragma endscop
}
