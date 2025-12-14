/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((max((var_1 && var_4), 4294967279)), var_7));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (~-658500993);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] [10] [i_1] [i_1] = var_8;
                    var_12 -= (min(((~(-9223372036854775807 - 1))), (min(255, (-9223372036854775807 - 1)))));
                    arr_11 [i_1] = (arr_0 [i_2]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_13 = (((arr_12 [i_3] [i_4]) ? (arr_12 [i_3] [i_3]) : (arr_16 [i_3] [i_4] [i_4])));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_14 *= (((arr_21 [i_3]) * ((((arr_14 [i_3] [i_3]) && 44930)))));
                            arr_26 [i_3] [i_5] [i_3] [i_3] [i_3] = (((!-287955622653162742) - var_9));
                            arr_27 [i_5] [i_4] [i_4] [1] [i_4] [10] [i_7] = -287955622653162731;
                        }
                    }
                }
            }
            var_15 = (max(var_15, ((((arr_22 [i_4] [i_4] [i_3] [12] [i_3]) % (~1))))));
        }
        arr_28 [i_3] = (((((-5663 ? -8 : -204))) ? ((-var_5 ? (arr_22 [i_3] [i_3] [8] [i_3] [i_3]) : (arr_16 [i_3] [i_3] [i_3]))) : (((max(2, 234))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_16 = 198;
                    arr_33 [i_8] [i_9] = ((+(((arr_21 [i_3]) * (arr_19 [i_3] [i_8] [i_9])))));
                }
            }
        }
    }
    var_17 = (max(var_17, ((((min(-30555, ((var_9 + (-9223372036854775807 - 1)))))) ? ((((!(((var_2 ? var_0 : 1080))))))) : (min(((min(5657, 5))), (var_7 + var_4)))))));
    var_18 = var_9;
    #pragma endscop
}
