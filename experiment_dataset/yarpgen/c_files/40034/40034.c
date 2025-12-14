/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_13 -= ((((min((4611686018426863616 / var_8), ((min((arr_2 [i_0]), (arr_1 [i_0]))))))) ? 2877067937 : (((max(37, (arr_1 [i_1 - 1])))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_7 [i_2] = (arr_5 [i_0] [i_0] [i_0]);

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_14 = ((((min((arr_4 [i_0] [i_0] [i_0] [i_0]), ((max(0, (arr_3 [i_2] [i_2]))))))) ? ((min(2156903313, 232))) : (min((308559074 | 12582912), (1 + 8010696699954289890)))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_15 = ((0 << (32640 - 32638)));
                            var_16 = (arr_12 [i_1 - 2] [i_1] [i_1] [i_1] [i_1]);
                            var_17 = 218;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_18 = var_1;
                            var_19 ^= (arr_13 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [i_1]);
                            arr_17 [i_1] [i_2] [i_5] = var_0;
                        }
                    }
                    var_20 += (min((min((arr_0 [i_1]), 18446744073709551615)), (arr_12 [i_0] [i_1] [i_0] [i_1] [i_0])));
                    var_21 = ((((min(2, 2318660597))) ? (arr_1 [i_1]) : 255));
                }
                var_22 = ((max(31, (arr_10 [i_0] [i_0] [i_0] [i_1] [i_1]))));
            }
        }
    }
    var_23 += var_1;
    #pragma endscop
}
