/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((arr_2 [i_2]) | var_2)) | (arr_6 [i_0] [i_1] [i_2]));
                    var_19 = (((arr_0 [i_1] [i_1]) >= (arr_3 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = ((~((128 ? (arr_6 [i_0] [i_1] [i_2]) : var_6))));
                                var_21 = (((((-(arr_7 [i_2] [8] [i_2] [i_2])))) != var_17));
                            }
                        }
                    }
                    arr_14 [i_2] [i_2] [i_2] = (var_16 ? var_3 : ((((min((arr_10 [i_0]), var_9))))));

                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        var_22 -= ((var_5 ? (((-2147483647 - 1) ? 2674867650 : 22)) : 127));
                        var_23 = ((~(arr_16 [i_0] [i_1] [i_0] [i_5])));
                        arr_18 [i_0] [i_2] [i_2] = -56;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                {
                    arr_26 [i_6 + 1] [i_8] [i_7] [16] = (min((((var_9 ? (arr_19 [i_6 + 3]) : (arr_19 [i_6 - 1])))), 9223372036854775808));
                    arr_27 [i_8] [7] = ((-(-19 >= var_1)));
                    var_24 = (min((!var_2), (((arr_24 [i_6 - 1] [i_7] [i_8 + 1] [i_6 - 1]) + -10272))));
                }
            }
        }
    }
    #pragma endscop
}
