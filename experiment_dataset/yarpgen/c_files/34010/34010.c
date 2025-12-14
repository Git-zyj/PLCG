/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = ((!(~158)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_12 = (+((var_9 ? (arr_6 [i_0] [i_1]) : (arr_8 [8] [0]))));
            arr_9 [i_0] [i_0] &= (((arr_8 [i_0] [i_0]) < var_3));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_13 = (max(var_13, (((-(arr_10 [18] [i_0] [i_2]))))));
            var_14 = (min((!6925), (arr_11 [i_0] [i_2] [17])));
            arr_13 [i_0] [i_2] [i_0] = (((((((((arr_6 [i_0] [12]) ? (arr_10 [i_0] [i_2] [1]) : -74))) ? ((((arr_8 [i_0] [i_2]) ? (arr_11 [i_0] [8] [i_2]) : (arr_8 [i_0] [5])))) : (((arr_12 [i_0] [i_0] [i_0]) ? 0 : 28))))) || var_6));
            arr_14 [i_0] [i_2] = (max((((((var_1 ? (arr_6 [1] [0]) : (arr_8 [i_0] [i_0])))) / ((0 ? (arr_1 [5]) : (arr_6 [i_0] [i_0]))))), (min((((arr_10 [i_0] [i_2] [i_2]) ? var_0 : (arr_1 [i_2]))), 9223372036854775807))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_15 *= 1;
            var_16 *= 1688284495967825438;
        }
        arr_17 [i_0] = (max(((min((arr_2 [i_0]), (arr_2 [i_0])))), (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_30 [i_4] [i_5] [i_6] [1] [15] [18] = (min(1336773826519078299, (min(((-(arr_25 [5] [i_5]))), 50223))));
                        var_17 -= ((!(((arr_22 [i_5]) <= (min(-119, (arr_19 [i_4] [i_4])))))));
                        var_18 |= (((((((max(var_4, (arr_27 [i_4] [i_5] [i_6] [i_7])))) ? (((min(-119, 16714)))) : 13536623806277209554))) ? (min((arr_26 [i_6 - 4] [19] [i_7] [i_7]), (arr_26 [i_6 + 1] [i_5] [1] [8]))) : (((-(arr_27 [20] [i_5] [20] [i_7]))))));
                        arr_31 [i_4] [i_4] [i_4] [i_4] = ((!(((-110 ? (min((arr_28 [i_4] [i_5] [i_6 - 1] [i_6] [i_7] [i_7]), 48838)) : 1)))));
                    }
                }
            }
            var_19 = ((-1 ? 0 : (arr_29 [1] [i_5])));
        }
        var_20 = (max((((3166798480 ? var_6 : (arr_24 [i_4] [2])))), (min((arr_29 [18] [i_4]), var_7))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            {
                var_21 = (arr_34 [i_8] [i_9] [i_9]);
                arr_37 [i_8] |= (((!576460752303423487) ? (((+(((arr_29 [i_8] [i_9]) ? (arr_21 [i_8] [i_8] [i_8]) : var_1))))) : (max((((arr_24 [i_8] [i_9]) ? 1 : (arr_18 [10]))), ((min((arr_36 [i_8] [3] [i_9]), 52758)))))));
            }
        }
    }
    #pragma endscop
}
