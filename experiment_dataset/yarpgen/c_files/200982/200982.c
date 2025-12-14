/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(4745, -9327);
    var_13 = (((((min((var_7 >= -20449), var_1)))) & var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (min(var_14, (((var_2 >= (arr_2 [i_0]))))));
        arr_4 [i_0] = (2658054684744704005 ? -5133053969199125818 : 32761);
        var_15 = 9007199254740991;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 = (min(var_16, ((min((((min(-30566, (arr_6 [i_1] [i_1]))))), 0)))));
        var_17 = 5029593678733020010;
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_18 ^= arr_15 [i_5] [6] [i_2 + 4];
                        arr_19 [i_3] [i_3] [i_4] [i_4] [21] = var_0;
                        var_19 = (max(var_19, (((min(4491322822364758266, 26302))))));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_20 = ((((max((max(30261, 18032)), 18746))) ^ ((max(-1, ((((arr_8 [i_4]) != 7062370888719016365))))))));
                            arr_24 [i_3] [i_3 - 2] = var_7;
                            var_21 = (((((((((arr_13 [i_2] [i_3] [i_4]) ? (arr_21 [i_2] [i_3 - 1] [i_4] [i_3] [i_6]) : var_9))) >= (max(0, (arr_8 [i_6])))))) << (-32748 + 32754)));
                        }
                    }
                }
            }
        }
        var_22 = (((((!((min((arr_9 [i_2] [i_2] [i_2]), var_0)))))) > (arr_5 [i_2] [i_2])));
        var_23 = ((!(arr_14 [i_2] [i_2 + 4] [i_2] [i_2])));
    }
    #pragma endscop
}
