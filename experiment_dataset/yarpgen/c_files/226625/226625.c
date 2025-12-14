/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 -= (((!((min(var_7, 651082448))))) ? ((((111 || (arr_2 [i_4] [7]))))) : (max(4294967280, var_7)));
                                arr_12 [i_2] [0] |= max(1103457101, 4083665800);
                            }
                        }
                    }
                    arr_13 [i_1] = (max(((((min(var_2, 7))) ? (arr_11 [i_0] [i_0] [i_0] [i_0 - 2] [1]) : 233)), var_13));
                    arr_14 [i_1] [i_2] = ((((2 ? (arr_0 [i_0 + 1] [8]) : (arr_7 [i_0 - 3] [i_2] [i_2] [i_1]))) < (arr_10 [i_0 + 1])));
                    arr_15 [i_1] [i_1 + 1] [i_2] = ((((((((var_8 ? 19 : 15))) - (arr_5 [i_1] [i_1 - 2])))) ? (min((arr_11 [1] [i_0] [i_0] [i_0] [i_0 - 2]), (arr_2 [i_0 - 1] [i_0]))) : (939524096 || 89)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_21 = ((min((arr_26 [i_7] [i_6 + 2] [i_7 + 2] [i_8] [i_8 + 3] [i_9 - 1]), (arr_26 [i_7] [i_6 + 1] [i_7 + 1] [i_8] [i_8 + 1] [i_9 + 1]))));
                                var_22 *= 0;
                            }
                        }
                    }
                    arr_31 [i_7] [i_7] [0] [i_5] = 2625813755;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            {
                arr_40 [i_10 - 1] [7] = (arr_22 [12] [i_11] [12]);
                arr_41 [i_10] [i_10] = ((((2625813755 + ((var_10 ? var_9 : (arr_33 [3])))))) ? ((3050743219 ? -813728830 : ((var_5 ? 2625813755 : 3758096384)))) : var_2);
                var_23 *= (max(((2823570287 ? (arr_26 [14] [i_11] [i_10] [i_11] [i_10] [i_10]) : 2823570287)), var_8));
            }
        }
    }
    var_24 |= max(var_2, (((var_5 ? var_18 : var_5))));
    #pragma endscop
}
