/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (min(((~(arr_8 [i_1 - 1] [i_2] [i_2]))), var_2));
                    var_14 *= ((min(((-(arr_3 [i_0] [i_0])), (arr_6 [i_0] [i_1] [i_1] [i_2])))));
                }
            }
        }
        arr_10 [i_0] = var_2;
        var_15 = (arr_0 [i_0]);
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_16 = arr_13 [i_3];
        var_17 = (min(((127 ? 110 : 2679085029)), ((((arr_12 [i_3]) ? 117 : (arr_12 [i_3]))))));
    }
    var_18 = var_5;

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_19 = ((-(((arr_18 [i_5 + 1] [i_5 + 2] [i_5 + 1]) >> (var_5 - 15908)))));
                    var_20 |= ((((var_4 && (((125 >> (6289978286696251699 - 6289978286696251680)))))) ? (min((18850 || 111), 1745461249)) : (((((arr_14 [i_5 + 1]) <= ((min((arr_12 [i_6]), (arr_15 [i_4] [i_4]))))))))));
                }
            }
        }
        arr_21 [i_4] = (min(((((((arr_12 [i_4]) ? var_4 : var_0))) ? (((min(1, var_6)))) : (((-9223372036854775807 - 1) ? var_4 : -31527)))), (arr_14 [i_4])));
        var_21 -= (arr_14 [i_4]);
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        var_22 *= (arr_23 [i_7]);
        arr_24 [i_7] [i_7] = (((((1 ? 7015805540926398928 : 2381209444478816974))) ? 0 : (arr_20 [i_7 + 1] [i_7 + 1] [i_7])));
    }
    #pragma endscop
}
