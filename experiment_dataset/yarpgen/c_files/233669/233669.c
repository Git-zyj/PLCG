/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_16 = ((!((((arr_2 [i_0] [i_2 + 1] [i_1]) - (!-29251))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = var_15;
                    arr_9 [i_0] [i_0] [i_0] [i_1] = ((((((arr_2 [12] [i_2 + 1] [i_2 + 2]) ? var_2 : (arr_2 [i_1] [i_2 - 1] [i_2])))) ? (((arr_2 [i_1] [i_2 - 3] [i_2 - 2]) ? var_0 : 0)) : ((max((arr_2 [10] [i_2 + 2] [11]), (arr_2 [i_1] [i_2 - 3] [i_2]))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_17 = (((var_14 ? 1 : ((0 * (arr_12 [i_0] [i_0] [i_3]))))));
                    var_18 = (max(var_18, ((((6421425606519617062 ? (max(var_13, 1) : ((-16186 ? var_8 : (arr_13 [i_0] [i_1]))))))))));
                    arr_14 [1] [i_1] [i_1] = (min(((max(1, (arr_12 [i_1] [i_1] [i_3])))), (((arr_6 [i_0] [i_1]) ? (arr_6 [i_0] [i_1]) : (arr_0 [i_3])))));
                    var_19 = (max(var_19, ((((((-(arr_2 [i_0] [i_1] [i_3])))) <= (arr_4 [i_0]))))));
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_20 = (max((arr_5 [i_1]), var_10));
                    arr_17 [i_1] [17] = (max((arr_7 [i_1]), -9223372036854775807));
                    arr_18 [i_1] [i_1] [i_4] = ((!(((var_7 ? (!var_2) : (arr_16 [i_1] [i_1] [i_4] [i_4]))))));
                }

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_21 = (max(67108863, (((!(arr_19 [i_5 - 1] [i_5 - 1] [i_1] [i_1]))))));
                    var_22 &= ((min(1, var_15)));
                    var_23 = -1638015851345367993;
                }
                arr_21 [i_0] [i_0] [i_1] = (67108863 * -92);
                arr_22 [i_0] [i_1] = ((-((-(arr_13 [i_0] [15])))));
                arr_23 [i_0] [i_1] = ((-3112789423 / (~var_9)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            {
                var_24 *= (arr_26 [i_7]);
                var_25 = (max(var_25, var_13));
                arr_30 [i_6] [i_7] [i_7] = ((max((arr_29 [i_7 - 1] [i_7] [i_7]), (arr_29 [i_7 - 1] [i_7] [i_7]))));
            }
        }
    }
    var_26 = var_5;
    #pragma endscop
}
