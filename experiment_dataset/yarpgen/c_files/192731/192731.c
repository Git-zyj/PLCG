/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_21 *= ((((((var_7 | (arr_6 [i_1] [i_3])))))) <= (arr_10 [i_3]));
                        arr_13 [i_3] = ((max((arr_0 [i_0]), ((11523 ? 32 : -27710)))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_20 [i_1] [i_4] [i_4] [i_5] = (((((arr_10 [i_4]) - (arr_10 [i_4]))) > ((((((arr_12 [i_4]) + 2147483647)) >> ((((var_0 ? 27713 : (arr_10 [i_0]))) - 27700)))))));
                        arr_21 [i_0] [i_1] [i_4] [i_4] = (arr_8 [i_0] [i_1] [i_4] [i_1]);
                        var_22 &= (arr_12 [i_5]);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_24 [i_0] [i_6] = (arr_15 [i_0] [i_0] [i_0] [i_0]);
            var_23 = (((arr_7 [i_6] [i_6] [i_6] [i_6]) || ((((arr_16 [i_6]) - 1437123150)))));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_27 [i_0] [i_7] = (-32767 - 1);
            arr_28 [i_7] = ((33020 > (((((max((arr_15 [i_0] [i_0] [i_7] [i_7]), var_12)))) / ((31800 ? 2629378304836499525 : -17735))))));
            var_24 ^= (((((((((arr_3 [i_0] [i_0]) & 1))) || -8797))) + ((((((arr_26 [i_7] [i_0]) + 66))) ? var_1 : ((16000283658990108072 ? (arr_2 [i_0]) : var_17))))));
        }
        var_25 = (min((arr_8 [i_0] [i_0] [i_0] [i_0]), (((arr_22 [i_0] [i_0]) / ((9693 / (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_26 = ((var_19 * (~33736)));
    #pragma endscop
}
