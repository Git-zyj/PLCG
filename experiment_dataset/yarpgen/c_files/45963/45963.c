/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_9 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] = min(((((min(151, -7))) ? ((max(52018, (arr_1 [i_1])))) : (arr_2 [i_0]))), ((var_1 << (((arr_0 [i_2]) - 1785159600)))));
                        arr_10 [i_0] [i_3] &= -2207328071803694737;

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] = ((((1923493005 ? (arr_4 [i_1]) : 3056687568)) + (arr_2 [i_4])));
                            arr_14 [i_2] [i_1] [i_2] [i_3] [i_4] = ((((81 ? 66 : (((arr_0 [i_1]) ? var_10 : var_1)))) & -81));
                        }
                        arr_15 [i_0] [11] [i_3] [i_2] [8] = 36255;
                    }
                    arr_16 [i_0] [i_2] [i_2] = (((((min(-3157642, 0))) ? 24408 : var_9)));
                    arr_17 [i_2] [i_1] [i_0] [i_2] = (max((min(-1390227450, (arr_8 [i_0] [i_1] [i_0] [i_1]))), (!var_1)));
                }
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    arr_22 [i_0] [i_1] [i_1] [i_5] = ((((((((arr_19 [i_0] [i_1] [i_5]) * 60033))) ? (((arr_6 [i_5] [i_5] [i_5] [i_5]) ? (arr_12 [i_1] [12] [i_1] [i_1] [i_1]) : -404426227339379373)) : 20491)) >> (1619728860 - 1619728843)));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_27 [i_5] [i_6] [i_5] [i_5] [i_5] = (((~(arr_21 [i_7] [i_7] [i_6 - 1] [i_5 + 1]))));
                                arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] = (min((max((var_3 != 64), (max(-4, (arr_23 [i_5 - 2] [i_5 - 2]))))), ((((min(var_6, (arr_3 [i_7] [i_6] [i_1])))) | (max(32768, (arr_26 [6] [i_0] [i_7 - 1] [i_7] [i_6] [i_5] [i_0])))))));
                                arr_29 [i_0] [i_7] [10] [i_6 - 1] [i_7 - 1] = (max((((-9223372036854775807 - 1) / 22308)), ((min(750429488, 20727)))));
                            }
                        }
                    }
                    arr_30 [i_5] [i_5 - 3] [i_1] [i_5] = ((((min(var_7, var_2)))) ? (((((max(33928, -3356752416898971356)) > 1390227447)))) : (max((~var_1), (((65523 * (arr_6 [i_1] [i_1] [i_5] [i_0])))))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_34 [i_8] [i_1] [i_1] [i_8] = ((27517 ? 709468744 : (((var_3 + 2147483647) << (((arr_0 [10]) - 1785159617))))));
                    arr_35 [i_8] [i_8] [i_8] = (((arr_20 [i_0] [i_0] [i_0] [i_8]) && 0));
                }
                arr_36 [i_1] = (arr_6 [i_1] [1] [i_0] [i_0]);
            }
        }
    }
    var_12 = var_4;
    var_13 = max(2005188019, var_1);
    var_14 = (var_9 ? (min((max(3758215670, 3750767139)), (min(var_2, var_1)))) : ((var_10 ? ((81 ? 57045 : 2622061641)) : (var_6 ^ var_0))));
    #pragma endscop
}
