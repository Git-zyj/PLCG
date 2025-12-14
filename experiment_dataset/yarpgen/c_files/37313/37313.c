/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_1] = ((!((((arr_4 [i_1] [i_1] [i_2]) << (((max(var_1, (arr_8 [i_0] [i_2]))) - 470685520)))))));
                                arr_13 [i_0] [i_0] [i_2] [8] [12] = (((-966633127 | 1180182974) ? ((2887476178476078110 ? 11702468968439490218 : var_14)) : 10218743536973285723));
                                arr_14 [i_0] [i_0] [i_4 + 2] = (min(var_7, var_5));
                            }
                        }
                    }
                    var_17 = (max(var_17, -966633116));
                    var_18 = (max(((((1683025770 - var_5) >> (var_0 ^ var_0)))), (~3195489086887568935)));
                    arr_15 [i_0] [i_0] [i_2] = ((7071443724705187540 << ((((966633145 ? (max(654579640, (arr_5 [i_0] [i_1] [4]))) : 1163205677)) - 654579622))));

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_18 [7] [i_5] [i_0] [i_1] [3] = var_16;
                        var_19 = (((((arr_4 [i_5] [i_0 + 1] [i_0 + 1]) && 16536187547136916803)) ? (arr_7 [i_0]) : var_2));
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_24 [i_0] [i_0] [12] [i_0] [i_0] [12] |= 7369160756308883998;
                            var_20 = ((var_1 & ((-(arr_9 [i_0 - 1] [i_6 - 1] [i_7 + 1])))));
                        }
                    }
                }
                arr_25 [i_0] [i_1] [0] = var_3;
            }
        }
    }
    var_21 = 10946479544053955195;
    #pragma endscop
}
