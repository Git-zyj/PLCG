/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((4294967295 << (-51323753 + 51323775)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(((min((arr_1 [i_0 - 1] [i_0]), ((36674 ? var_4 : var_11))))), (((arr_4 [i_0 + 1] [i_0]) + 5893837930399146836))));
                arr_6 [i_0] = min(((min((arr_3 [i_0]), ((var_2 ? (arr_4 [i_0] [i_0]) : -6755109))))), (18446744073709551615 + 255));
            }
        }
    }
    var_13 = var_1;

    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((((max(-50, (var_3 / 394140578)))) ? (min(((var_6 ? -5473343095907965806 : var_1)), (3238 * -61))) : ((((arr_4 [20] [20]) ? (arr_4 [i_2] [10]) : (arr_4 [i_2] [18]))))));
        arr_10 [i_2] = ((((((-1 || var_8) ? (min(4194288, -1117058641)) : (((arr_8 [i_2]) ? -2012390835 : 65535))))) ? -37871105 : 28861));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_27 [i_3] [i_5] [i_7] = (min((min(-689832934, (arr_23 [i_3] [i_3] [i_4 - 1] [i_5 - 1] [i_3] [6] [i_3]))), ((-(((arr_25 [i_3] [i_5] [i_5 + 1] [4] [i_7]) ? (arr_0 [i_5]) : (arr_12 [i_5] [i_7])))))));
                                arr_28 [i_5] [i_3] [i_5] [i_5] = 55061;
                                arr_29 [i_3] [i_3] [i_3] [14] [i_5] = (arr_22 [0] [1] [i_4] [i_3]);
                            }
                        }
                    }
                    arr_30 [i_5] [i_4] [1] = (min(((((arr_0 [i_5]) ? 160 : 2281955416))), (arr_7 [i_5])));
                    arr_31 [i_4] [i_5] = (min(((-(arr_2 [i_5]))), ((max((arr_0 [i_5]), (min(77, (arr_12 [i_3] [3]))))))));
                    arr_32 [i_3] [i_4 + 2] [i_5] = (arr_20 [7] [i_4] [i_3] [i_3]);
                }
            }
        }
        arr_33 [i_3] = ((38687 ? 971160414200877826 : 448043626));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        arr_37 [11] = ((((((arr_12 [9] [9]) % var_11))) ? (((((arr_8 [i_8]) / var_9)) / 116)) : (((arr_2 [6]) ? (arr_2 [20]) : (arr_2 [2])))));
        arr_38 [i_8] [i_8] = arr_11 [i_8];
        arr_39 [i_8] = -53;
        arr_40 [i_8] [i_8] = (max(((((max(4269625755, 4294967288)) >= 2940660107))), (arr_13 [5] [i_8])));
    }
    #pragma endscop
}
