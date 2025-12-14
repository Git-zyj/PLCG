/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (~1);
        var_14 = ((!-285411190) ? ((var_11 ? (arr_0 [3]) : 1)) : ((-784553089 ? (-32767 - 1) : 40)));
        arr_5 [i_0] = (-4672504095466787345 + ((((arr_3 [i_0] [i_0]) % (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] [13] = (((((max(-476219363, (arr_7 [i_1]))))) ? -4672504095466787345 : ((((min((arr_7 [i_1]), var_3))) ? 4672504095466787344 : ((((arr_6 [i_1]) ? var_5 : var_1)))))));
        arr_9 [i_1] = (((134184960 & -373934924) ? var_0 : var_8));
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_15 = (min(var_15, ((((arr_10 [i_2 - 2] [i_2 - 2]) != ((((max(-21033, var_12))) ? (arr_11 [i_2 - 2]) : 21056)))))));
        arr_12 [i_2] [i_2] = (max(-21048, 1));
    }
    var_16 = 9272;

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_17 *= (((((134184960 ? (min(236, (arr_13 [i_3]))) : (((max(-20, 0))))))) ? (min((~184), (arr_13 [i_3]))) : ((((max(15639156102079218721, var_0)) >= var_0)))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                {
                    arr_23 [13] [i_4] [i_3] = (((max((max(var_9, -50), (arr_22 [i_5 + 1] [i_4 + 3] [i_4 + 2] [i_4 - 3]))))));

                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        var_18 = -21044;

                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            var_19 = (((arr_15 [i_5]) ? (!0) : ((max(1, 8465549498039407209)))));
                            var_20 += (min(((-21057 ? ((var_8 ? 18014398509481983 : var_6)) : ((4095 & (arr_27 [i_3] [19] [i_5 - 2] [i_6] [i_7]))))), (((min((arr_20 [i_7] [i_4 + 3] [5]), 22826))))));
                        }
                    }
                }
            }
        }
        var_21 ^= (min(255, -1564909252070413787));
        arr_28 [i_3] [i_3] = (~var_2);
        arr_29 [i_3] = ((~(((arr_20 [i_3] [i_3] [i_3]) / 50))));
    }
    #pragma endscop
}
