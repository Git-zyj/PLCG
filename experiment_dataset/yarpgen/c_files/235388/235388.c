/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 = min(var_14, (((~var_11) ? (((max(-4749, 4736)))) : ((var_11 ? var_9 : var_3)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_2] [i_2] [i_3 + 1] [i_0] = (-(((arr_10 [i_3] [i_3 - 1] [i_2] [i_3 + 2]) / (arr_10 [i_3] [i_3] [i_2] [i_3 + 1]))));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = (((arr_5 [20] [i_1] [i_0]) ? (min(var_8, -4736)) : ((((!(arr_9 [i_0] [i_1] [i_2])))))));
                        arr_13 [i_3 - 1] [i_2] [i_0] = (max(((~(!4736))), ((max((arr_6 [i_2 + 2]), (min(4733, var_1)))))));
                    }
                }
            }
            arr_14 [i_1] = (arr_5 [i_0] [i_0] [i_0]);
            arr_15 [i_0] = (min((((!(~4748)))), (((arr_10 [i_0] [i_0] [i_0] [16]) ? ((4736 ? 3849767237554547787 : (arr_7 [i_0] [i_0] [i_1]))) : (((var_4 ? (arr_2 [8]) : 32767)))))));
            arr_16 [i_0] [i_1] = (arr_6 [i_0]);
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_21 [16] [i_4] [i_0] = (((((arr_6 [i_4]) <= (arr_18 [i_4] [i_0] [i_0]))) && var_5));
            arr_22 [i_0] [i_4] [i_0] = max(3899815266204092872, ((((14596976836155003812 % (arr_7 [i_0] [i_4] [i_4]))) & ((var_3 ? 16064 : (arr_10 [i_0] [i_4] [i_0] [i_4]))))));
            arr_23 [i_0] = (((((3899815266204092859 ? (arr_17 [i_0] [9]) : (arr_5 [i_0] [i_0] [i_4])))) ? 4748 : ((((((arr_7 [i_4] [i_0] [i_0]) ? (arr_18 [i_0] [i_0] [i_4]) : 397524628)) < ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_17 [16] [i_4])))))))));
            arr_24 [i_0] = (((((-((var_15 ? 18446744073709551615 : (arr_5 [i_0] [i_0] [i_0])))))) ? (((arr_3 [i_0] [i_4]) ? ((min(var_4, (arr_18 [i_4] [i_4] [i_0])))) : (((arr_4 [i_4] [i_0]) ? (arr_5 [i_0] [i_0] [i_4]) : (arr_20 [21]))))) : ((((arr_19 [i_0] [i_0] [i_4]) ? var_4 : (arr_19 [i_0] [i_4] [i_0]))))));
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_35 [i_5] = ((arr_25 [i_0] [21] [i_6 - 2]) / ((var_4 ? (min((arr_31 [i_5] [i_5] [13] [15]), var_5)) : 115)));
                        arr_36 [i_0] [i_0] [i_5] = (((((arr_9 [i_6 - 2] [i_7 - 1] [i_5]) * (arr_7 [i_5] [i_7 - 1] [i_7]))) + 91));
                    }
                }
            }
        }
        arr_37 [i_0] [i_0] = (((26 % 9223372036854775805) ? (((((arr_18 [i_0] [i_0] [13]) <= -4776)))) : ((~((141 ? 44 : 1149260534211035893))))));
    }
    #pragma endscop
}
