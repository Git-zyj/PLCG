/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [7] [i_0] [i_1] = (i_0 % 2 == zero) ? ((max((arr_0 [i_0] [i_0]), ((((((var_3 || (arr_1 [i_0])))) << (arr_5 [i_0]))))))) : ((max((arr_0 [i_0] [i_0]), ((((((var_3 || (arr_1 [i_0])))) << (((arr_5 [i_0]) - 29))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((!((((arr_13 [i_0] [2] [i_1] [i_2] [6] [i_3]) ? (arr_13 [i_1] [i_2] [i_1] [i_1] [18] [i_1]) : 20))))))));
                            var_17 = ((((((arr_9 [i_0] [i_2] [i_3]) ? (arr_5 [i_0]) : (arr_2 [i_0])))) ? ((-(arr_9 [i_3] [i_0] [i_0]))) : ((((-59 + 2147483647) >> (9223372036854775807 - 9223372036854775781))))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] = ((min((((arr_1 [i_0]) & (arr_0 [i_3] [i_3]))), (arr_8 [i_2]))));
                            arr_15 [i_0] [14] = var_11;
                            var_18 = ((((24 < (((arr_12 [i_1] [i_0] [i_0] [i_3]) ? 248 : (arr_9 [i_2] [i_1] [i_0]))))) && (((var_15 << (9223372036854775807 - 9223372036854775807))))));
                        }
                    }
                }
                var_19 = (min((((var_15 != var_15) ? (arr_13 [i_0] [i_0] [13] [i_0] [i_0] [i_1]) : ((var_4 ? (arr_5 [i_0]) : var_11)))), (((((!(arr_6 [i_0] [i_1] [i_1])))) ^ (((var_1 && (arr_10 [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            {
                arr_20 [1] = ((((!(arr_11 [i_4] [i_4] [i_4 - 1] [i_4])))) << (-17935626487113317798 - 511117586596233807));
                arr_21 [i_4] [i_4] [i_5] = ((arr_12 [i_5 + 1] [i_4] [i_5 - 1] [16]) ? ((-1 ? var_8 : 187)) : (~var_8));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                {
                    arr_28 [1] |= (min((min((-1 | var_6), (arr_27 [i_8] [3] [i_6]))), -1));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_35 [i_6] [i_7] [i_8] [12] [i_10] [i_9] [4] |= (((((~((min((arr_29 [1] [1] [1] [i_7]), (arr_6 [i_6] [i_6] [1]))))))) ? (arr_5 [0]) : (~var_14)));
                                arr_36 [i_6] [i_10] [i_8] [i_7] [i_10] [i_9] [i_10] = (((((((arr_26 [i_10] [i_8] [i_8] [i_7]) || var_0)) ? (((1 ? var_13 : var_1))) : ((1162226989 ? 255 : 4483585686962188392)))) + (arr_23 [i_6] [i_9 + 3])));
                                arr_37 [i_8] [6] [6] [i_9] [i_10] = ((-(((min((arr_23 [i_6] [2]), (arr_17 [i_8]))) ^ -var_12))));
                            }
                        }
                    }
                    var_20 = var_11;
                }
            }
        }
    }
    #pragma endscop
}
