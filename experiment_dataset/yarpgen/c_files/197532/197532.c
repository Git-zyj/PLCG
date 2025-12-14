/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_9, (((!((min(var_2, var_8))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [2] [i_1] [2] [i_2] = 12835;
                    var_17 = ((~(15819704206126130187 * 15819704206126130183)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_14 [i_3] [i_3] = ((-1 + (~11)));
                            var_18 &= (arr_6 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_19 = (103 >> (15527 - 15518));
                            var_20 = (((arr_11 [i_0] [i_2] [i_3]) ? (((arr_5 [i_1] [i_2]) & var_7)) : (arr_16 [i_5] [i_3] [i_3] [i_1] [i_0])));
                        }
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            arr_20 [i_0 - 1] [i_3] [i_2] [i_3] [i_0 - 1] = var_14;
                            var_21 = (((arr_18 [i_0] [i_1] [i_2] [i_3]) < (arr_17 [i_6 + 1] [i_0 - 2] [i_0] [i_0] [i_0])));
                        }
                        var_22 = 22359;
                        var_23 = ((~(arr_13 [i_0 - 2])));
                    }
                }
            }
        }
    }
    var_24 = ((((((max(var_8, -123))) * var_8)) / var_2));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_25 = ((15819704206126130211 ? var_15 : var_15));
                arr_26 [2] [i_7] = ((((!(!var_4))) ? ((((arr_18 [i_7] [i_7] [i_7 + 1] [i_8]) / 166))) : ((var_5 ^ (arr_2 [i_7 + 1])))));
                var_26 = ((4294967284 ? (((arr_19 [i_7] [i_7] [i_7 + 2] [i_8] [11]) << (((arr_0 [i_8] [i_7 + 2]) - 18230)))) : 122));
                var_27 &= 310795896;
            }
        }
    }
    var_28 = (max(var_28, var_13));
    #pragma endscop
}
