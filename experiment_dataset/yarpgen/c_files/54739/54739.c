/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 &= (arr_0 [i_0 - 1]);
                var_16 = (arr_3 [i_0] [i_1] [i_0 - 1]);
            }
        }
    }
    var_17 *= ((((!-1934277263) && var_0)) ? (max((max(var_0, var_6)), var_13)) : (((min((1934277262 || 3056230924346791521), var_3)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_18 = ((((((!(arr_16 [i_2] [i_3] [i_4] [i_5]))) ? var_13 : 1)) < ((1 ? var_12 : ((max(31106, 1)))))));
                            var_19 *= ((+((-(((arr_13 [i_2] [i_3] [i_5]) & var_11))))));
                            var_20 ^= ((((min((arr_7 [i_4]), (arr_6 [i_5])))) ? (!-1) : (((arr_13 [i_3] [i_4] [i_5]) ^ -2120620197))));
                            var_21 ^= arr_8 [i_3];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_22 = (((!2120620172) < var_14));
                            var_23 = (min((arr_18 [i_7] [i_6] [i_3] [i_2]), 1));
                            arr_22 [i_2] [i_3] [i_6] [i_7] = (((arr_9 [i_6 + 2] [i_2]) == (((~((2120620195 ? -13015079 : 1)))))));
                            arr_23 [i_3] [i_6 - 2] [i_7] |= (((((arr_11 [i_6 + 2] [i_7] [i_7] [i_7]) ? ((var_5 ? 1 : (arr_12 [i_2]))) : (arr_17 [i_3] [i_6]))) > var_11));
                            arr_24 [i_3] [i_3] [i_6] [i_7] [i_2] = 0;
                        }
                    }
                }
                var_24 = (((((1934277262 >> (min(var_4, var_14))))) ? var_12 : (((!var_2) ? (arr_13 [i_2] [i_2] [i_3]) : var_13))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                arr_32 [i_8] [i_3] [i_8] [i_9 - 3] = (((!2120620196) ? ((22654 ? 1934277253 : 1)) : 1));
                                arr_33 [i_2] [i_8] [i_9] [i_10] = (min((max((arr_27 [i_2] [i_8]), (~-5617401377846558933))), ((min(((~(arr_14 [i_2] [i_3] [i_3] [i_8] [i_9 - 3] [i_10]))), (max((arr_6 [i_2]), (arr_19 [i_2] [i_8] [i_9] [i_10]))))))));
                                arr_34 [i_9 - 4] [i_8] [i_10] [i_10] = ((!(((1934277262 ? 791919968 : 1)))));
                            }
                        }
                    }
                }
                arr_35 [i_3] = (min((max((min(1840237203, (arr_12 [i_2]))), ((((arr_11 [i_3] [i_3] [i_2] [i_2]) ? (arr_17 [i_3] [i_2]) : (arr_28 [i_3])))))), (1 * 791919967)));
            }
        }
    }
    var_25 = 1;
    #pragma endscop
}
