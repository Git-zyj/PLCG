/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 &= 0;
    var_15 = ((((4032 * (0 / 1))) == 1));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = (((min(((~(arr_2 [i_1] [5]))), (((arr_5 [i_0]) ^ 4294967295)))) & (((((var_7 ? 4032 : var_6)))))));
            var_17 = ((max(var_3, (arr_3 [i_0] [i_0]))));
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 4; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] = (max((min((arr_9 [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0]))), (max((~var_6), (arr_7 [i_3 + 1] [i_3] [5])))));
                            var_18 = (((((-(arr_17 [i_2 + 1] [0] [i_3] [i_4] [i_4])))) ? (var_6 & -98) : (((!(arr_11 [i_3 + 1] [i_3 - 1] [i_2 - 1] [i_2]))))));
                        }
                    }
                }
            }
            arr_19 [i_0] = ((var_4 == (((arr_13 [i_0] [i_0] [i_0]) ? -98 : (arr_13 [i_0] [i_0] [i_0])))));
            var_19 *= ((~((((max((arr_2 [i_2] [i_0]), 1)) >= ((max(var_11, var_6))))))));
        }
        var_20 = (min(((max((arr_1 [i_0]), (arr_1 [i_0])))), (max((max(4032, 66)), (min(var_6, var_5))))));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_21 = (((arr_20 [i_6] [5]) ? ((min((arr_21 [i_6] [i_6]), (arr_21 [i_6] [i_6])))) : (max((((arr_22 [i_6]) ? var_4 : var_3)), var_2))));
        var_22 = (((((arr_22 [i_6]) ? var_3 : var_7)) == ((((((arr_23 [i_6]) - (arr_23 [i_6]))) == var_6)))));
        var_23 = 0;
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_24 = ((-1061151657 ? ((((arr_27 [i_9] [1] [i_7]) ? -var_10 : var_12))) : (((((~(arr_25 [i_9])))) ? ((~(arr_25 [i_7]))) : (arr_24 [i_8] [i_7])))));
                    var_25 = ((((((1 ? (arr_25 [1]) : var_11)) == (arr_24 [i_9] [i_8]))) || (arr_27 [i_7] [i_7] [i_7])));
                    var_26 = (((max((((arr_33 [i_8] [i_8]) ? var_5 : var_7)), (((arr_26 [i_7]) ? 1 : 28525))))) ? 1 : ((max((arr_31 [i_7] [i_7] [i_8] [i_9]), (arr_24 [12] [12])))));
                    var_27 = (arr_26 [i_7]);
                }
            }
        }
        var_28 = (arr_33 [i_7] [i_7]);
    }
    var_29 = var_12;
    #pragma endscop
}
