/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 = (((4785439417340768367 > var_19) % -22950));
    var_22 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_23 -= ((((max((arr_2 [i_0 + 2]), (arr_0 [i_0 + 3])))) ? ((1 ? 64419 : (max(var_8, (arr_2 [6]))))) : (arr_2 [i_1 + 2])));
                var_24 &= (1117 || 1);
                arr_5 [i_0 + 3] [i_1 - 1] [i_0] = 48;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_10 [i_0] [i_1 + 1] [4] [i_0] = (-((-(arr_6 [i_0]))));
                    arr_11 [i_0] [7] [i_2] = (min(((min((arr_7 [i_0 + 4] [i_0 - 1] [i_0]), (arr_7 [i_0 + 1] [i_0 + 1] [i_0])))), (((arr_7 [i_0 + 2] [i_0 + 1] [i_0]) ? var_13 : (arr_7 [i_0 + 2] [i_0 + 2] [i_0])))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_25 = ((-(arr_1 [i_0] [i_3])));
                        var_26 = (max((arr_2 [i_2]), (arr_2 [i_1 + 1])));

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            var_27 -= (((!var_14) >= (((arr_4 [i_1 + 1] [i_0 + 2] [4]) & (arr_2 [8])))));
                            arr_16 [i_0] [i_3] [i_2] [i_1 - 1] [i_0] = ((-((~(arr_14 [i_0 + 3] [i_2] [i_2] [i_3] [i_1 - 1] [i_4 - 1] [i_1 - 1])))));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_28 = (max(4, (max((arr_4 [i_1 + 2] [i_0 - 1] [i_0 + 1]), (arr_4 [i_1 + 1] [i_0 + 2] [i_0 + 2])))));
                            var_29 ^= (arr_9 [10] [i_0 + 4]);
                        }
                        arr_21 [i_3] [i_1 + 1] [i_0 + 4] [i_0] = (min((min((min((arr_17 [1] [i_1 + 1] [i_2] [i_0]), 11709671177840982564)), -1)), (((1128 * (((!(arr_20 [i_3] [14] [i_2] [2] [i_0 + 1])))))))));
                        arr_22 [5] [i_0] [0] [i_0] [i_0 - 1] = min((arr_17 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0]), (arr_17 [i_0 + 4] [i_0 - 1] [i_0 - 1] [i_0]));
                    }
                }
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    var_30 = (min(var_30, (((arr_2 [3]) ? (arr_18 [i_0 + 3] [i_6] [i_0 - 1] [i_0 + 3] [8]) : ((-(min((arr_14 [i_6 + 1] [i_6 + 1] [i_1 + 1] [i_0 + 2] [9] [i_0 + 1] [i_0 - 1]), 6402671489629458524))))))));
                    var_31 ^= (max(13665, (max(61440, -8866752142915174033))));
                    var_32 = (min((max((max(var_15, 1)), (arr_7 [i_0 + 4] [1] [i_0]))), ((max((!65532), (min(var_18, (arr_9 [i_0 + 3] [14]))))))));
                }
            }
        }
    }
    #pragma endscop
}
