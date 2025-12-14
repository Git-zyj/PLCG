/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((var_1 ? 352151373 : ((((~var_10) ? ((-18 ? var_1 : var_2)) : (~0))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 -= (((!1) + ((((((arr_0 [4]) ? 249 : (arr_1 [4] [4])))) % (arr_2 [8])))));
        var_14 = (i_0 % 2 == zero) ? (((~((3942815907 << (((arr_3 [i_0]) - 4743585960309454642))))))) : (((~((3942815907 << (((((arr_3 [i_0]) + 4743585960309454642)) + 656613750474374274)))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((~((352151388 ? 127 : (-2147483647 - 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 -= ((1 ? 2998473842 : (-2147483647 - 1)));
                                var_16 *= ((((1 ? 15 : 251658240)) << (((((0 ? 65535 : 10304))) ? ((((1 && (arr_10 [i_0] [i_0] [i_0] [i_3] [i_4 - 1]))))) : (((arr_1 [i_2] [10]) ? (arr_12 [i_2] [i_2] [i_2] [i_3]) : 13))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_17 = (arr_6 [i_5] [i_2] [6] [i_0]);
                                var_18 = ((((-((60 ? 17448634809814161100 : (arr_3 [i_0]))))) <= ((((arr_16 [i_1 - 1] [i_6 - 1] [i_6 - 1] [i_0] [i_6 + 1]) ? (arr_16 [i_1 - 1] [i_1 - 1] [i_6 + 1] [i_0] [i_6 - 2]) : (arr_16 [i_1 - 1] [i_6] [i_6 - 2] [i_0] [i_6 + 1]))))));
                            }
                        }
                    }
                    var_19 = ((+(((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [5]) : 2147483647))));
                }
            }
        }
        var_20 -= (~7767823256109777993);
        var_21 = (arr_5 [i_0]);
    }
    #pragma endscop
}
