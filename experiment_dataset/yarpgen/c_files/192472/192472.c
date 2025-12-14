/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = ((((((arr_2 [i_0]) & ((8191 ? var_12 : 445080292798561780))))) && ((((var_12 ^ 1809562905) ? (~var_6) : var_10)))));
        var_14 ^= -3543848934211563638;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_5 [i_1] = (0 > 1809562922);
        var_15 = 173;
        var_16 = ((var_11 ? (63 && -7142571859673725522) : -1809562906));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_17 = (min(var_17, ((((((arr_8 [i_2]) && var_1)) && (((((188 ? 72 : var_10))) <= -3543848934211563638)))))));
        var_18 = (((((~((max(var_8, 1)))))) ? 82 : ((var_6 ? ((var_8 ? 142 : 1)) : ((((arr_7 [i_2]) < 1763423926)))))));
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_19 = var_6;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_20 = var_7;
                        arr_17 [i_5] = -var_4;
                        var_21 = -1809562905;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    arr_23 [i_8] [i_7] [i_8] [i_7] = ((!(((var_6 ? (((arr_12 [i_3 - 1]) ? (arr_11 [i_3]) : 7142571859673725531)) : (arr_20 [i_3]))))));
                    var_22 = ((~((((445080292798561780 && 71) >= var_12)))));
                }
            }
        }
        var_23 = (max((((var_11 ? (arr_21 [i_3 + 2] [i_3]) : (arr_12 [i_3 + 2])))), var_12));
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_24 -= (!172);
        var_25 = (max(var_25, var_1));

        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            arr_30 [i_10] [i_10] [i_9] = -83814686812004073;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {
                        var_26 = (min(var_26, (!119)));
                        arr_36 [i_11] [i_10] [i_11] [i_11] [i_10] = 83814686812004086;
                        var_27 = (((arr_32 [i_9] [i_9] [22] [22]) || var_5));
                    }
                }
            }
        }
        arr_37 [i_9] = ((((1 - (arr_24 [i_9]))) >= (arr_24 [i_9])));
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 23;i_13 += 1)
    {
        arr_41 [i_13] [i_13] = ((~(var_11 > var_4)));
        var_28 = var_9;
        var_29 = (1 >= var_11);
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        arr_45 [i_14] = ((-648357427 ? 1253574307 : var_1));
        var_30 = ((0 ? ((-1 ? 1253574307 : -32755)) : (((4294967289 && (arr_32 [i_14] [i_14] [i_14] [15]))))));
    }
    for (int i_15 = 2; i_15 < 20;i_15 += 1)
    {
        var_31 = (((((arr_38 [i_15]) ? ((1253574295 ? 54 : -1542714285)) : (~1))) >= var_10));
        var_32 = (((arr_34 [i_15] [i_15] [i_15] [i_15]) ? 18446744073709551610 : (arr_34 [i_15 - 1] [i_15 - 2] [i_15 + 2] [i_15 + 2])));
        var_33 = (max(var_33, (((!(7819 * 96))))));
        var_34 = (((((arr_32 [i_15 + 1] [i_15 + 1] [i_15 + 2] [18]) >= (arr_33 [i_15] [i_15]))) ? ((((445080292798561780 != (arr_8 [i_15]))) ? (((arr_35 [i_15 + 1] [i_15] [i_15] [i_15 + 1] [i_15] [i_15 + 1]) ? (arr_4 [i_15]) : (arr_33 [i_15] [i_15]))) : 115)) : ((((78 + -1253574306) ? (((arr_46 [i_15] [i_15 - 1]) ? var_7 : (arr_25 [i_15]))) : var_8)))));
    }
    #pragma endscop
}
