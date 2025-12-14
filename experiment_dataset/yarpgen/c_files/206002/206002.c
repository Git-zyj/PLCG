/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_2 ? var_0 : var_3));
    var_12 = (min(var_8, var_9));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = (arr_10 [i_0] [i_0] [5] [i_3]);
                            var_13 = max((((arr_3 [i_0 - 3] [i_0]) ? (arr_9 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0]) : var_10)), ((((((arr_10 [i_1] [i_2] [i_1] [i_0]) | (arr_9 [i_0] [17] [i_2] [i_0] [i_0]))) > (((536608768 ? var_10 : (arr_10 [i_2] [1] [i_2] [i_0]))))))));
                        }
                    }
                }
            }
            var_14 = (max(var_14, (((+(((((min((arr_12 [18] [0] [i_0] [i_0] [18]), (arr_8 [i_0] [i_0 - 1] [i_0] [6]))))) * (var_7 / 3828461481504714888))))))));
            arr_15 [i_0] = 0;
            var_15 = arr_1 [i_0];
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_16 += ((~(arr_7 [i_5])));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_7] = (((var_9 ? (arr_11 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 2] [i_6 + 1]) : (arr_11 [i_0 - 1] [i_0] [i_0 - 3] [i_0 - 1] [i_6 - 2]))));
                        var_17 = -3828461481504714888;
                        var_18 = ((max((max((arr_3 [i_0] [6]), 11200536340054390426)), (arr_5 [i_0 - 1] [12] [18]))));
                    }
                }
            }
            arr_24 [1] [0] [i_0] &= ((((((~(arr_11 [i_0 + 2] [14] [14] [i_5] [i_5]))))) ? ((var_3 ? (((arr_18 [i_0 + 3] [i_0 + 3] [i_5]) ? 11200536340054390426 : var_9)) : (arr_19 [i_0 + 1] [i_0]))) : ((((((min(0, (arr_5 [i_0] [i_5] [18])))) > (arr_1 [1])))))));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_19 = (min(var_19, ((((arr_28 [i_5] [12] [i_8 - 1] [i_8 - 1]) ? ((((arr_12 [i_0 - 2] [i_0 - 2] [i_0] [i_0 + 3] [i_9]) ? (arr_8 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8]) : var_1))) : (arr_28 [i_5] [17] [13] [i_8 + 1]))))));
                        arr_31 [i_0 + 1] [i_0] [i_8 + 1] [i_8 + 1] [i_9] = (((arr_25 [i_9]) ? (arr_9 [i_0] [9] [9] [i_8 + 1] [i_0]) : (arr_13 [i_0 + 2] [10] [i_8] [10] [i_8] [i_0 - 1])));
                    }
                }
            }
            var_20 = (((~var_8) ? (((min((arr_0 [i_0] [i_5]), (arr_11 [i_0] [i_0] [i_0] [i_0 - 1] [i_5]))))) : (((((var_3 ? var_0 : (arr_12 [i_5] [i_5] [16] [1] [i_0])))) ? ((min(var_6, (arr_19 [i_0] [i_5])))) : var_6))));
        }
        arr_32 [i_0] = var_5;
        arr_33 [i_0] = (((((arr_9 [i_0 + 3] [i_0 + 3] [19] [1] [i_0]) > (arr_9 [i_0 + 3] [i_0] [i_0] [15] [i_0]))) ? 255 : (((arr_9 [i_0 + 3] [i_0] [i_0] [i_0 + 3] [i_0]) | (arr_9 [i_0 + 3] [i_0] [i_0] [i_0] [i_0])))));
    }
    for (int i_10 = 3; i_10 < 9;i_10 += 1)
    {
        var_21 = (arr_7 [i_10 - 1]);
        arr_36 [i_10] = ((((((arr_3 [i_10] [i_10]) ? (arr_5 [i_10 + 1] [i_10 + 1] [i_10]) : -8765686440958414794))) ? (((((arr_3 [i_10] [i_10]) > (arr_3 [i_10] [i_10]))))) : (arr_5 [i_10 - 1] [i_10 - 1] [i_10])));
        arr_37 [i_10] = ((((((var_1 ? 3828461481504714888 : var_4))) ? (1932779652 | 0) : ((((arr_21 [i_10] [i_10]) | 3577203384))))));
    }
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        arr_41 [1] = (arr_13 [6] [i_11] [10] [10] [10] [i_11]);
        arr_42 [i_11] = 45;
    }
    var_22 = (min(var_22, (((var_10 ? ((((var_3 > (((max(var_5, var_6)))))))) : (((min(var_7, var_7)) | (var_10 | 30875))))))));
    var_23 ^= var_0;
    #pragma endscop
}
