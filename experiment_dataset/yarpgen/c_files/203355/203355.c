/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] = (arr_9 [i_0] [i_0] [i_2] [i_0]);
                        var_14 = (((arr_0 [i_1 + 1]) && (((arr_10 [i_0] [i_1 - 3] [1]) < 4095))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = 13451;
                        arr_16 [i_0] [i_0] = ((((((arr_2 [i_1 - 1] [i_2]) >> (((!(arr_9 [i_0] [i_1] [10] [i_4]))))))) ? 0 : (((-1 + 2147483647) >> ((((arr_2 [i_0] [i_0]) >= (arr_0 [i_4]))))))));
                        arr_17 [i_0] [14] [14] [i_0] = (((max((((arr_3 [14]) ? (arr_11 [i_4] [i_1 + 2] [1]) : var_6)), (arr_2 [i_2] [i_2]))) | ((min(1, (arr_13 [i_0]))))));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_15 = ((((((!var_1) ? (((arr_6 [i_0] [i_0]) ? 70368744169472 : 129)) : (((min(242, (arr_7 [i_0] [i_0] [i_0] [i_4])))))))) ? 0 : (arr_7 [i_1] [i_2] [13] [i_5])));
                            var_16 = (max((arr_19 [i_1 - 3] [i_1 - 3] [i_1] [i_1 - 2] [i_1 + 1]), (max((arr_1 [i_1 - 2] [19]), 8))));
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            var_17 |= arr_21 [i_0];
                            var_18 |= (min(11, ((((1 > (arr_20 [i_0]))) ? ((((arr_18 [i_0] [i_0] [i_1 - 3] [i_2] [i_4] [i_6]) ? (arr_8 [i_0]) : (arr_1 [i_6] [i_2])))) : -269550860))));
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_4] [i_6 - 1] [i_6 + 1] = ((1 ? (((!((min(var_10, 1)))))) : (arr_21 [i_0])));
                            arr_25 [i_0] [i_6 - 1] [i_2] [i_4] [i_1] [i_2] = 1001250339;
                            arr_26 [i_6] [i_6] [i_4] [i_1] [i_2] [i_1] [i_0] = arr_23 [i_6 + 1] [i_4] [i_2] [i_1 - 1] [i_0];
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_19 = (max(var_19, (arr_7 [i_0] [i_1] [6] [i_7])));
                            arr_29 [i_7] [i_7] [i_7] [i_7] [10] = ((-86 ? (arr_1 [i_7 + 1] [i_1 + 1]) : (arr_23 [i_0] [19] [i_1 - 2] [i_7 + 1] [i_7])));
                            var_20 ^= (arr_6 [i_7 + 1] [i_1]);
                            var_21 = (arr_27 [i_7 + 1] [i_1] [i_2] [i_7] [i_0]);
                        }
                    }
                    var_22 = ((max((arr_13 [i_1]), (arr_0 [i_0]))));
                    var_23 = (max(var_23, 111));
                }
            }
        }
    }
    #pragma endscop
}
