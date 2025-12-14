/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((1961551883 / ((var_1 ? 1264474262039486524 : 1)))), ((max((-64 + 64), 5033)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_8 [15] [i_2] [i_0] = ((-((var_5 ? (!var_10) : 176))));
                            arr_9 [i_0] [i_1] [i_2] [13] [i_0] = ((((min(var_2, (~var_1)))) - ((var_5 ? (min(var_9, 63)) : (!4294967295)))));
                            var_15 = (((((((var_9 ? 1136302611 : var_0))) ? 1718973484 : -72))) ? (max((var_0 - -104), -var_7)) : ((1961551882 ? -1444543747 : 3)));
                            arr_10 [i_0] [i_1] [i_0] [i_0] [i_1] [i_3] = (min(((var_0 ? 2056273682 : var_11)), ((0 ? var_8 : 134215680))));
                        }
                    }
                }
                var_16 = ((((244 ? 220 : -64))) ? (min(1, -1961551882)) : (min(439900811, var_3)));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_1] = ((!((((127 ? var_2 : var_12))))));
                            arr_16 [i_0] [i_1] = ((((1 ? 105 : 266338304)) < ((105 ? -127 : var_0))));
                            arr_17 [i_0] [i_1] [i_0] [i_5] = var_7;
                            arr_18 [i_0] [i_0] = (min(1397647654, -49));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_30 [i_6] [i_6] [i_7] [i_7] [i_9] = (!1);
                            arr_31 [i_6] [i_7] [15] [i_8] [i_9] = (((~var_0) / ((var_1 ? ((min(107, var_5))) : ((16383 ? var_0 : 1))))));
                            var_17 = (min(var_17, ((min(-var_3, ((var_1 ? ((min(var_0, var_12))) : (max(1718973484, 2147483647)))))))));
                            arr_32 [11] [i_7] [i_8] [i_9] [i_7] [18] = (max(((((max(1163573911, 0))) ? ((min(164216727, -2006695351))) : var_7)), (-35 & 89)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_18 = ((-(((((var_1 ? var_0 : 238))) ? (min(13673, var_9)) : (((max(14972, 1))))))));
                                arr_43 [i_6] [i_7] [i_6] [i_10] [i_11] [i_10] [i_12] = ((1 ? (min((var_9 < var_4), ((var_0 ? 0 : 8388607)))) : -0));
                            }
                        }
                    }
                }
                var_19 = (((~63) ? ((((var_5 ? var_7 : -2006695351)) - -3766407025)) : (((-63 ? 193 : 32375)))));
            }
        }
    }
    #pragma endscop
}
