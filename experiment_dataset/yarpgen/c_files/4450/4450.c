/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (min(var_16, var_1));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_17 = (min(var_17, 10354));

            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                var_18 = (max(var_18, (((-(arr_2 [i_2] [i_2 + 1] [i_0]))))));
                var_19 = (max(var_19, (~var_11)));
            }
            var_20 += (arr_5 [i_1] [i_0]);
        }
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            var_21 += (arr_1 [12]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_22 ^= (((((var_8 / (arr_13 [12] [i_3] [i_4])))) ? (arr_6 [i_5 + 1] [i_3 + 1]) : ((var_14 ? 17695464653673365715 : (arr_11 [i_6] [i_4] [i_0] [i_4] [i_3 - 1] [i_0])))));
                            var_23 += (arr_15 [i_0] [i_0] [i_0] [i_0] [1]);
                            var_24 = (max(var_24, (((-(arr_2 [i_3 - 3] [i_3 - 3] [i_3 - 2]))))));
                            var_25 += var_8;
                        }
                    }
                }
            }
            var_26 = (max(var_26, (((-(arr_1 [4]))))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_27 = (min(var_27, (((+(((arr_4 [i_7]) ? var_1 : var_2)))))));
                            var_28 = (max(var_28, (((((var_3 ? var_1 : var_10)) | -var_7)))));
                            var_29 = (max(var_29, ((((arr_6 [i_3 + 1] [i_8 - 1]) ? var_11 : ((1 ? -2779256984892269268 : 1)))))));
                        }
                    }
                }
            }
            var_30 += ((var_2 ? (arr_25 [8] [i_0] [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 2]) : (arr_25 [18] [i_3] [i_3] [i_3] [i_3] [i_0])));
        }
        var_31 = (min(var_31, (((var_3 ? (arr_19 [i_0] [i_0] [i_0]) : var_6)))));
    }
    #pragma endscop
}
