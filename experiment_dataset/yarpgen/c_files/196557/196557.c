/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = -680778153;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_21 ^= (arr_5 [12] [12]);
                        var_22 = (max(var_22, ((((((-8475334067167266355 ? 26555 : 63413))) && var_2)))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] = (max(((((arr_5 [i_0] [i_0]) ? -2123 : (((arr_2 [i_0] [16]) & -3712147688301733308))))), (((arr_3 [i_0]) % (arr_3 [i_0])))));
                        var_23 = (((!var_12) ? ((((!(arr_1 [11] [i_1]))))) : -3712147688301733308));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_24 = ((~(((26552 == 63408) ^ (min(-1310609302, -1057360261))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1] [11] [i_5] [i_6 - 2] = (!var_8);
                            var_25 = ((min(var_17, (min(3712147688301733307, var_17)))));
                        }
                    }
                }
                arr_19 [2] [i_4] [2] &= (min((1310609302 && var_4), ((!((40789 == (arr_4 [i_0] [i_1])))))));
                arr_20 [i_4] [i_4] [i_4] [i_0] &= 0;
                arr_21 [i_4] [i_4] |= 1;
            }
        }
        arr_22 [i_0] = ((~(arr_7 [i_0] [i_0] [i_0])));
        arr_23 [i_0] = 3712147688301733308;
        arr_24 [i_0] [i_0] = (((!var_2) % 121));
        var_26 = (min((((var_3 ? -1 : -1))), (max(1, (3928822441942116589 ^ 18446744073709551607)))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_27 [18] &= var_16;
        var_27 |= var_10;
        arr_28 [i_7] = (min((min((arr_25 [i_7]), (arr_25 [i_7]))), 80));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_28 = var_14;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    var_29 = ((min(var_2, 0)));
                    var_30 = ((((min((arr_32 [i_8] [i_9] [i_8]), (arr_32 [5] [i_9] [i_8])))) || (arr_32 [i_8] [i_9] [i_8])));
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        arr_38 [i_11] = (min(var_11, (((!2) ? var_3 : var_14))));
        var_31 += (min(0, 77));
        var_32 += ((0 ? 3712147688301733300 : 2));
    }
    var_33 = ((((max(((11327 ? 3712147688301733308 : var_5)), 26))) ? -1310609312 : var_2));
    #pragma endscop
}
