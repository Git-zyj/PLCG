/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(13671794501268602408, var_0));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0 - 1]) || ((((arr_1 [i_0]) ? var_3 : var_7)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = var_8;
                    arr_10 [i_0] [i_1] [i_1] [i_0] &= (1 / 3299686709);
                    var_14 = 1;
                }
            }
        }
        var_15 = var_7;
        var_16 = ((~((3299686709 ? 1636648873 : 1))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_17 = (((((+((((arr_12 [i_3] [i_3]) > 9859854473903385478)))))) ? ((((arr_12 [i_3] [i_3]) || (((arr_11 [i_3] [i_3]) != (arr_11 [16] [16])))))) : (((1 && (!var_4))))));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_15 [i_3] [i_3] [19] = ((((((((arr_11 [1] [i_4]) & 3156356862155482956)) << ((max(0, (arr_11 [i_3] [i_3]))))))) || (((((min((arr_14 [i_3] [i_3] [i_3]), 3299686709))) ? (arr_13 [23]) : 23217)))));
            arr_16 [4] [i_3] |= (((19 | 236) ? -var_7 : ((18446744073709551615 ? (!var_0) : (((arr_13 [i_3]) ? 1 : var_4))))));
            var_18 = ((((min(var_0, (arr_11 [i_3] [i_4])))) >> ((((-7980 ? var_8 : 15290387211554068637)) & (((89 ? (arr_11 [i_4] [1]) : (arr_11 [i_3] [10]))))))));
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            arr_20 [i_5] [i_5] = 0;
            var_19 &= (((((((var_3 ? (arr_19 [i_5 + 1] [i_5 + 1] [8]) : (arr_11 [i_3] [i_5 + 1])))))) / var_7));
            var_20 = (max(var_20, (((132 ? ((((233 && 1) ? ((1121448892858490500 ? -1 : 4535)) : var_2))) : (min(var_1, (arr_12 [i_5 + 1] [i_5]))))))));
        }
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        var_21 = var_2;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    var_22 = (((((-5621883291166929397 ? (arr_25 [i_7] [i_6] [i_8 - 1]) : (((arr_2 [i_6]) / (arr_24 [i_6])))))) ? ((((((arr_9 [i_7] [11] [16] [i_7]) * var_9))))) : (min((arr_28 [i_6 + 1] [i_7]), 18446744073709551615))));
                    arr_30 [0] [i_6] = ((((min((((!(arr_28 [i_6] [i_6])))), var_10))) || ((!(arr_26 [i_6] [i_6] [i_6 + 1] [i_6])))));
                }
            }
        }
        var_23 = (arr_6 [8]);
        arr_31 [6] &= var_4;
    }
    var_24 = 1636648873;
    #pragma endscop
}
