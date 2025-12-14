/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = (var_9 ^ var_7);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] = ((7218869410051278280 != ((-8561035285359722816 ? 7218869410051278260 : var_2))));
                arr_5 [i_0] = 0;
                arr_6 [i_0] [i_0] = 141393336;

                for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_2] = 8561035285359722808;
                    var_14 = (min(var_14, ((((var_7 + 9223372036854775807) >> (7218869410051278280 - 7218869410051278280))))));
                    var_15 = 19;
                    var_16 = 7;
                }
                for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_17 -= ((524287 ? ((min(var_10, -141393337))) : ((20200 ? (-1337532070 % 11227874663658273336) : (0 != 1)))));

                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1 + 2] [i_0 - 1] [i_3] = (~1);
                        arr_17 [i_3] [i_1] [i_3] [13] [i_4] = (((((24 / 1) ? (var_2 < -4234264729322625848) : (~var_7))) & (~59)));
                        var_18 = ((-((-(~4294967295)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_20 [i_3] [i_1] [i_3 - 1] [i_5 - 1] = (~-18446744073709551615);
                        var_19 = 1;
                    }
                    var_20 ^= ((~(max(98, (((var_2 + 2147483647) << (8561035285359722808 - 8561035285359722808)))))));
                    var_21 = (min(((524287 ? ((var_10 >> (11227874663658273342 - 11227874663658273315))) : ((min(115, var_11))))), ((((-141393336 + 2147483647) << (1347028873 - 1347028873))))));
                }
            }
        }
    }
    #pragma endscop
}
