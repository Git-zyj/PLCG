/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((min(((min(171, var_1))), var_8)));
    var_14 = 738857901;
    var_15 = -13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((3556109395 ? ((-(arr_3 [i_0]))) : (arr_0 [i_0])));

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            arr_8 [3] [3] [i_0] = ((!(arr_1 [i_0] [i_1])));
            var_16 = ((0 ? -3646058172 : 238));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_17 -= (arr_13 [i_3 + 1] [i_3 + 1] [5] [i_3] [i_3]);
                            var_18 = (arr_1 [i_3 + 1] [i_1 + 3]);
                            arr_15 [i_0] [i_0] [i_0] [i_0] [4] [i_0] [i_4] = -2147483647;
                        }
                    }
                }
            }
        }
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            arr_19 [1] |= (arr_16 [1] [0] [1]);
            var_19 = (arr_17 [i_5 - 1] [i_5 - 2]);
            var_20 = (-8573006567499383535 + 975784995);
        }
    }
    for (int i_6 = 3; i_6 < 15;i_6 += 1)
    {
        arr_23 [i_6] = (arr_22 [8]);
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_21 = (max(var_21, ((min((min(0, (~2))), ((max(65522, ((max((arr_25 [i_7 - 2]), (arr_21 [i_6]))))))))))));
                    var_22 = ((!(((13 << (738857901 - 738857872))))));
                    arr_30 [i_6] = (arr_24 [i_6 - 1] [10]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    arr_36 [i_10] [6] [i_10] [1] = (max((((!(arr_33 [i_10] [i_6 - 2] [i_6 - 3])))), (max(26411, (arr_20 [i_6])))));
                    var_23 &= ((-(((!(((var_12 ? var_1 : -9112138006497924485))))))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_24 = var_9;
                                var_25 = (max(var_25, var_8));
                                arr_42 [6] [2] [6] [2] [i_12] [i_11] [i_12] = (min(((~(((!(arr_26 [i_6])))))), (arr_41 [i_6 - 3] [i_9])));
                                arr_43 [i_6] [6] [9] [14] [i_12] = ((var_1 + (((arr_33 [i_6 - 2] [i_9] [i_10]) >> (((arr_33 [i_6 - 2] [i_12] [i_12]) - 8574365492727836953))))));
                            }
                        }
                    }
                }
            }
        }
        var_26 &= (max(((max((arr_28 [11] [9] [i_6] [i_6]), -18420))), ((((~(arr_31 [i_6] [3] [i_6]))) ^ (((arr_27 [i_6] [i_6] [i_6]) << (35723 - 35708)))))));
    }
    #pragma endscop
}
