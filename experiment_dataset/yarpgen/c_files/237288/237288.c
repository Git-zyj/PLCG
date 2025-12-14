/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_14 &= 55796;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((!(60 && 61114)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1 + 3] [2] [i_3 + 1] [16] = ((~(84 & 24983)));
                                var_15 = ((arr_4 [i_0 + 2]) <= (9742 / var_3));
                                arr_16 [0] [0] [i_0] = 55793;
                                arr_17 [i_0] [i_1] [i_1 + 3] [i_0] [i_3 - 3] [6] = (arr_10 [i_2 + 1] [i_0] [i_2] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_16 = ((max(9740, (!55792))));
                    arr_26 [i_5] [16] [i_7] = (arr_3 [i_5] [i_5] [i_5]);
                    arr_27 [i_7] [i_5] [6] [i_5] = ((((max(((var_0 ? var_10 : var_1)), (((var_5 ? 9569 : 9739)))))) ? var_7 : (((arr_11 [i_5 + 2] [16] [i_6 - 3] [i_7] [i_5 - 1] [i_5 + 1]) ? (arr_11 [18] [i_6] [i_6 - 1] [i_7] [i_5 - 1] [i_6 + 1]) : (arr_11 [i_5] [0] [i_6 - 2] [i_7] [i_5 - 1] [i_6])))));
                    arr_28 [i_5] = var_8;

                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        arr_31 [i_5] [i_6] [i_6 - 2] [i_7] [i_8] = (~84);
                        arr_32 [4] [11] [i_6 - 1] [i_7] [i_8 - 2] = 255;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_38 [6] [i_6 - 3] [i_10] [i_5 + 1] [i_10] [6] [i_9] = min(var_5, (((arr_23 [i_9] [i_6 + 1]) ? ((((arr_30 [i_5 + 2] [i_5 + 2] [i_9]) > var_0))) : (arr_20 [i_5] [i_10]))));
                            var_17 = (max(var_17, 5665851733468261248));
                        }
                        arr_39 [i_9] [i_6] [i_7] [i_5] = (min((!var_1), var_0));
                    }
                }
            }
        }
        var_18 *= (max(((((arr_2 [i_5] [i_5 - 1]) ? 1 : var_9))), 8397722209843257978));
    }
    #pragma endscop
}
