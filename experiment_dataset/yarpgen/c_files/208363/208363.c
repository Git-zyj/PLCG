/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            var_16 *= (!-23);
                            arr_17 [i_1] [i_1] = ((max((max((arr_9 [i_0] [i_1] [i_1]), 23)), var_2)));
                        }
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            arr_20 [4] [i_1] = ((((max((min((arr_13 [i_5] [i_3] [i_2] [i_0]), (arr_8 [i_0] [i_0] [i_0]))), (min(0, var_1))))) ? (min(23, ((max(1, (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (max((max(27, (arr_14 [i_0] [i_1] [i_2] [i_3] [i_5]))), (max(var_4, 13))))));
                            arr_21 [i_1] [i_1] [i_2] [i_3] [i_3] = ((!((min((arr_4 [i_1 + 1] [i_5 - 1]), var_1)))));
                            arr_22 [i_0] [i_1 - 2] [i_1] [i_3] [9] = (min(13043, 1));
                        }
                        arr_23 [i_0] [i_1 - 1] [i_1 - 1] [i_1] = (~-123);
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_17 = (max(var_17, (((max((~var_1), (max(var_3, var_9)))) << (((((arr_14 [i_0] [i_0] [i_0] [i_0] [1]) ? -6 : (~0))) + 21))))));
                            var_18 &= ((((((arr_3 [i_0]) * (arr_7 [i_0] [i_1] [i_2])))) ? (((var_8 * var_3) ? ((-(arr_14 [1] [1] [11] [1] [i_7]))) : 82)) : (+-1)));
                            var_19 |= ((-11 ? -14 : 0));
                            var_20 = (max(var_20, (((((((arr_19 [i_2] [i_0]) ? (((min((arr_9 [i_0] [i_1] [i_2]), (arr_11 [i_0] [i_2] [i_6] [i_0]))))) : -8))) ? 13 : -5904556764167758081)))));
                            arr_30 [i_2] [1] [i_1] [1] [12] = ((min((arr_0 [i_7]), var_4)));
                        }
                        var_21 = (min(var_21, (min(((max((arr_25 [i_0] [i_6]), (arr_16 [i_1] [8] [8] [1] [i_0] [i_6] [i_1 - 1])))), (min(var_3, var_9))))));
                    }
                    var_22 = (max(var_22, ((max((max(((max(44, 96))), (min(-5644921034851599838, 10)))), (max(19, -118)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_39 [1] [i_8] [i_10] [i_10] = var_12;
                    var_23 = (max(var_23, ((max(((0 | (arr_13 [i_8] [i_9] [i_10] [i_10]))), (~var_0))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_24 = (((var_7 ? ((max(1, var_0)) : 0))));
                                arr_44 [2] [i_8] [8] [i_11] [i_12] = (max(8, var_9));
                                arr_45 [i_12] [i_8] [i_10] [i_8] [i_8] = ((var_10 ? -var_1 : (arr_9 [i_12] [i_12] [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((var_13 || ((max(1, -14)))));
    #pragma endscop
}
