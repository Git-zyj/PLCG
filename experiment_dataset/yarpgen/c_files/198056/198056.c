/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 += ((((((var_8 & (arr_1 [i_0] [10]))) * (arr_1 [i_0] [2]))) >= var_11));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, (arr_7 [i_3] [i_3] [8] [i_3])));
                        var_14 &= ((var_6 % (((arr_1 [i_2] [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_1 [i_3] [i_3])))));
                        var_15 = (arr_6 [i_0]);
                    }
                }
            }
        }
        var_16 = ((((((((-(arr_5 [i_0 + 3] [i_0 + 2])))) ? -var_0 : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((arr_4 [i_0] [i_0]) * (var_5 >= var_0))) : var_1));
        var_17 = ((((var_0 != (arr_3 [i_0 - 1] [i_0]))) ? (arr_3 [i_0 + 1] [i_0]) : (((arr_3 [i_0 + 2] [i_0]) ? var_10 : (arr_3 [i_0 - 1] [i_0])))));
        var_18 = (i_0 % 2 == 0) ? ((max((~var_11), (min((arr_9 [9] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]), (((var_9 + 9223372036854775807) >> (((arr_1 [i_0] [i_0]) - 16843323686429558437))))))))) : ((max((~var_11), (min((arr_9 [9] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]), (((var_9 + 9223372036854775807) >> (((((arr_1 [i_0] [i_0]) - 16843323686429558437)) - 96274286044516785)))))))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_19 -= (((((arr_11 [i_4]) ? (arr_11 [i_4]) : (arr_11 [i_5]))) >= (arr_10 [i_5])));
            var_20 = (max(var_20, ((((max((arr_11 [i_4]), (arr_11 [i_4]))) / (((18631 + -8579190388400595166) - (var_6 - var_3))))))));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_21 &= 247;
            var_22 = (min(var_22, (!var_9)));
        }
        var_23 = (min(var_23, ((max(24154, 64927)))));
        var_24 = ((~(arr_14 [i_4])));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_25 += ((~(((((~(arr_17 [19])))) * ((var_11 | (arr_13 [i_7] [i_7] [i_7])))))));
        var_26 = var_9;
    }
    var_27 += ((var_10 ? (min(var_9, (((64925 ? -1626863921 : 5923))))) : var_2));
    var_28 = var_1;
    #pragma endscop
}
