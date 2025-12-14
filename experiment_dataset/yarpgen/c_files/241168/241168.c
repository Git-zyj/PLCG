/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = max(((((((var_4 ? var_3 : -26490))) && 7457))), (((arr_1 [i_0]) ? (4127326792209448079 - var_1) : 96)));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = (max(160, ((162 + (arr_9 [i_2] [3])))));
                        var_12 = var_7;
                    }
                }
            }
            var_13 &= var_5;
            var_14 = 0;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_15 = 96;
            arr_13 [i_0] = (min((((min(var_2, var_0)))), ((min(var_7, 0)))));
            arr_14 [i_0] = (arr_9 [i_0] [i_4]);
            var_16 = (min(var_16, (min(((((arr_8 [i_0] [i_0] [i_0] [1]) || var_10))), (max((arr_8 [i_4] [20] [i_4] [10]), var_4))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_19 [i_0] [i_0] = (((arr_9 [i_0] [i_0]) == (arr_9 [i_0] [i_5])));
            var_17 += ((131008 >> (arr_17 [i_0] [i_5])));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            arr_32 [i_0] [16] [i_6] [i_0] [16] [16] [i_9] = ((~((6696208775298266244 ? (arr_18 [i_7 - 1]) : (arr_11 [i_0])))));
                            arr_33 [i_8] [i_8] [i_8] [i_8] [i_0] = ((var_3 ? (arr_29 [i_0] [i_6] [i_7 + 1] [i_8]) : (arr_29 [i_0] [i_6] [i_7 + 1] [i_0])));
                            var_18 = (((~96) ? (0 == var_1) : (((!(arr_0 [i_0]))))));
                            var_19 = ((!((6696208775298266220 < (arr_15 [i_9] [i_8] [1])))));
                            var_20 = (((!-1797081452) ? (arr_11 [i_7]) : ((6696208775298266240 ? var_9 : 1))));
                        }
                    }
                }
                arr_34 [i_0] [i_7] [i_0] [i_0] = ((-1 | 1) ? 65535 : var_10);
                var_21 = ((6696208775298266234 ? var_8 : -11750535298411285371));
                var_22 = (min(var_22, ((((var_9 ? 0 : (arr_5 [i_0] [10])))))));
                var_23 = var_0;
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                var_24 = (!var_8);
                var_25 += ((-var_5 ? (((arr_15 [i_0] [i_6] [i_0]) ^ 11750535298411285371)) : var_9));
                var_26 = ((((~(arr_3 [i_10] [i_6]))) >> (((arr_31 [i_10] [i_10] [i_10] [i_10] [i_0] [i_0] [i_0]) - 63004))));
            }
            arr_38 [i_0] = (((((+(min((arr_5 [i_0] [i_0]), (arr_37 [i_0])))))) ? var_3 : ((7560 ? 1 : 3337))));
            var_27 = (min(var_27, ((max(4727, ((159 ? 3390040805 : (arr_35 [i_0] [i_0] [i_0] [i_6]))))))));
            var_28 = ((((var_3 ? ((16058073867699212354 ? 8 : 11750535298411285375)) : var_11)) < ((((11750535298411285375 == (max(0, 6696208775298266240))))))));
        }
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 23;i_14 += 1)
                {
                    {
                        var_29 = (max((min(6696208775298266244, var_8)), (min(32756, (arr_43 [8] [i_12] [i_14 - 2])))));
                        arr_50 [i_11] [i_13] [i_13] [i_14] [i_14] [i_14] = (max(((-1868803992815775954 ? var_11 : (max(var_6, 11750535298411285376)))), ((var_11 & (min(11750535298411285375, 96))))));
                    }
                }
            }
        }
        var_30 = 11750535298411285375;
    }
    var_31 = ((min(11750535298411285375, var_11)));
    #pragma endscop
}
