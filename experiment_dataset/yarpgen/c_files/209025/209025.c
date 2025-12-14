/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [20] [i_1] = arr_1 [i_0] [i_0];
                var_13 = ((((max(var_7, (arr_3 [i_0])))) ? ((max((43 >= 43), (arr_1 [i_1 - 1] [i_1 - 1])))) : var_12));
            }
        }
    }
    var_14 = ((var_9 ? ((max(76, 148))) : 225));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                {
                    var_15 &= ((-(~120)));

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_16 = var_10;
                            arr_20 [i_2] [i_2] [i_2] [i_3] [i_2] [2] = ((((((min(11, (arr_10 [i_3] [i_4] [i_3])))) ? (arr_5 [i_2] [i_2]) : 23)) ^ (((!((max(241, (arr_8 [i_2] [i_2] [i_2])))))))));
                        }
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            var_17 += 84;
                            var_18 &= 234;
                        }
                        arr_23 [i_3] [i_5] = (min(var_5, ((205 ? (arr_21 [i_2] [i_2] [i_2] [i_2]) : 32))));
                        arr_24 [i_2] [i_2] [17] [i_3] = ((((((arr_13 [i_4 - 2] [i_4 + 1]) ? (arr_13 [i_4 - 2] [i_4 + 2]) : (arr_13 [i_4 + 1] [i_4 + 2])))) ? ((-(arr_13 [i_4 + 1] [i_4 - 1]))) : ((min(var_6, (arr_13 [i_4 - 1] [i_4 + 2]))))));
                        arr_25 [i_2] [i_2] [i_3] [i_4 - 1] [i_5] [i_2] = var_6;
                        var_19 = (~18);
                    }
                    var_20 = (var_5 / 14);

                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        arr_29 [i_2] [i_2] [i_4] [i_3] = ((((((~217) & (((arr_16 [i_3] [i_3] [i_3] [i_3] [i_8]) ? var_6 : 70))))) ? (((((5 ? 241 : var_9))) ? 190 : (((arr_18 [23] [23] [i_4] [i_4] [i_4] [i_4]) ? 0 : 132)))) : (((arr_22 [i_8 + 1] [i_8] [i_8] [8] [1] [i_8 - 2] [i_8 + 2]) ? (!var_7) : ((19 ? (arr_8 [i_8] [i_2] [i_2]) : 30))))));

                        for (int i_9 = 3; i_9 < 23;i_9 += 1)
                        {
                            arr_33 [i_2] [i_3] [i_3] [14] [i_9] = ((!(((~((min(var_5, 0))))))));
                            arr_34 [i_3] [i_3] [i_3] [i_3] [i_9 - 3] = ((var_10 ? ((min((min(var_11, 34)), (max(var_4, (arr_15 [i_4] [11] [i_2] [i_3] [0] [11])))))) : ((((min(108, (arr_26 [i_3])))) + var_5))));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            arr_39 [i_2] [i_3] [i_2] [i_3] [i_3] = var_10;
                            var_21 |= min((min((arr_30 [i_8 - 3] [i_8 - 3] [i_8 + 1] [i_8 - 3] [i_2]), 172)), 96);
                        }
                        var_22 += (min((arr_13 [i_3] [1]), (min(((min(240, 44))), (((arr_16 [i_3] [i_3] [i_2] [i_3] [i_3]) * 254))))));
                        var_23 = ((!((!((min(var_12, var_8)))))));
                    }
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        arr_43 [i_2] [i_3] [i_2] [i_2] = ((((((156 * 83) ? -var_11 : 41))) ? (((!((min(99, var_11)))))) : (((arr_11 [i_3] [i_2] [i_4 - 2]) + var_6))));
                        arr_44 [i_3] [i_3] [i_3] [15] = ((!((min(175, var_0)))));
                    }
                    for (int i_12 = 3; i_12 < 22;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            var_24 = ((!((min(13, (((var_5 != (arr_10 [i_2] [i_2] [i_3])))))))));
                            var_25 = 242;
                        }
                        for (int i_14 = 1; i_14 < 23;i_14 += 1)
                        {
                            var_26 = (max(var_26, (min((!75), 231))));
                            arr_53 [i_2] [i_2] [i_2] [i_2] [i_3] = ((+((min((arr_11 [i_3] [i_12 - 2] [i_14 - 1]), var_11)))));
                        }
                        var_27 *= ((((!(arr_8 [i_4] [i_4 - 1] [i_4]))) ? 122 : (((min((arr_45 [i_2] [i_4] [i_3] [2] [20] [18]), 156))))));
                        var_28 = ((15 * ((max(227, 240)))));
                        arr_54 [i_3] [i_3] [i_3] [i_2] [i_2] = (((((137 ? var_0 : (arr_30 [i_2] [23] [i_12] [i_12 - 2] [i_3])))) ? (((arr_30 [i_12] [i_12] [i_12] [i_12 + 2] [i_3]) ? 128 : (arr_30 [i_12] [i_12] [i_12] [i_12 + 2] [i_3]))) : (((arr_30 [i_2] [i_2] [i_4] [i_12 - 1] [i_3]) ? (arr_30 [i_12] [i_12] [i_12 + 2] [i_12 - 3] [i_3]) : (arr_30 [i_4] [i_4] [i_4] [i_12 - 2] [i_3])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
