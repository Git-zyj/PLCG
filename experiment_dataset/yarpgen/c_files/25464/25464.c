/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_18 = (~var_12);
                            var_19 = (((var_10 ? var_17 : var_11)) | (arr_13 [i_2] [i_2] [i_2] [5] [i_1] [i_1] [5]));
                            var_20 = (((arr_3 [i_1]) * (arr_3 [i_2])));
                        }
                    }
                }
            }
            var_21 = (((arr_4 [i_0]) ^ (arr_3 [i_0])));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_22 = (((arr_14 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [13] [i_5] [i_5] [11]) : (arr_5 [i_0] [9] [9] [1])));
            var_23 = (max(var_23, 3171082158643521587));
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {
            var_24 = (((arr_13 [i_0] [4] [i_6] [i_0] [i_6] [i_0] [i_0]) == (((!(arr_6 [i_6] [6] [8]))))));
            var_25 = (((((var_10 * (arr_8 [12] [i_0] [i_0] [5] [12] [7])))) ? (~var_1) : ((((var_2 <= (arr_4 [i_0])))))));
        }
        var_26 = (min(var_26, var_2));
        var_27 = arr_18 [i_0] [i_0];
        var_28 = ((~(((arr_14 [i_0] [8] [8] [6]) ? var_10 : var_3))));
        var_29 = (((((arr_15 [i_0] [6] [i_0]) == var_16)) ? ((-(arr_8 [i_0] [11] [14] [i_0] [i_0] [i_0]))) : (arr_11 [i_0] [i_0] [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_30 = ((max(251, ((~(arr_25 [19] [i_8] [i_9]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_31 = (max(((var_10 ? (!6091118754535274542) : (15642 || var_4))), (((((((arr_21 [i_9] [16]) * var_8))) || (((var_15 ? 28865 : (arr_28 [3] [i_7] [i_7] [7] [11])))))))));
                                var_32 = (max(-var_11, (max((arr_31 [i_7] [i_8] [i_9] [i_8] [i_11 - 3]), (arr_31 [i_7 - 1] [i_8] [3] [i_7 - 1] [i_11 - 2])))));
                            }
                        }
                    }
                    var_33 = ((((((arr_23 [i_9] [i_7]) ? (arr_27 [i_7] [i_7]) : (arr_27 [i_7] [i_9])))) ? (((arr_28 [i_7 + 1] [i_7] [i_7 - 1] [i_7] [i_9]) ? (arr_28 [i_7 + 1] [i_7] [i_9] [i_7 + 1] [i_8]) : (arr_23 [i_7 - 1] [i_7 - 1]))) : (((arr_28 [i_7 - 1] [i_7] [i_9] [i_7 - 1] [i_7]) ? (arr_28 [i_7] [i_7] [i_8] [i_8] [i_9]) : 15))));
                }
            }
        }
    }
    #pragma endscop
}
