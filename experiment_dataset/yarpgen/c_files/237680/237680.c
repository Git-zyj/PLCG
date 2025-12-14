/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min((var_5 - var_15), var_12)))));
    var_18 = 9191;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_19 = (min(1540890878, (((-127 ? 6314 : ((min(59246, 1))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_20 = ((min((arr_3 [i_2 - 2]), var_1)));
                        var_21 *= (((arr_6 [i_0 + 1]) ? (arr_10 [i_1] [i_2] [i_2 - 1] [i_1]) : ((min((arr_11 [i_3] [i_1] [i_2] [i_1]), 8190)))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_22 = (arr_18 [i_6] [i_0] [i_0] [i_0]);
                        arr_23 [i_0 - 2] [i_0] [i_5] [i_6] = var_5;
                        var_23 = (arr_9 [19] [i_0] [i_0 + 2] [i_0]);
                        var_24 = 1;
                    }
                }
            }
        }
        var_25 = (min((max((arr_4 [i_0]), var_3)), (arr_22 [i_0 - 3] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 20;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            var_26 = (arr_6 [i_8 + 3]);
            var_27 &= (arr_24 [i_7 - 2] [i_8]);
            var_28 = var_15;
        }
        for (int i_9 = 4; i_9 < 21;i_9 += 1)
        {
            var_29 ^= (arr_19 [i_7 + 1] [i_9 + 1]);
            arr_34 [i_9] [i_9] [i_7] = var_9;
        }
        var_30 ^= ((~(arr_10 [i_7] [i_7 + 2] [i_7] [i_7])));
        var_31 = (arr_13 [16] [i_7 - 1]);
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_32 = (min((((arr_36 [i_10]) ? ((~(arr_36 [i_10]))) : (((min(-8190, 100)))))), (((~(arr_35 [i_10] [i_10]))))));
        var_33 = 6318;
        var_34 += (max((arr_35 [i_10] [i_10]), (min((arr_35 [i_10] [i_10]), (arr_36 [i_10])))));
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        var_35 = (max(var_35, ((min((min((max(-4548969647519973330, var_5)), ((((arr_36 [i_11]) ? var_4 : 13))))), ((max((arr_37 [i_11] [i_11]), (arr_37 [i_11] [i_11])))))))));
        var_36 = (max((min((arr_11 [i_11] [i_11] [i_11] [i_11]), (arr_11 [i_11] [i_11] [i_11] [i_11]))), (((!((max(var_6, var_1))))))));
        var_37 = (min(var_37, (arr_28 [i_11])));
    }
    #pragma endscop
}
