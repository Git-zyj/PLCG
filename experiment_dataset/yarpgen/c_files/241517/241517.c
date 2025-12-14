/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = ((min(((min(var_4, 0)), (arr_0 [i_0] [0])))));
        var_16 = ((+(max((arr_1 [i_0] [i_0]), ((var_4 + (arr_1 [i_0] [3])))))));
        var_17 = (min(var_17, ((min((((~(arr_1 [i_0] [i_0])))), 4111355720872649960)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (min(var_18, ((((min((-26963 + var_14), ((-5752174399236787354 ? (arr_4 [10] [i_1]) : (arr_0 [i_1] [i_1]))))) * ((((!(arr_2 [i_1]))))))))));
        var_19 &= ((max((max(var_12, var_13), (arr_3 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_17 [i_2] [i_4] [8] [i_5] = ((((max(var_4, ((~(arr_11 [i_2])))))) != (max(var_6, (arr_12 [i_4] [i_4])))));
                        var_20 ^= (((min((min((arr_8 [15] [i_3]), var_9)), ((min(65535, (arr_16 [i_2] [i_3] [i_4] [i_5] [i_4])))))) >= (max(((max((arr_13 [i_2]), 0))), var_11))));
                        var_21 = min(var_12, (((((min(var_0, 1)) + 9223372036854775807)) << (((min(22185, var_13)) - 22185)))));
                        arr_18 [i_2] = ((-(min((var_5 ^ -860417523274856565), ((min(var_6, var_9)))))));
                    }
                }
            }
        }
        arr_19 [1] [i_2] = (min((var_13 % var_10), (max((arr_15 [i_2] [i_2] [i_2] [7]), 0))));
    }
    var_22 = var_9;

    /* vectorizable */
    for (int i_6 = 3; i_6 < 23;i_6 += 1)
    {
        arr_23 [i_6 + 2] [i_6] = (arr_22 [i_6] [i_6 - 3]);
        var_23 = (min(var_23, 1));
        arr_24 [i_6] [i_6 + 1] = (arr_20 [i_6 - 1]);
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_24 = ((~(((arr_21 [7]) ? ((min((arr_0 [i_7] [i_7]), (arr_26 [0] [i_7])))) : var_5))));
        var_25 = var_2;
        arr_27 [i_7] = (min((arr_26 [i_7] [i_7]), 13491069642510424904));
        var_26 = (((min(((var_7 ? var_11 : -67)), ((min(5804880305161741506, 268435455))))) / var_2));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_30 [i_8] [i_8] = (((arr_22 [i_8] [23]) || (arr_0 [i_8] [i_8])));
        var_27 = (min(var_27, var_11));
    }
    var_28 = ((((((var_4 ? var_6 : 4111355720872649960))) ? (var_2 & 0) : -5752174399236787354)));
    #pragma endscop
}
