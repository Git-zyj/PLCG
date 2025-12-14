/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 -= (!var_1);
        arr_3 [i_0] [i_0] = (((min(18490, 72247199)) <= ((((!(arr_1 [i_0])))))));
        arr_4 [i_0] = ((~(arr_2 [i_0])));
    }
    var_20 = 1;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                arr_11 [i_2] [i_2] [i_1] = var_0;
                arr_12 [i_2] [i_2] [i_2] = ((+((((((arr_9 [i_2] [i_2]) ? (arr_5 [i_1]) : (arr_8 [23] [23])))) ? (arr_8 [i_2] [i_1]) : (arr_7 [i_1] [i_2])))));
                arr_13 [i_1] &= 11383746905064048130;

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_21 = (((((min(-2087259005339616972, (arr_16 [i_1]))) & (arr_16 [i_4]))) + ((((min(var_8, (arr_18 [i_2] [i_2] [i_2] [i_2] [5])))) ? 241 : (arr_16 [i_1])))));
                        var_22 = 18490;
                        var_23 = (max((((~(!var_12)))), (arr_6 [i_3])));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_24 = ((-95 ? (min((arr_15 [i_5] [i_1]), (arr_16 [i_2]))) : -5594785027569652084));
                        var_25 = (min((((72247199 > (arr_21 [i_5] [i_2] [i_1])))), (arr_22 [1] [i_2] [1] [i_5])));
                        var_26 = (min(var_26, (!94)));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_27 += 20303;
                        var_28 = var_12;
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_29 = ((((253 ? var_16 : (((arr_14 [i_1] [i_2] [i_3] [i_7]) & 1093898476)))) >= ((((!((max(35, var_14)))))))));

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_30 -= ((((max(94, 13952))) >= (min(((var_12 << (95 - 89))), (((62 == (arr_22 [i_2] [i_3] [i_7] [i_8]))))))));
                            var_31 = (((((min(10543, 1295998492021967960)) / (((-126 ? (arr_10 [i_2] [i_3] [i_3]) : var_5))))) * var_17));
                            var_32 = (((arr_18 [i_2] [i_2] [i_3] [i_2] [i_2]) ? (min((arr_18 [i_2] [i_2] [i_3] [i_7] [i_8]), (arr_17 [i_1]))) : (arr_16 [i_3])));
                            arr_31 [i_2] [i_2] [i_7] = (((((((((arr_26 [i_2] [i_3] [i_2]) ? (arr_19 [i_1]) : (arr_20 [i_8] [i_2] [i_1])))) ^ (min(var_3, 10543))))) ? 0 : (min(var_13, (arr_7 [i_3] [i_8])))));
                            arr_32 [i_1] [i_2] [i_3] [7] [i_2] [i_8] = (((min(7, 2087259005339616972)) * (-568811664 ^ 512771628)));
                        }
                    }
                    arr_33 [i_1] [i_2] [i_3] = var_4;
                }
                arr_34 [i_2] = (((((~(max(2958, (arr_20 [i_1] [i_1] [i_2])))))) ? (min((min(var_14, (arr_17 [i_1]))), ((~(arr_19 [i_2]))))) : (((((arr_29 [i_1] [i_1] [i_1] [i_1] [i_1]) | (arr_22 [i_1] [i_1] [i_1] [i_1])))))));
            }
        }
    }
    var_33 = var_11;
    #pragma endscop
}
