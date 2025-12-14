/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_2 ? (min(var_7, var_3)) : var_0))) ? var_1 : ((((((var_8 ? var_6 : 46))) ? var_2 : ((var_3 ? var_7 : var_2)))))));
    var_12 = (min(var_12, (1723676601 < 4294967286)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((((arr_8 [i_0] [i_1] [i_2 + 1] [i_2 - 1]) != (arr_8 [i_0] [10] [11] [i_2 + 1]))) ? (min((arr_3 [i_2 - 1] [i_2 - 1]), (arr_3 [i_2] [i_2 + 1]))) : (((((((arr_2 [i_2] [i_1]) ? (arr_5 [i_2] [8] [i_0]) : (arr_9 [i_2])))) ? 2571290694 : (arr_8 [i_2 - 1] [10] [i_2] [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (((!var_10) ? (((-((~(arr_1 [i_2])))))) : (arr_2 [i_0] [i_0])));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [9] = (min(-1723676601, var_3));
                            }
                        }
                    }
                    var_15 = ((3666541761 ? 1964880937 : (max(((8192 ? 985290750 : 1723676602)), 577821176))));
                    arr_19 [i_2] = ((((((((~(arr_1 [i_0])))) ? (arr_14 [i_0] [i_0] [i_0]) : (arr_13 [i_2])))) ? ((((min(252, 18446744073709551612))) ? (~var_4) : ((((!(arr_11 [i_2] [i_0] [10] [6] [i_0] [i_2]))))))) : (max(((((arr_3 [i_0] [i_0]) ? var_3 : 7572))), (min(1557427076116480178, (arr_13 [i_1])))))));
                    arr_20 [i_0] [i_1] [i_2] = ((!(((((min((arr_8 [8] [i_1] [i_1] [8]), (arr_4 [i_0] [i_2])))) ? (arr_8 [i_0] [i_1] [i_2] [i_2]) : (arr_11 [i_2] [i_1] [i_2] [i_0] [i_2] [i_1]))))));
                }
            }
        }
    }
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_17 += (min(((var_0 ? (arr_8 [i_5] [i_6] [9] [i_6]) : (arr_8 [2] [i_5] [i_5] [i_5]))), (arr_8 [i_5] [i_5] [i_5] [i_5])));
                var_18 += (min(1964880935, (-var_9 > var_8)));
                arr_25 [i_5] [i_6] = ((max((min(19, 0), (((3797231880402701580 ? (arr_21 [i_5]) : (arr_7 [i_5]))))))));
            }
        }
    }
    #pragma endscop
}
