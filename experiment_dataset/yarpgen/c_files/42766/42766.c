/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((1 ? var_4 : 1)));
    var_14 = var_0;
    var_15 = (min(-3761762757, var_6));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (max((min((arr_2 [i_0] [i_0]), 1)), (!1)));
        var_16 = (!4433);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = (min(3459229067, 8240394907050005852));
                    arr_11 [7] = (min(224, ((1 ? 1 : 1))));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        var_17 = ((((81 - 2129057369) ? (63429 - 17766414963339569451) : 81)) | (((var_12 | ((~(arr_13 [i_3])))))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_3] [i_3] [i_3] = (((min(((1 ? -123 : 0)), ((min(1, (arr_13 [i_3])))))) < 122));
                    arr_21 [i_3] [i_3] [i_3] [i_3] = ((~((213 ? -77 : 1))));
                }
            }
        }
        var_18 = (min((arr_19 [i_3]), (((arr_19 [i_3]) ? (arr_19 [i_3]) : (arr_19 [i_3])))));
        arr_22 [i_3] [15] = (117 != -233555525);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    var_19 = var_9;
                    arr_29 [i_6] [i_8] [i_8] [i_8] = (arr_23 [i_6]);
                }
            }
        }
        arr_30 [i_6] = ((-881940828160240234 <= (arr_27 [i_6] [i_6] [i_6])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_34 [i_9] = 14375855633475356111;
        var_20 = -3330940785;
        var_21 = ((((714473015 ? -1258732966241066689 : (arr_33 [i_9]))) & 1));
    }
    var_22 = (min(1, (max(55165, 4163341754))));
    #pragma endscop
}
