/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((((var_13 > (arr_3 [9]))) ? 3079782438 : (((min((min((-127 - 1), var_18)), ((min(var_2, (-127 - 1))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_20 = arr_8 [i_0] [9] [i_0] [i_0];
                            var_21 = (max((-127 - 1), -1064));

                            for (int i_4 = 2; i_4 < 11;i_4 += 1)
                            {
                                var_22 = (max(var_22, 4053546495));
                                var_23 += (((((max(996824999, (-127 - 1))) / (((arr_7 [i_1]) ? (arr_6 [i_1]) : var_12))))));
                            }

                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] [i_1] &= ((((var_12 >= (((arr_14 [6] [11] [i_1] [i_1] [i_5]) / 996824999)))) ? (((-((var_2 ? var_14 : -117))))) : ((var_6 ? var_13 : ((((var_11 || (arr_3 [i_2])))))))));
                                arr_16 [1] [5] [i_2] [10] [i_2] [i_1] [i_2] = (arr_6 [i_2]);
                            }
                            for (int i_6 = 2; i_6 < 9;i_6 += 1)
                            {
                                var_24 = ((-(((!var_1) ? ((((arr_11 [i_0] [i_2] [i_2] [i_3] [i_6] [i_3]) ? var_9 : (arr_8 [1] [1] [i_3] [1])))) : (arr_3 [i_6 - 2])))));
                                var_25 = (arr_18 [10] [10] [i_2] [i_2] [i_0] [7]);
                            }
                            for (int i_7 = 2; i_7 < 10;i_7 += 1)
                            {
                                var_26 = ((((max(var_14, ((var_16 ? var_17 : (arr_9 [i_0] [i_2] [2] [2] [i_7 + 2])))))) ? ((max((~3298142297), (arr_7 [i_7])))) : ((-((-2 ? (arr_6 [i_2]) : -1))))));
                                arr_21 [i_0] [i_2] [8] [i_3] [5] = ((-(arr_12 [i_3])));
                                arr_22 [i_0] [i_1] [i_2] [2] [i_2] [i_7 + 3] [i_7] = (((((-4 ? -542 : -2488))) ? (((((min((arr_10 [i_0] [i_0] [i_7 - 2] [i_7] [i_3]), var_9))) ? var_10 : (max(3298142296, 996824995))))) : (min((max((arr_2 [i_2] [i_3] [0]), var_13)), ((min(var_17, (arr_11 [i_7] [i_3] [i_3] [i_2] [i_0] [i_0]))))))));
                            }
                            for (int i_8 = 3; i_8 < 11;i_8 += 1)
                            {
                                arr_25 [i_0] [i_2] = (((((!(arr_13 [i_8 + 1] [i_8 - 2] [i_8 - 1] [i_8 - 3] [i_8] [i_8 + 2])))) != (arr_13 [i_8 - 2] [1] [i_8 + 2] [i_8 - 1] [6] [i_8 - 1])));
                                var_27 = (arr_10 [i_0] [i_1] [i_1] [i_1] [i_8]);
                            }
                        }
                    }
                }
                arr_26 [i_0] = (((((-127 - 1) != 2097151)) ? (max((((arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]) ? (arr_12 [i_0]) : var_7)), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_1]))) : ((min(1578896928, (((arr_17 [i_0] [i_0] [i_1] [11]) ? var_14 : var_0)))))));
                var_28 = (min(var_28, ((((-127 - 1) ? (((((var_4 ? var_6 : (arr_7 [3])))) ? ((max((arr_14 [i_0] [i_0] [6] [6] [4]), var_18))) : ((~(arr_17 [i_1] [2] [10] [i_0]))))) : (!var_5))))));
            }
        }
    }
    var_29 = ((((max(((var_2 ? var_7 : 3298142300)), var_3))) ? (((var_4 ? var_16 : ((var_9 ? var_8 : 29360128))))) : var_7));
    var_30 = (max(var_30, (((((!((max(var_11, -1901004411))))) ? ((var_19 ? ((1597993057 ? 996824995 : 413231815)) : var_12)) : (((var_10 / var_10) ? (((var_14 ? var_15 : var_19))) : ((1422741973 ? 3298142297 : (-2147483647 - 1))))))))));
    #pragma endscop
}
