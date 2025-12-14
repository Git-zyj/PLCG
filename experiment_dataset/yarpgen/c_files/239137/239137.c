/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((min(((0 ? (-9223372036854775807 - 1) : 55405)), var_13)))));
    var_19 = (min(var_19, ((((92 ? -35 : 12132268064324583653))))));
    var_20 = (((((max(var_1, -22))) >= ((min(var_10, var_5))))));
    var_21 = 14620179551035571123;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_11;
        var_22 = (-1 && 14620179551035571123);
        var_23 = (max((arr_0 [i_0]), ((((((arr_0 [8]) ? (arr_2 [i_0]) : (arr_0 [i_0])))) ? ((var_8 ? (arr_2 [i_0]) : var_16)) : 6))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        var_24 = ((4294967275 ? (104 || 9223372036854775807) : ((min(var_2, 37)))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = (arr_6 [i_1] [i_2] [i_2]);
                        arr_13 [i_2] [i_3] = ((-((7959 ? 250 : 3826564522673980493))));
                        arr_14 [i_0] [i_2] [i_2] [i_3 - 2] = ((var_16 ? ((max(-var_11, (arr_2 [i_2 - 2])))) : (min((arr_4 [i_3] [i_3]), ((~(arr_5 [i_0])))))));
                        var_25 *= ((min((arr_6 [i_2 - 2] [i_3 + 1] [i_3 - 1]), (arr_6 [i_2 - 2] [i_3 + 1] [i_3 - 1]))) ? (arr_9 [i_3] [2] [i_2] [2]) : (((arr_11 [8] [i_1] [i_0] [i_2 + 1] [8]) ? (arr_6 [i_2 - 2] [i_1] [i_3 + 1]) : (arr_1 [i_0] [1]))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        arr_18 [i_4] = 14620179551035571141;
        var_26 = var_12;
        var_27 = var_14;
    }
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        arr_22 [11] = (arr_21 [i_5]);
        var_28 = (max(3826564522673980490, ((min(((6 ? var_15 : 95)), 37193)))));
        var_29 = (((((max(var_12, 1)) * ((max(var_1, (arr_20 [i_5]))))))) ? (((((0 ? (arr_21 [1]) : 55539))) ? (arr_20 [i_5 - 1]) : var_15)) : ((((arr_21 [i_5 + 1]) ? (9 | 11) : (arr_20 [i_5 + 1])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_25 [i_6] [i_6] = arr_24 [i_6] [i_6];
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                {
                    var_30 = (arr_17 [i_8 - 2]);
                    arr_30 [3] [i_7] [i_8] = (arr_17 [i_8 + 1]);
                    arr_31 [i_6] [i_6] [i_6] = ((((((arr_24 [7] [i_8]) >> (((arr_26 [i_6]) - 25662))))) || 66));
                }
            }
        }
        var_31 |= (((arr_20 [i_6]) ? (arr_19 [i_6]) : (arr_19 [14])));
    }
    #pragma endscop
}
