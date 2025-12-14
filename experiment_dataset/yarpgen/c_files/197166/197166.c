/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        arr_12 [4] [i_1] [i_2] [9] = (~var_7);
                        var_18 -= (86 && -567153434);
                    }
                    arr_13 [i_2] [i_2] [16] [i_0] = (15252964620841280712 ? 121 : 3110817255917779160);
                    var_19 += ((((((arr_5 [i_0] [13] [i_2]) ? (min(var_1, (arr_4 [i_1]))) : ((min(-88, 4095)))))) ? (((min(4754, 163)))) : (97 % 7549923726207937408)));
                    arr_14 [i_0] [11] = var_7;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_20 = ((var_3 ? var_4 : (arr_2 [i_4 + 2] [i_5 + 3])));
                        var_21 *= ((192 - (arr_3 [i_5 + 2] [i_4 - 1])));
                        arr_28 [i_4] [8] [8] [i_4] |= (arr_21 [i_4]);
                    }
                    var_22 ^= (((((var_17 | (156 > var_5)))) ? var_3 : (~var_4)));
                    arr_29 [i_5] [i_4] [i_5] = 121;
                    var_23 = var_7;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 9;i_9 += 1)
                        {
                            {
                                var_24 = (((var_12 / var_13) / ((64 ? -34 : -5642271586523683999))));
                                arr_34 [1] [i_4] [i_4] [i_5] [10] [i_5] [i_4] = var_4;
                                arr_35 [i_5] [i_5] [i_5 + 4] [i_6] [i_8 + 1] [i_9] = ((-((-8403439971515200064 ? -5041156159657233326 : 67108736))));
                                var_25 *= (~-26489);
                                var_26 -= ((((max(((186 ? -8131678677038982237 : 850983340642619376)), var_10))) && (((min(8403439971515200063, 11199911010469698213))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
