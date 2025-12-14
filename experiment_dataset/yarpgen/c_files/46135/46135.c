/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_6, var_11));
    var_14 += (min(((-((var_9 ? 138 : var_12)))), 53784));
    var_15 = (!var_12);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (~11751);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = ((~(min((max((-9223372036854775807 - 1), 4588668680203905466)), 45646))));
                    arr_9 [i_0] = 154;
                    arr_10 [i_0] = ((((((var_9 | (arr_4 [i_0]))) > var_12)) ? (arr_0 [i_0]) : ((((34490 && var_4) > 101)))));
                    var_16 = (max(var_16, (((((((-2050052906604214729 ? (arr_7 [i_0] [i_0] [16]) : 227))) ? (arr_5 [20]) : (((arr_5 [i_2]) ? var_5 : 3288509513749797827))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_13 [1] [i_0] [1] = ((((154 ? (arr_6 [i_0] [15]) : (arr_3 [i_0] [i_1] [i_0]))) <= (((var_8 ? var_11 : 252)))));
                        arr_14 [8] [18] [i_2] [14] |= (arr_4 [20]);
                        arr_15 [i_1] [i_0] [i_0] = ((~(arr_7 [i_0 + 1] [i_0 + 2] [i_0 + 1])));
                        arr_16 [i_3] [i_0] [i_3] [i_3] = ((!(arr_1 [i_0 + 3])));
                        var_17 += ((-(arr_11 [i_0] [20] [i_1] [i_0] [2] [1])));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_20 [15] [15] [i_0] = (max((((((~(arr_17 [i_1])))) ? (arr_6 [i_0] [i_0]) : 139)), (arr_18 [8] [8] [i_1] [8] [8] [i_1])));
                        var_18 = (((((min(65535, (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) & ((39 | (arr_7 [3] [2] [i_4])))));
                    }
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        arr_23 [i_0] = ((125 > (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_19 = ((arr_26 [i_0] [i_0] [i_2] [i_2]) ? 9223372036854775807 : var_10);
                            var_20 ^= (max((arr_5 [i_0 - 1]), (arr_19 [3] [3] [3] [i_6])));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_21 = (-8210876196731851994 ? 4948122590016771198 : ((102 ? ((4948122590016771198 ? var_9 : 32)) : 245)));
                            arr_30 [i_0] [i_1] [i_0] [i_0] [i_7] = arr_4 [i_0];
                        }
                        var_22 *= ((!(((54999 ? 245 : 88)))));
                        var_23 = ((~(arr_19 [i_0] [i_0 + 2] [i_0] [i_0])));
                    }
                }
            }
        }
        arr_31 [i_0] = max(((-(~5205646549823198826))), (4755 - -53816));
        var_24 = (max(var_24, (((((~27137) ? 3503 : ((46610 ? (arr_22 [9] [9] [9] [9]) : 177))))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_25 = (6097258664361302707 || 136);
            arr_37 [i_9] = -65512;
        }
        var_26 = (arr_1 [i_8]);
    }
    #pragma endscop
}
