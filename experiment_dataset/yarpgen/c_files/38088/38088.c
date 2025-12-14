/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = -50;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((((var_7 ? 66 : var_6))) ? (((!(arr_4 [i_0] [i_0])))) : -50));
                    var_18 = ((16447 ^ (~-50)));
                    var_19 = (max(((((((1 - (arr_7 [2] [i_1] [1] [2])))) ? 47 : 146))), ((min((arr_5 [i_1] [23] [i_2] [i_0]), 524287)))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((((((((19103 ? 11280 : 28))) ? -9793 : (((arr_5 [i_2] [0] [15] [1]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : 47))))) ? ((((50 ? -50 : -122)))) : ((25 ? 116 : (((11280 ? 112 : (arr_6 [i_0] [i_0] [i_0] [i_0]))))))));

                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_20 &= (arr_1 [i_3] [22]);
                            var_21 = (max(var_21, (arr_7 [i_3] [i_2] [i_0] [i_0])));
                            arr_15 [1] [i_1] [i_1] [i_0] = ((((1 > (arr_5 [3] [i_1] [i_1] [i_4]))) ? 62 : ((4 ? ((11280 ? 47 : 13023)) : (arr_0 [i_0])))));
                        }
                        var_22 = (7 - -20982);
                    }
                }
            }
        }
        var_23 *= (!-26);
        arr_16 [i_0] [11] = ((~(min((4611685984067649536 >> 1), -4611685984067649549))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_24 &= (arr_4 [i_5] [20]);
        var_25 &= ((((((arr_7 [i_5] [i_5] [i_5] [i_5]) ? 140 : -11281))) ? (((arr_13 [i_5] [1] [i_5] [i_5] [2] [1] [1]) ? var_13 : 255047839)) : (arr_10 [4])));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_26 = (arr_7 [i_6] [i_6] [i_6] [i_6]);
        arr_22 [i_6] = (min(6, (min(((min(var_7, 236))), ((25 ? var_3 : -47))))));
        arr_23 [i_6] [i_6] &= 1;
        arr_24 [i_6] = ((((((-(arr_5 [i_6] [i_6] [i_6] [15]))) - (min((arr_4 [i_6] [i_6]), -4611685984067649549)))) - (arr_13 [i_6] [20] [i_6] [i_6] [i_6] [i_6] [i_6])));
        arr_25 [i_6] [i_6] = (50 == -25);
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        arr_28 [11] &= (arr_7 [i_7] [i_7] [i_7 + 1] [i_7 + 2]);
        var_27 = 65529;
    }
    #pragma endscop
}
