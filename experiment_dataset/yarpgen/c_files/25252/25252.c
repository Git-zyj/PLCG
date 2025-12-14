/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~9223372036854775807);

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_18 = (max(((!(((2417595015 - (arr_1 [2] [2])))))), (arr_0 [i_0])));
                var_19 = 8528456588328211355;
                var_20 = (((((((1 ? 3484028940 : 1))) ? (~1) : (1 && 1))) == (arr_1 [i_0] [10])));
                var_21 *= var_7;
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_22 &= ((22980 ? 200 : (arr_8 [i_0 + 1] [i_0 + 1] [i_3] [20])));
                var_23 = (arr_8 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_1]);

                for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    var_24 = (((1 ^ 42556) < (arr_1 [i_1 - 1] [i_4 + 1])));
                    arr_11 [i_0] [i_1] [i_3] [16] &= (((-1668620254 ? 1 : 1)));
                }
                for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_25 = (arr_14 [i_3] [i_5] [i_5] [i_5]);
                    var_26 ^= (arr_9 [i_0] [i_1] [i_3] [i_5 + 2] [i_5 + 1]);
                    var_27 = (max(var_27, ((((((arr_2 [i_0 + 2]) & (arr_9 [i_0] [i_0] [i_0] [7] [i_0]))) == (((arr_5 [i_0] [i_0] [10]) ? var_13 : var_16)))))));
                }
            }
            var_28 = (max(((+(max((arr_12 [18] [i_1] [18] [i_0]), var_13)))), var_0));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_29 = (min(var_29, 1));
                            arr_22 [i_7] [20] [i_1 - 1] [i_7] |= ((-1920208236143644726 ? 1 : 2751611860));
                            var_30 = (max(var_30, ((min(((((17 << (4294967295 - 4294967280))))), 2097152)))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_30 [i_1] [i_10 - 1] [i_9] [i_1] [i_1] = ((20165 ? 1 : 41123));
                            var_31 = (min(-7473937944744004921, (!6258619436730843900)));
                        }
                    }
                }
            }
        }
        var_32 = (max((1 || 42564), (1 >> 0)));
    }
    #pragma endscop
}
