/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((var_14 ? (~var_10) : (min(-114, -2147483627)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((max((arr_0 [i_0]), (((var_3 >> (-26 + 43)))))) != (((-28 - var_13) ? (arr_0 [i_0]) : ((148 ? var_7 : var_18))))));
                arr_7 [i_0] = (max(var_19, ((((!126) >= (-312416215 >= 148))))));
                var_21 *= ((var_0 <= (((((23 ? 255 : 1))) ? (((15 ? (arr_5 [i_0] [i_0]) : 4))) : (((arr_4 [i_1 + 2] [i_0]) ? 8615074304511125638 : -96))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_22 = (var_14 * var_14);
                                var_23 = -2123354493;
                            }
                        }
                    }
                }
                arr_22 [i_3 + 1] [i_2] [i_2] = (min((((arr_16 [i_3 - 3] [i_3] [i_2] [i_2 - 2]) ? (arr_16 [i_3 - 3] [i_2] [i_2 + 3] [i_2 + 3]) : (arr_16 [i_2] [i_2] [i_2 - 1] [0]))), (min(312416197, (arr_16 [i_2 + 1] [i_3 - 2] [i_2 + 1] [i_3 + 1])))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_24 = -117;
                            var_25 *= (min(((-(~var_9))), (max(((var_9 ? var_12 : var_19)), var_3))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (((min((var_7 <= var_5), (min(var_9, var_16)))) * (((var_10 >= ((13151161261687781940 ? var_15 : var_9)))))));
    #pragma endscop
}
