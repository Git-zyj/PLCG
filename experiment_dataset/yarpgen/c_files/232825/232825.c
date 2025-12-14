/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_9 ? 0 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (-((-1 ? var_17 : (min((arr_2 [i_0] [i_1]), 1)))));

                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = 0;
                                var_21 = var_17;
                            }
                        }
                    }
                    arr_13 [i_2] [i_2] [i_2] [i_0] &= (max(-309142016, (((var_3 & 372133278) ^ ((1 << (((arr_10 [i_2] [i_0 + 1] [i_1 + 2] [11] [i_0 + 1] [i_0 + 1]) + 1188138605))))))));
                    var_22 = (max(var_22, -5135717455877814769));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_23 = -1003517462;
                    var_24 = (arr_6 [i_0] [i_1 - 1] [i_5]);
                    var_25 = (18446744073709551615 <= var_8);
                    var_26 = (((max(-3148966534606534488, 0))) >= -1041370653);
                    arr_17 [i_0 - 1] [i_0] = 18446744073709551588;
                }
                var_27 = (min(var_27, var_10));
                arr_18 [i_0] = ((var_14 >> ((((-6532884169461444350 ? var_12 : var_3)) + 4411928446413156918))));
                var_28 *= (!(((-var_4 ? -5135717455877814769 : (((1 ? 0 : 1)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 4; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            {
                var_29 = var_4;
                var_30 = (max(var_9, ((max((var_4 ^ -1158171303), -1140564948)))));
            }
        }
    }
    var_31 = -2293988826628545424;
    var_32 = var_15;
    #pragma endscop
}
