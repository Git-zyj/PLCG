/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = var_2;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [14] [i_4] = ((+(((arr_12 [i_0] [i_0]) ? (var_4 | var_0) : (arr_3 [i_0])))));
                                var_12 -= (min(((var_8 ? (arr_6 [i_0] [i_3]) : var_1)), (((!(arr_6 [2] [i_0]))))));
                                var_13 -= ((((min((((var_9 >= (arr_7 [i_3] [i_3])))), ((255 ? (arr_1 [10]) : var_0))))) || ((((((var_0 & (arr_2 [i_0] [i_1] [i_2])))) ? (arr_9 [i_0] [i_3] [i_1] [i_1]) : (((~(arr_6 [i_0] [i_0])))))))));
                                arr_14 [i_0] [i_0] [i_0] = 110;
                                var_14 = var_5;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_15 += -16838;
                                arr_23 [i_0] [i_5] [i_5] [i_6] = var_0;
                                var_16 = (max((((((243 ? (arr_7 [i_0] [i_0]) : var_2)) ^ ((var_1 ? (arr_2 [i_0] [i_0] [i_7]) : (arr_11 [i_0] [i_0] [10] [i_1] [i_5 - 2] [i_6] [i_1])))))), (arr_9 [i_1] [i_1] [i_6] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = 253;
    var_18 = (max(var_18, (((var_8 << (!var_1))))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            {
                var_19 = ((min(((1615243535 | (-9223372036854775807 - 1))), -var_6)));
                var_20 = ((-((var_5 ? var_0 : (arr_24 [i_8] [i_8])))));
                /* LoopNest 3 */
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_21 = 524284;
                                var_22 = ((((arr_36 [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10 + 3] [12] [i_10]) ? (arr_35 [i_8] [2] [13] [i_11] [17]) : var_1)) >> (var_10 - 2293516795));
                                var_23 = (min(var_23, (((-(arr_33 [i_11] [i_9] [i_9] [i_8]))))));
                                var_24 = ((30871 ? (arr_36 [i_8] [i_9] [i_10] [i_10] [7] [i_12]) : 26089));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
