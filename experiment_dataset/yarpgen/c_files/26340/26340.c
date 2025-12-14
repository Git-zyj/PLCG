/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (((((+((217 ? (arr_1 [4] [i_0]) : (arr_1 [0] [0]))))) + (((min(1, 235)))))))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            var_15 ^= ((-((var_2 ? var_9 : var_13))));
            var_16 = (((arr_2 [i_0] [i_0] [i_1]) - (arr_2 [i_0] [i_0] [i_0])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0 + 2] [i_0] [i_0 + 1] [1] = ((!(arr_2 [i_0 + 1] [i_0] [3])));
                            arr_14 [4] [i_0] [4] [i_0] [i_0] = arr_12 [7] [9] [12] [i_3] [i_4 + 1] [i_4];
                        }
                    }
                }
            }
            arr_15 [i_0] = (arr_11 [i_1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0]);
            arr_16 [i_0] [i_1] = (arr_1 [i_0] [i_0]);
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_17 ^= (arr_12 [i_0 + 1] [i_0] [i_0] [12] [i_0 + 2] [i_0]);
            arr_20 [i_0] = var_12;
            arr_21 [i_0] [i_5] = ((((17118105609856762740 ? 1 : var_7))));
        }
        arr_22 [i_0] = ((((+(((arr_17 [5] [i_0 + 1] [i_0 + 1]) ? 3424773644 : 32)))) > (1 - 0)));
        var_18 = (arr_9 [i_0 + 1] [i_0] [i_0]);
        arr_23 [i_0] [i_0 - 1] = ((max((var_7 / var_7), ((1 ? 4294967289 : (arr_10 [i_0]))))));
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_28 [i_7] = ((~(((((arr_6 [i_7] [i_6] [i_6 + 2]) + 2147483647)) >> (var_10 + 416673449)))));
            var_19 -= (arr_4 [7]);
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_37 [i_6] [i_6 + 2] [i_6] [i_6] [i_6 - 1] = (max((arr_8 [i_6] [i_7] [i_9] [i_10] [7]), (max((arr_27 [i_10]), (~12808760783613804919)))));
                            arr_38 [i_8] [i_7] [i_8] [i_9] [3] = (((min(235, 3461653244)) | ((max((arr_33 [i_6 + 2] [i_7] [5] [i_9 - 1] [i_10] [i_7]), var_8)))));
                        }
                    }
                }
            }
            var_20 = (min(var_20, var_5));
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            var_21 = (max(var_21, (min(3154942752, (-11492 > 58881566)))));
            arr_42 [6] [i_11] [i_11] = 1328638463852788880;
            arr_43 [0] [i_11] = (((((-((~(arr_2 [i_11] [i_11] [i_6 + 2])))))) ? 0 : ((max((arr_40 [i_11] [i_11] [i_11]), (((1 ? (arr_10 [i_11]) : 58))))))));
            arr_44 [7] [7] [i_6] = (arr_9 [i_6 - 1] [i_11] [i_6]);
        }
        var_22 &= (var_1 == 1);
    }
    var_23 = (max(var_23, ((min(((((var_3 + 2147483647) << (1 - 1)))), ((((var_8 ? 255 : var_11)) / ((((825594328 != (-32767 - 1))))))))))));
    var_24 = -12584188016530162154;
    #pragma endscop
}
