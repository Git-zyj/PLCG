/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((var_11 ? ((var_15 ? 49 : 112)) : var_12)), (((((-112 ? var_12 : 23))) ? -17722 : (~101)))));
    var_19 = (!var_2);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = -1;
                    var_21 = (((max((((-8259114150395302352 / (arr_3 [i_1] [i_2] [i_2])))), (arr_7 [i_1] [i_1 + 1] [i_1]))) == (arr_5 [8] [i_1])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_21 [i_6] [i_6] [i_5] [i_6] = ((+((-var_12 ^ (((arr_17 [i_5] [i_6]) ? 134217728 : (arr_8 [i_0 + 1] [i_0 + 1])))))));
                            arr_22 [i_6] [i_6] = ((-0 ? (((var_4 << ((((2126007651930451217 ? (arr_1 [i_6] [i_5]) : 133)) - 613160834))))) : (((var_11 + -95) ? (arr_19 [i_0] [i_6] [i_4] [i_5] [13]) : 127))));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_22 = var_17;
                            arr_25 [i_7] [i_5] [11] [i_3] [i_0 + 1] [i_0 + 1] [i_0 + 1] = (max((arr_4 [i_0] [i_0] [i_4]), (((!(arr_23 [i_0] [i_3] [i_3] [i_4] [1] [i_7]))))));
                            arr_26 [i_0 + 1] [8] [i_4] [i_5] [i_7] = 1;
                        }
                        var_23 = ((!((!(arr_20 [i_0 + 1] [12] [i_0 + 1] [12] [i_3] [i_5])))));
                        arr_27 [i_0] [i_0 + 1] = var_15;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {
        arr_30 [i_8] = (max(((238 + (-6228451281436687188 <= -1925250720))), (min(var_7, 233231127))));
        arr_31 [i_8] [i_8] = 1958262274;
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        arr_35 [i_9] = (arr_2 [i_9]);
        arr_36 [i_9] = (max(143, (!85)));
        var_24 = (min((min((arr_28 [i_9]), (arr_4 [i_9] [i_9] [i_9]))), (max((arr_14 [i_9] [i_9] [i_9]), (arr_14 [i_9] [6] [i_9])))));
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 7;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 7;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    {
                        var_25 = (max(((((((1126281709 ? -233231127 : -1998975505540319432))) || (((var_10 ? (arr_18 [i_9] [i_9] [i_9] [i_12] [15] [i_11]) : (arr_11 [14] [i_10] [11]))))))), (((arr_38 [i_9] [i_9]) ? (((max(133, 244)))) : (((arr_19 [12] [i_9] [i_11] [i_12] [i_12]) ? 1 : 934072384))))));
                        arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] = (max(((!(((-1073741824 ? 2401584498689667701 : 4036042532))))), ((((max(417347781, 8219208958732546673))) && (!-126)))));
                    }
                }
            }
        }
    }
    var_26 = var_1;
    #pragma endscop
}
