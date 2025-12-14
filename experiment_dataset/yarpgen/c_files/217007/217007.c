/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 += ((max((arr_1 [6]), (arr_1 [1]))));
        arr_2 [i_0] = (min((min((((arr_1 [i_0]) + var_7)), var_7)), var_11));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_16 = var_4;
                            arr_13 [i_0] [i_1] [15] [13] [i_4] [i_0] = (min(((min((((arr_12 [i_0] [i_2] [7] [1] [1] [i_2]) ? var_1 : (arr_4 [15] [i_1] [i_0]))), var_6))), (max(((var_12 ? 0 : 1840317212)), (((var_13 / (arr_1 [i_0]))))))));
                            var_17 = (((arr_4 [i_2 + 3] [i_2] [i_0]) ? ((var_4 ? (arr_4 [i_2 + 3] [i_2 + 3] [i_0]) : (arr_4 [i_2 + 3] [i_2] [i_0]))) : (((arr_12 [i_2 + 3] [i_2] [i_3] [i_3 - 1] [i_3] [i_3]) ? -1840317212 : (arr_12 [i_2 + 3] [i_3] [i_3] [i_3 - 1] [12] [i_3])))));
                            var_18 &= ((max(var_7, (~18927))));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_19 = (max(var_19, (arr_14 [i_3 - 2] [i_2 - 1] [i_3 - 2] [i_2 - 1])));
                            var_20 -= (max((min((arr_6 [i_2 + 1] [i_2] [i_5]), (arr_6 [i_2 + 2] [i_2] [i_2]))), ((((arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3 - 2]) <= (arr_14 [i_2 + 1] [4] [i_2 + 3] [i_3 + 1]))))));
                            var_21 = (~var_4);
                        }
                        var_22 = (min(var_22, (((((((!(arr_7 [11] [11] [i_1]))))) && var_5)))));
                        var_23 += (max((arr_14 [i_0] [i_1] [i_2] [i_2]), 1));
                        var_24 += ((((!(arr_17 [i_0] [i_0]))) && (!1)));
                    }
                    var_25 = arr_8 [4] [i_1];
                    var_26 = ((((min(((((arr_15 [i_0] [i_1] [i_2]) ? (arr_17 [11] [i_2]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [7] [i_0])))), ((var_2 ? 5913230842283698164 : var_12))))) ? (((min(-566726594, var_13)) + -var_8)) : var_1));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_27 += (min((arr_16 [i_2 - 1] [i_1] [i_0] [i_0] [i_0]), (~var_6)));
                                var_28 &= ((((min(var_4, ((var_13 / (arr_0 [i_0] [i_1])))))) ? ((min(var_10, var_5))) : var_13));
                            }
                        }
                    }
                    arr_23 [i_0] [i_0] [i_0] [i_0] = (min((arr_3 [i_0] [i_2 - 2] [i_2 - 2]), (((arr_10 [i_2] [i_2 - 1] [i_0] [i_2 + 2] [i_2] [i_2]) ? (arr_18 [i_0] [i_2 - 2] [i_0]) : var_5))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
    {
        var_29 += max(((((arr_7 [i_8] [i_8] [i_8]) + ((var_4 ? var_13 : var_0))))), (min((min(var_4, var_5)), ((max((arr_3 [i_8] [i_8] [i_8]), var_9))))));
        var_30 = ((~(arr_5 [i_8] [1] [i_8] [1])));
    }
    var_31 &= ((((min(((min(var_6, var_9))), (max(var_2, var_8))))) && ((!(!var_8)))));
    #pragma endscop
}
