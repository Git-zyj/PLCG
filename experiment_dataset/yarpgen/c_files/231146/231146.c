/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 += ((var_0 - (arr_3 [i_0] [10] [i_0])));
                arr_5 [15] [i_1] [i_0] = (((!7252131797789696138) ? var_6 : ((max(var_5, 5203787462127794303)))));
                var_13 = (max(var_13, (((-(((((~(arr_3 [i_0] [2] [i_1])))) ? 13764 : ((7252131797789696138 ? 7252131797789696126 : var_2)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(var_4, 16716807408483201296));
                            var_14 = (((var_3 ? ((7252131797789696138 ? 16716807408483201301 : 1729936665226350285) : 4226861378655627))));
                            arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] = (arr_9 [i_0] [i_1] [i_0] [i_3]);
                            var_15 = 7252131797789696133;
                        }
                    }
                }
                arr_14 [i_0] [i_0] = ((((var_6 ? (max(-7252131797789696153, 1)) : -22767)) >= -41));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {
                    arr_24 [17] [i_4] [i_4] [i_4] = var_7;
                    var_16 = (max(var_16, (((-4044144496694565162 ? 1729936665226350318 : -7252131797789696138)))));
                    var_17 *= var_3;
                    arr_25 [i_4] [i_4] [21] [i_4] = -1;
                }
            }
        }
        var_18 = (min(var_18, ((((((var_1 ? 1729936665226350320 : -8540198108491531825))) ? var_7 : ((9223372036854775807 ? 21 : 874333360)))))));
    }
    var_19 = var_8;
    var_20 = 24540;
    #pragma endscop
}
