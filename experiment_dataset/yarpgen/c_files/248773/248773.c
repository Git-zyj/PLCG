/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = ((((min(0, (((0 ? var_1 : 0)))))) ? 0 : ((((-(arr_0 [i_0])))))));
        var_13 = ((0 ? 996585232 : 4294967295));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (((~((min(0, 1))))));
        var_15 += ((min(((((-1 + 9223372036854775807) << (((-7 + 39) - 32))))), (((arr_0 [i_1]) ? (arr_4 [8] [2]) : (arr_2 [1] [1]))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_7 [i_2] = (max((max(1, (min(53426, (arr_3 [i_2]))))), 118));
        var_16 = ((!((((arr_4 [i_2] [i_2]) ? 1 : var_3)))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_17 = (min((((arr_1 [i_3]) ? (arr_0 [i_3 + 3]) : (arr_8 [i_3]))), var_7));
        var_18 = (arr_8 [i_3]);
        arr_10 [14] |= ((((((arr_8 [i_3 + 4]) ? (arr_0 [i_3 + 1]) : (((arr_0 [i_3]) ? var_1 : (arr_8 [i_3 + 2])))))) ? (arr_0 [i_3 + 1]) : (arr_8 [i_3])));
    }
    var_19 = ((((((var_2 <= var_11) ? var_10 : (max(4294967268, var_5))))) ? (max(27446, ((4294967277 ? 17 : 84836086)))) : var_1));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                var_20 = ((-2522457194 ? (((0 < (arr_11 [i_4])))) : var_3));
                var_21 = (((((var_4 ? -2 : (arr_12 [i_4])))) ? ((-(arr_12 [i_4]))) : (((arr_13 [i_4] [i_5]) ? (arr_12 [i_5]) : (arr_11 [i_4])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_22 = ((!(arr_20 [i_6] [i_8 + 3] [i_6])));
                                var_23 = (((((+((var_7 ? (arr_19 [4] [i_6] [i_6]) : (arr_17 [i_9])))))) ? var_2 : var_5));
                                var_24 = (max(4294967295, var_0));
                                var_25 = (-125 + -28);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_32 [i_11] [i_11] [i_11] [i_6] = ((((((arr_28 [i_7]) ? (arr_28 [i_6]) : 0))) ? ((((arr_28 [i_6]) ? 0 : (arr_28 [i_11])))) : (((arr_28 [i_6]) ? (arr_28 [i_6]) : 4294967277))));
                                arr_33 [i_6] [i_11] [i_8] [i_8 + 1] = (max((!var_2), (~-1687971949)));
                                arr_34 [i_11] = (min(((((max((arr_24 [i_6] [i_11] [1] [i_8] [i_12] [i_6]), (arr_22 [22] [i_7])))) ? (max(4861528488559863051, (arr_27 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) : (arr_20 [i_12 - 1] [i_8 + 3] [i_7]))), (((var_10 ? (arr_28 [i_6]) : -0)))));
                                var_26 = (!(arr_20 [i_8 - 2] [i_12 - 1] [i_8 - 2]));
                            }
                        }
                    }
                    var_27 &= (arr_24 [i_8] [i_7] [i_8] [i_7] [i_7] [i_8]);
                    arr_35 [i_6] [i_6] [i_6] [i_8 - 1] = ((((!(arr_29 [i_7] [i_7] [i_8] [i_7]))) ? (~0) : (arr_31 [i_8 - 3] [i_7] [i_8] [i_7] [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
