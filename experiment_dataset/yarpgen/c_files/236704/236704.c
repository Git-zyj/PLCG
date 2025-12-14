/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((-(~-var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_17 |= (~var_8);

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_0] [14] [i_0] [i_1] = (((((var_10 ? var_7 : -856280218))) ? var_1 : ((~(arr_5 [i_3])))));
                        arr_12 [i_0] [i_1] [i_2] [i_1] = ((-var_11 ? (((var_0 ? (arr_5 [i_0]) : (arr_9 [i_0] [i_2])))) : (((arr_0 [i_2 + 1]) ? var_9 : var_15))));
                        arr_13 [i_0] [i_0] [i_1 + 2] [i_2 + 1] [10] [1] |= (((((2780060456 ? var_12 : (arr_10 [16] [16])))) ? ((~(arr_4 [14] [i_1] [i_1]))) : -475606983));
                        arr_14 [i_1] [i_1] [i_2] [i_3] [i_1 - 1] [i_3] = (((((475606989 ? 1 : var_7))) ? ((var_1 ? var_7 : var_14)) : (((-19869 ? var_1 : var_6)))));
                    }
                }
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    var_18 = (min(var_18, (((((((((63 ? -475606967 : 475606967))) ? ((1180736608 ? (arr_4 [i_0] [8] [8]) : var_14)) : ((~(arr_0 [i_1])))))) ? (((~(!511)))) : (((!-11767) ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : (((var_13 ? var_6 : (arr_4 [i_0] [i_0] [i_0])))))))))));
                    var_19 = ((!(!475607008)));
                    var_20 = ((+(((!(((799700967 ? (arr_1 [3] [6]) : (arr_15 [i_0] [i_1] [i_1] [i_0])))))))));
                }
                var_21 = (~((((!(arr_6 [i_0] [i_1]))) ? var_13 : (!var_15))));
                arr_17 [i_0] |= ((+((((((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : 1))) ? -513 : -var_3))));
                var_22 = ((7340230372347816207 ? ((((!((!(arr_15 [i_0] [i_1] [i_0] [7]))))))) : ((475607026 ? 475606982 : 2333474050))));
            }
        }
    }
    #pragma endscop
}
