/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (max((max(17512206749195935969, -4500026250758720118)), (((7 ? ((-(arr_0 [i_0]))) : (arr_1 [i_0]))))));
        var_19 -= min((arr_1 [i_0]), (((1784775478 ? 8074 : 3))));
        var_20 += (min(((+(((arr_1 [16]) - -1)))), (((((~(arr_0 [i_0]))) >= var_13)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_4 [i_1] = (min((((213443115 ? 8920138740169993539 : (((arr_2 [i_1]) ? 3 : (arr_0 [i_1])))))), (max(8398703018756969378, (max(32767, 18042124572598038186))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_21 += ((+(max((~126), (arr_8 [i_1] [i_2] [i_4])))));
                        var_22 = 4056237544158121812;
                    }
                }
            }
        }
        var_23 += ((min((arr_14 [i_1] [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_1] [i_1]))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_23 [i_7] [i_7] |= ((12549299055445611432 ? (arr_20 [i_1] [i_1] [i_1] [i_7]) : 15));
                        var_24 = (min(var_24, var_1));
                        var_25 = (((((~(arr_21 [i_1] [i_1] [i_1] [1])))) ? (arr_20 [i_6] [i_5] [0] [13]) : (arr_8 [i_5] [1] [6])));
                        var_26 = var_15;
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_27 = (min(var_27, 65535));
                        var_28 = ((((max((max(6992843061739888493, -68)), (1663110638 / 32779)))) ? 17512206749195935952 : (arr_26 [i_1] [i_5] [i_6] [i_1])));
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_29 *= 26;
                        var_30 = 934537324513615656;
                        var_31 = (min(var_31, (((-(~-8920138740169993539))))));
                    }
                    arr_29 [i_1] [i_1] [i_6] [i_6] = (((15 != ((255 ? 8920138740169993524 : var_14)))));
                }
            }
        }
    }
    var_32 = var_17;
    #pragma endscop
}
