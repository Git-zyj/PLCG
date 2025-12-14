/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_15 = ((0 ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (((1 ? var_9 : (arr_0 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        var_16 += (arr_7 [i_3] [i_3 + 2] [i_3] [i_3 - 1]);
                        var_17 = (!3170536028);
                        arr_9 [i_0] [i_1] [i_2] [i_1] [i_1] = var_13;
                        var_18 ^= 3170536025;
                        arr_10 [i_1] = ((32737 ? (arr_7 [i_1] [i_2] [i_3 - 2] [i_3 - 2]) : var_1));
                    }
                    arr_11 [i_0] [i_1] = ((~(arr_0 [i_0] [i_0])));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        var_19 = ((~(arr_4 [i_4])));
        var_20 *= min((arr_3 [i_4] [i_4]), (((-22399 ? ((-(arr_4 [i_4]))) : var_3))));
        arr_15 [i_4] |= ((((var_8 == (!4580016509431792062))) || (((~(arr_14 [i_4]))))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        var_21 = (max((((arr_16 [0]) ? (((((arr_5 [18] [i_5] [i_5]) != var_8)))) : var_5)), ((((((min(var_6, var_14)) + 2147483647)) << (3565033442 - 3565033442))))));
        var_22 = (min((((var_8 > (min(var_7, var_9))))), (((1272451327 >= var_9) >> (((max(var_7, (arr_1 [i_5] [i_5]))) - 4085574648))))));

        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            arr_21 [16] [i_6] [16] = (arr_3 [i_5] [i_5]);
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_30 [i_5] [i_5] [i_5] [i_7] [11] = (!(((var_10 ? (arr_13 [i_6 - 2]) : (arr_13 [i_6 + 1])))));
                        var_23 = (arr_12 [i_5]);
                    }
                }
            }
            var_24 *= (((arr_7 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1]) ? (~-7996416839736199984) : -4580016509431792063));
        }
    }
    var_25 = (max(var_25, (((((var_5 || ((min(var_1, var_5))))))))));
    #pragma endscop
}
