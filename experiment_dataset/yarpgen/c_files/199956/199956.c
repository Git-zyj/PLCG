/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_1] [10] [i_2] [i_3] = (((arr_4 [i_1]) & -870451482));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_16 = (((arr_5 [i_2] [i_3] [i_4]) << (((arr_2 [i_0] [i_0]) - 2084750522))));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] [i_3] = ((+(((arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_7 [i_0] [i_1]) : (arr_0 [i_1])))));
                        }
                        arr_16 [i_0] [i_1] [i_3] [i_3] [i_2] [i_0] = (arr_2 [i_1] [i_0]);

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_17 *= (arr_18 [i_1] [i_5] [i_5]);
                            arr_20 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] [i_5] = (((18446744073709551615 < -1099675899052070170) >> 22));
                            var_18 ^= (!91);
                            arr_21 [i_1] [i_1] [i_1] [i_3] [i_5] = (!32767);
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_25 [i_1] [13] [i_2] [16] [i_2] [i_2] [i_2] = 168;
                            arr_26 [i_6] [i_6] [i_1] [i_2] [i_1] [1] [i_0] = ((870451482 ? 255 : -870451490));
                            arr_27 [i_6] [i_1] [i_2] [i_1] [i_0] = (arr_14 [i_0] [i_1] [i_1] [i_3] [i_6]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_19 += (((min((((arr_33 [i_8] [6] [i_2] [i_1] [i_2] [i_0] [i_0]) ? 7787223749350523540 : 149)), (((!(arr_28 [i_1] [i_2] [i_0])))))) * ((((!(arr_7 [i_0] [i_7])))))));
                                var_20 = (min((min(0, (max(var_13, 14922020269343684707)))), ((max((!var_2), (arr_4 [i_1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_21 |= ((((((((min(15, -11525))) + 2147483647)) >> (arr_9 [i_0] [i_0] [i_2] [i_9] [i_10]))) >= (arr_10 [i_0] [i_0])));
                                var_22 = ((((((arr_14 [i_10] [i_10] [i_1] [i_10] [i_10]) % (arr_14 [1] [i_1] [i_1] [1] [i_10])))) && ((min((((13 ? var_7 : var_8))), (arr_33 [i_0] [i_0] [i_1] [10] [1] [i_0] [i_0]))))));
                                var_23 += max((((arr_23 [i_10] [i_1] [i_2] [i_0] [i_2] [i_2]) >> (((arr_39 [i_10] [i_0] [i_0] [i_0]) - 9182798718878123425)))), (((arr_23 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]) ^ (arr_23 [i_0] [i_0] [i_2] [i_0] [i_9] [0]))));
                                arr_40 [8] [8] [i_1] [i_9] [8] = (((((6364487470574196332 / (arr_32 [i_1] [i_1] [i_2] [i_9] [i_10])))) ? (arr_35 [i_1] [i_9] [i_1] [i_1]) : 0));
                            }
                        }
                    }
                    arr_41 [i_2] [i_2] [i_2] [i_0] &= (max(-679655624, ((((max(16447416689800680128, (arr_13 [13] [i_2]))) == -12531)))));
                }
            }
        }
    }
    var_24 &= (((min(-15, 12530))));
    #pragma endscop
}
