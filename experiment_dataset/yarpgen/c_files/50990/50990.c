/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_13 [i_0 + 2] [i_0 + 2] [i_2] [i_1] |= var_3;
                        arr_14 [i_1] [i_1] [i_2] [i_3] [i_0] [i_2] = arr_0 [i_0] [i_0 + 3];
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            var_21 = (max(var_3, (arr_2 [i_2])));
                            arr_21 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] = (14 ? 0 : 0);
                        }
                        var_22 -= 17364382353166864998;
                        var_23 = var_12;
                        arr_22 [i_0] [i_0] [i_2] [i_4] [i_4 + 1] = ((((~(arr_15 [1] [1] [i_2] [10])))) | (min(((var_1 ? 5 : 18446744073709551601)), (!var_5))));
                    }
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        var_24 = arr_11 [18] [i_0] [i_0] [i_0] [6];
                        var_25 = var_8;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_32 [i_0] [i_0] [i_2] [i_0] [i_7 - 4] [0] = 9223372036854775807;
                                var_26 = 0;
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_37 [i_1] [i_0] [i_0] [i_1] = min(3, 18446744073709551602);
                    var_27 = max(13549901611992601215, 18446744073709551615);
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_42 [3] [3] [i_9] [i_0] [i_10 + 2] = max(((var_3 ? (arr_15 [i_1] [i_10 + 2] [i_9] [i_9]) : (arr_15 [6] [i_10 + 2] [i_9] [22]))), (max((arr_15 [i_0] [i_10 + 2] [i_9] [i_10]), 0)));
                                var_28 = (((((!(arr_10 [i_0] [15] [i_9] [i_10 - 1] [i_11]))))) ? (((var_16 && 5979699091038776709) ? (arr_17 [i_0] [i_0] [i_0 + 1] [i_10 + 2]) : ((var_6 >> (((arr_38 [i_0] [i_1] [i_9] [i_9]) - 16433222012809973042)))))) : (min(6536990526783085848, -var_4)));
                            }
                        }
                    }
                }
                for (int i_12 = 2; i_12 < 22;i_12 += 1)
                {
                    var_29 = (-var_11 ? ((-(arr_44 [i_0 + 2] [i_1] [i_0 + 2]))) : ((((!((min(10114329385542341331, 0))))))));
                    arr_46 [i_0] [i_0] [i_0] [i_1] = min((~var_10), (arr_8 [i_12] [i_0] [i_0] [i_0]));
                }
                var_30 = 12043765314139806499;
                var_31 = ((-(6 != 7)));
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_32 = 18401898522551398070;
                            arr_53 [i_1] [i_0] [i_14] = min(((~(arr_25 [i_0] [i_0] [i_0] [i_0]))), (max((arr_36 [i_0] [3] [i_0]), (((!(arr_28 [i_1] [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    var_33 = var_4;
    var_34 = var_7;
    #pragma endscop
}
