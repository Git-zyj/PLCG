/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (((((((arr_4 [9] [i_1]) & 20))) | (21 / 21))));
                arr_6 [i_1] = ((min((-2147483647 - 1), (arr_4 [i_0] [i_0]))) % 1);
            }
        }
    }
    var_14 = (max(var_10, ((63 / (max(4294967273, var_12))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_15 = (min(var_15, 255));
                    var_16 = 1878213157;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_17 = 13;
                                arr_21 [i_3] [i_3] [i_3] = ((!((((((18446744073709551592 | (arr_7 [i_4])))) ? (238 ^ 18446744073709551569) : (((max(36, (arr_19 [i_6] [8] [i_4] [i_3] [i_2]))))))))));
                                var_18 = 4294967274;
                            }
                        }
                    }
                    var_19 = (max(-5083, ((((((-5083 + 2147483647) >> (14199075647254178286 - 14199075647254178275)))) ? (arr_10 [i_3] [2]) : 0))));
                    arr_22 [i_2] [i_3] = (((((arr_16 [i_2] [i_2] [i_3] [i_4] [8]) ? (arr_8 [i_2]) : ((min(-778723140, 135))))) < (((-(min(243, 4294967277)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 16;i_9 += 1)
            {
                {
                    arr_32 [i_7] [i_7] [i_7] = (((((((-46 + 2147483647) >> (-54 + 77))))) || 2682047273));
                    arr_33 [i_7] [8] [i_9 - 1] [i_7] = (arr_25 [i_9] [i_9]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    arr_40 [i_12] [5] [i_10] = ((7103551877493944283 ? (((-(((21 && (arr_28 [8]))))))) : 22));
                    var_20 = (min(var_20, 50));
                    arr_41 [i_10] = ((((-(arr_35 [i_10]))) >> ((max((arr_29 [i_10] [i_10] [i_10]), (!2147483647))))));
                }
            }
        }
    }
    #pragma endscop
}
