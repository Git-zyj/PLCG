/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((min((var_15 * 5), (-58972 + var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [17] [i_1] = 12153545132737572331;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 ^= (max(((8272904614875421255 ? -12 : (arr_2 [0] [i_1 + 1]))), ((min((arr_2 [i_3 - 3] [i_0]), (arr_2 [i_3 - 1] [i_2]))))));
                            var_20 = (-(!var_13));
                            var_21 = (max(var_21, (arr_2 [i_0] [15])));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_17 [i_1] [i_1] [3] [i_5] [3] = (((((1928232828 ? 10280 : -31963)) >= 1)));
                                arr_18 [i_0] [15] [1] [i_1] = (((9 ? (arr_15 [i_0] [i_1] [i_4] [i_5]) : (((104 > (arr_12 [i_1] [i_1] [14] [i_5] [11])))))) / -1258746171);
                            }
                        }
                    }

                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        var_22 = (var_16 >= var_11);
                        var_23 = (max(var_23, (((((min(var_12, (arr_1 [i_7 + 3] [i_1 - 1])))) ? (arr_1 [i_7 - 1] [i_1 + 1]) : (((~(arr_14 [i_7] [i_7] [i_4] [i_7 + 2] [i_4] [i_7] [i_7])))))))));
                        var_24 *= (90 < 1);
                    }
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    arr_24 [i_1] [9] [i_1 + 1] = (-((max((arr_20 [i_0] [i_0] [i_1 - 1] [13] [i_1]), var_3))));
                    var_25 = (max(var_25, ((((((((var_13 ? (arr_2 [i_0] [1]) : (arr_22 [i_0])))) ? -6257198111513438647 : ((((var_17 || (arr_8 [i_0] [i_0] [i_0] [i_1] [i_8]))))))) + ((((var_2 >= -6) % -1))))))));
                    arr_25 [i_8] |= (((((((var_0 | (arr_3 [i_0] [i_0])))) / (max(-112, (arr_4 [i_0] [i_0] [i_8]))))) == (((max((arr_19 [i_0] [i_8] [i_0] [i_0] [i_0]), var_5))))));
                    var_26 = ((((((((var_17 | (arr_11 [17] [i_1] [4] [i_8])))) ? (((127 ? -19185 : var_9))) : 3421603253))) ? ((-(~var_1))) : (((max(18446744073709551605, 241))))));
                }
            }
        }
    }
    var_27 = (var_5 ? (~var_9) : (((-14842 + var_16) ? var_0 : var_5)));
    #pragma endscop
}
