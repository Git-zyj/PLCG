/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] = (arr_9 [i_4] [i_4 - 1] [i_4 - 1] [i_2]);
                                arr_16 [i_0] [i_1] [1] [i_1] [i_0] = 11550260168168035701;
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_4 - 2] = var_2;
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_2] = ((+((((arr_14 [i_2] [i_3]) || ((max(var_12, var_11))))))));
                                arr_19 [i_0] [i_1] [i_1] [i_1] [i_4] [i_0] [i_3] = (max((var_0 < 4457453394046956386), ((((arr_10 [i_4 - 2]) && (((-2879462076141718820 ? var_4 : var_9))))))));
                            }
                        }
                    }
                    arr_20 [i_0] [i_2] [i_2] |= (arr_14 [i_0] [i_2]);
                    arr_21 [i_0] [i_0] [i_2] = min((min(var_6, (min(var_4, (arr_3 [i_0]))))), var_7);
                    arr_22 [i_2] [10] |= (min(((((arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) >= ((3847600599 ? 9854639991309086058 : 8191))))), ((min(var_10, 8200)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_27 [i_2] [i_2] [i_0] = (max(4079381126, (arr_8 [i_2] [i_6])));
                                arr_28 [i_1] [i_1] [i_0] = ((!((min(13989290679662595230, (arr_4 [i_0] [i_2] [i_5]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((-5483 ? 990900640 : ((((!(13989290679662595229 < -2879462076141718830)))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                arr_43 [i_7] [8] [i_9] [i_9] = 1;
                                arr_44 [i_7] [i_8] [i_9] [i_10] [i_11] = (-7157649970797202218 - var_6);
                                arr_45 [i_7] [i_8] [i_9] [i_10] [i_11] = ((-(min((-32767 - 1), (min((arr_36 [i_7] [i_9] [i_10] [i_9]), (arr_37 [i_8] [i_8])))))));
                                arr_46 [i_10] [i_10] [i_10] [i_10] [12] = (var_1 <= var_9);
                                arr_47 [i_7] [i_8] [i_11] [6] [15] [i_9] = ((((((-1066699622 || 16769024) - (!1839691041)))) ? var_11 : ((6896483905541515914 ? (min((arr_30 [18]), var_9)) : var_2))));
                            }
                        }
                    }
                }
                arr_48 [i_8] [i_7] [i_7] = (((((max((arr_40 [i_7] [i_7] [i_7]), 2455276255)) < var_9)) ? var_2 : (((var_6 ? var_4 : (arr_29 [i_8]))))));
                arr_49 [i_7] [i_7] = ((((((195 << (arr_34 [19] [i_7] [i_7] [i_7]))) ? 8823119089510239572 : 80288713))));
                arr_50 [i_8] [i_8] [i_8] = var_5;
            }
        }
    }
    #pragma endscop
}
