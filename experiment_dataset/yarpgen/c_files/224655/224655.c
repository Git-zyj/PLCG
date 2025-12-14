/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((((~var_4) ? var_1 : var_0)))));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_11 = (-(6846934541373067401 && var_1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [4] [i_1] [i_0] = (32 / (((arr_1 [i_0 + 2]) ? -238443050 : (arr_6 [i_0 + 1] [i_0] [i_2 - 1]))));
                    var_12 *= (arr_0 [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 |= (~var_8);
                                var_14 ^= (min(var_0, (max((arr_0 [i_0] [i_1]), (max(var_3, (arr_1 [i_0])))))));
                                var_15 = (((arr_4 [i_0 + 1]) ? ((((-5 ? 16777215 : 8149082955253630370)) & (((var_5 ? 15967 : (arr_0 [i_0] [i_1])))))) : ((var_0 ? (((((arr_1 [i_0]) == (arr_12 [i_0] [i_0] [i_2] [i_3] [i_4]))))) : ((18 ? var_3 : var_3))))));
                            }
                        }
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = ((((((arr_12 [i_0] [i_0 + 1] [i_0] [i_0 + 2] [i_0 - 2]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_0] [1] [i_0 - 1] [i_0])))) ? ((((max(var_9, (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0 - 2] [i_0 - 2]))) : var_6));
    }

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_16 = (max((max((arr_15 [i_5] [i_5]), (((arr_15 [i_5] [i_5]) ? (arr_14 [i_5]) : (arr_15 [i_5] [i_5]))))), (arr_15 [i_5] [i_5])));
        var_17 = (min(var_17, ((min((((arr_15 [i_5] [i_5]) & (arr_15 [i_5] [i_5]))), (((arr_15 [i_5] [i_5]) | (arr_15 [i_5] [i_5]))))))));
        arr_16 [i_5] = (arr_15 [i_5] [i_5]);
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_20 [i_6] = (14099269046222496927 << 0);
        var_18 = (min(var_18, (min((arr_3 [i_6] [i_6]), (((((min(8149082955253630387, (-9223372036854775807 - 1)))) && -14690)))))));
        arr_21 [i_6] = (((((arr_11 [i_6] [i_6]) ? (arr_19 [i_6]) : (arr_11 [7] [i_6]))) + ((min(1002542946, 4050261070)))));
        var_19 |= -18168;
    }
    var_20 = (max(var_20, (((var_5 % (((-127 - 1) | (max(var_3, var_7)))))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                var_21 ^= (arr_23 [i_7]);
                var_22 = var_8;
                var_23 = (max(var_23, (((((((var_1 && (arr_27 [4]))))) + ((((var_9 ? (arr_23 [i_7]) : var_3)) % ((81 ? var_3 : (arr_25 [i_7] [i_8]))))))))));
            }
        }
    }
    #pragma endscop
}
