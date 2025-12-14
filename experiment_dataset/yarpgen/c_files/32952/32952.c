/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max((max(var_6, -971558128)), ((max((-20450 - 16021), ((max(var_13, var_8)))))))))));
    var_17 = (-2147483647 - 1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] [i_1] = (((arr_5 [i_0] [i_1]) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_0])));
            arr_7 [i_0] = 255;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_18 *= (arr_14 [i_3] [i_3] [i_2] [i_0]);
                var_19 = (min(var_19, ((((arr_14 [4] [i_2] [i_2] [i_3]) >> (((arr_4 [i_0] [i_3]) - 150)))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            var_20 = ((!-20450) << (var_7 - 2297913944));
                            var_21 = (((-9223372036854775807 - 1) ? (arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_8 [i_5 + 1])));
                            arr_22 [i_0] [i_2] [i_3] [i_4 - 1] [i_5] = 3323409168;
                            arr_23 [i_4] [i_2] [10] [i_4] [i_4] [i_2] = (((arr_18 [i_4 - 1] [i_2] [i_3] [11] [3] [i_5 + 1]) ? (arr_18 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_5 + 1] [i_5 + 1]) : (arr_17 [i_4 - 1])));
                            arr_24 [i_0] [i_2] [i_2] [i_4 - 1] [i_5 + 1] = (((((var_11 + (arr_19 [i_0] [i_0] [i_0] [i_4] [i_3])))) ? (arr_13 [i_3] [i_4 - 1] [i_5 + 1] [i_5 + 1]) : (arr_12 [i_4 - 1] [i_4 - 1] [i_3] [i_5 + 1])));
                        }
                    }
                }
            }
            var_22 = (min(var_22, (((((971558128 ? (arr_8 [i_2]) : (arr_1 [i_0] [i_0]))) + (arr_20 [4] [i_2] [i_2] [i_2] [i_0]))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_23 = 3323409167;
            arr_27 [i_6] [i_6] = ((2611058273 + 0) ? (arr_19 [i_0] [i_6] [i_0] [i_0] [i_6]) : (((var_12 != (arr_20 [i_0] [i_6] [i_6] [i_6] [i_6])))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_36 [5] [i_9] [i_6] [i_6] [6] [5] = (((arr_10 [i_8] [i_0]) ? (arr_10 [i_6] [i_6]) : var_11));
                            arr_37 [i_0] [i_6] [i_7] [i_7] [i_9] [i_8] [2] = ((~(arr_28 [i_6])));
                            arr_38 [8] [i_6] [i_7] = (arr_34 [i_7] [i_7] [1] [i_7] [i_7] [i_7] [10]);
                        }
                    }
                }
            }
        }
        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            var_24 = (min(var_24, ((max((arr_10 [i_0] [i_10]), (max(0, (0 & 0))))))));
            arr_42 [i_10] [i_0] [i_0] = (arr_25 [i_10] [13] [i_10 - 2]);
            arr_43 [i_0] [i_0] = (max((arr_26 [i_10] [i_10]), var_6));
            arr_44 [i_0] [i_0] [i_10 + 1] = (max(((max(var_15, (arr_5 [i_0] [i_10])))), -189));
        }
        var_25 = (min(var_25, ((((((16021 & (arr_3 [i_0] [i_0])))) ? ((max((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_19 [i_0] [2] [6] [i_0] [i_0])))) : (max((max(var_1, (arr_25 [i_0] [i_0] [i_0]))), (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        arr_45 [i_0] = ((!((max(3323409168, 20450)))));
        arr_46 [i_0] [i_0] = (max(((~(((arr_40 [i_0]) ? var_12 : (arr_40 [i_0]))))), (-2147483647 - 1)));
        var_26 ^= ((+(min((arr_3 [i_0] [4]), (max(227, (arr_2 [i_0] [i_0])))))));
    }
    #pragma endscop
}
