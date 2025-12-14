/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-238362272 ? -2112151903706748784 : -1092578786));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (((((1063008389 << (var_2 - 1666321770)))) ? (max((max(var_0, (arr_8 [i_1] [i_1] [i_1]))), (((arr_0 [i_0]) - (arr_5 [i_0]))))) : var_9));
                    var_13 = ((6652836976517430571 && ((((((13244 >> (-6652836976517430593 + 6652836976517430598)))) ? (-1092578790 / -1092578789) : -6652836976517430554)))));
                    var_14 = ((var_2 ? (((arr_8 [i_0] [i_1] [i_0]) / -6652836976517430553)) : var_4));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_15 = 1;
        arr_12 [i_3] = (((467886708 ? 16352 : var_1)) << ((((min(var_8, (!1)))) + 158)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_16 = (min((max(var_1, var_9)), var_7));
                    var_17 = ((((((var_7 * 1) / var_9))) ? (((-(arr_15 [i_4] [i_3])))) : (arr_10 [i_3 - 1])));
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        var_18 = (((arr_18 [i_6]) ? (((((!(arr_18 [i_6])))) * (arr_21 [7] [i_6]))) : ((1092578796 ? 1092578784 : -1159433507))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    {
                        arr_31 [i_6] [14] [1] [i_6] [i_6] [i_9] = (max((((((((arr_27 [3] [3]) ? var_10 : var_6))) ? (arr_23 [i_8 - 2] [i_8 - 2]) : var_5))), (min(((30622 ? -6652836976517430559 : 1092578781)), var_6))));
                        arr_32 [i_6] [1] [i_9] [i_9] [1] = 467886701;
                        arr_33 [i_6] [i_7] [i_6] [i_9] [9] [i_6] = (6652836976517430571 && 467886727);
                        arr_34 [i_9] [1] [i_9] [13] [i_9] = (max((~var_6), (min((arr_30 [i_9]), (arr_30 [i_9])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
