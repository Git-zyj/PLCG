/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_18 -= 28;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                var_19 = arr_3 [i_1];
                var_20 = (max(var_20, ((var_5 ? (arr_8 [i_2 + 2] [i_2] [i_2 - 2] [i_2 + 2]) : var_12))));
                var_21 = -10;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_22 = (~var_16);
                            var_23 ^= (arr_9 [i_0 - 1] [i_0 + 2] [i_2 - 1] [i_3]);
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_24 = (((min((((-(arr_14 [i_0] [i_1] [i_1] [16] [i_0] [i_5] [i_1])))), ((var_3 ? var_9 : var_12)))) ^ (((+(((arr_12 [22] [i_1]) / 88)))))));
                var_25 = (max(var_25, ((((min(-1, (arr_3 [4]))))))));
                arr_17 [i_0 + 2] [i_1] [6] [15] = (arr_7 [i_1]);
            }
            arr_18 [i_1] [2] = (((((var_14 < (arr_5 [1] [i_0 - 2] [1])))) | var_17));
            var_26 = var_3;
            var_27 -= (((((arr_11 [i_1] [i_1] [23] [18]) ? (arr_11 [i_1] [i_1] [i_1] [i_0]) : (arr_11 [i_0] [i_0] [i_1] [i_1]))) >= (!-3)));
            arr_19 [0] [20] [6] |= var_11;
        }
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            var_28 = -10;
            var_29 -= ((((((220 | (arr_20 [i_0] [i_0]))))) ? ((201786273 & ((65532 >> (((arr_11 [i_0] [i_0 - 2] [i_6] [i_6 - 2]) - 981954973)))))) : (((arr_7 [i_0 - 2]) ? ((var_7 ? (arr_4 [i_0] [18] [5]) : var_12)) : ((min((arr_13 [i_0 + 1] [0] [8] [i_6] [18] [i_6]), (arr_7 [10]))))))));
            var_30 -= (min((min((min(var_14, (arr_2 [i_0] [18]))), var_5)), ((((arr_3 [18]) ? (arr_3 [18]) : (arr_3 [4]))))));
            var_31 = var_16;
        }
        var_32 = ((30 != ((var_7 ? (arr_15 [22] [22] [i_0] [i_0 + 2]) : 255))));
        var_33 |= (arr_9 [i_0] [i_0] [i_0] [7]);
        var_34 = (min(var_34, (arr_4 [i_0 - 1] [i_0 - 2] [i_0])));
    }
    for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_35 += 12;
                    var_36 &= (min((min(var_1, (arr_29 [i_7]))), (arr_24 [i_7] [0])));
                }
            }
        }
        arr_32 [i_7] [i_7] = 10;
    }
    var_37 = (max(var_37, var_17));
    #pragma endscop
}
