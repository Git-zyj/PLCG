/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] [i_3] &= ((((min((!-1073741824), (arr_10 [i_2] [i_2 + 1] [i_3 + 1])))) && (arr_1 [i_4])));
                                var_18 = ((min((arr_7 [i_0] [i_0] [i_0] [i_0]), (min(var_4, (arr_4 [i_1] [i_4]))))) <= (((((arr_3 [i_0] [i_1]) && (arr_0 [i_2 + 1]))))));
                                var_19 = (arr_13 [i_0]);
                                var_20 = ((((min(4192256, 2080374784))) + (((arr_7 [i_4] [i_3 - 3] [i_3] [i_3]) >> (-28822 + 28832)))));
                                var_21 ^= (((((arr_2 [i_4 - 1]) != (((((arr_9 [1] [i_1] [i_2]) < -6511044897190608396)))))) ? -13496 : (arr_2 [i_0])));
                            }
                        }
                    }
                    var_22 = (arr_1 [i_1]);
                    arr_15 [i_0] [i_0] [i_1] [i_2] = (((arr_6 [i_1] [i_2 + 1]) >> (((arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) - 171))));
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_23 = (arr_2 [i_0]);
                                arr_24 [i_0] [i_0] [i_0] [1] [i_0] [0] [i_5] = (((arr_12 [i_6] [i_6] [i_6]) ? var_11 : 6511044897190608395));
                            }
                        }
                    }
                    var_24 = (arr_8 [i_5] [i_0] [i_0] [i_0]);
                }
                var_25 += ((((min((29571 || 35964), (min((arr_17 [i_0]), (arr_6 [i_0] [i_0])))))) ? (min(var_5, (min(var_6, var_12)))) : (((min(1, 1))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_26 &= ((-2 ? 25519 : (-15601 / 2147483641)));
                                var_27 ^= (arr_17 [i_9]);
                                var_28 = (max(var_28, ((min((arr_34 [i_10] [i_11 + 1] [i_8 - 1] [i_9 + 2] [i_10]), (arr_34 [i_8] [i_11 - 3] [i_8 + 1] [i_9 - 2] [i_12]))))));
                                var_29 *= arr_5 [9];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 12;i_14 += 1)
                        {
                            {
                                arr_42 [i_8] [i_10] [i_13] [i_14 + 1] &= (((min(var_11, (arr_16 [13])))));
                                var_30 = (arr_27 [i_13] [i_10]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            {
                                var_31 = (min((((arr_39 [i_8] [i_9 - 3] [i_8] [i_8] [i_8]) & 41)), (arr_39 [i_8 - 1] [i_9 + 2] [i_9 + 2] [i_15 - 1] [i_8])));
                                arr_49 [i_8] [i_8] = min((min(6511044897190608391, -1)), (arr_28 [i_8] [3]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
