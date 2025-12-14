/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (arr_3 [i_0] [i_0] [i_1]);
                var_11 = var_4;
                arr_5 [i_1] = (!116);
                arr_6 [i_1] = ((arr_0 [i_1]) ? ((min((arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]), 23701))) : ((((((arr_4 [i_0] [i_0] [i_1]) ? -90 : (arr_0 [i_0])))) ? ((min((arr_3 [i_0] [i_1] [i_0]), (arr_0 [i_1])))) : (1881777138224097786 >= 116))));
            }
        }
    }
    var_12 = var_0;

    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] = ((((((arr_3 [i_2] [i_2] [i_2]) % ((var_4 ? (arr_2 [9] [i_2] [1]) : 469762048))))) ? var_9 : ((((((arr_2 [i_2 + 1] [i_2 - 1] [i_2]) ? (arr_4 [1] [i_2 + 2] [i_2]) : (arr_4 [1] [i_2 - 1] [1])))) ? (!var_8) : (min((arr_8 [i_2]), var_4))))));
        var_13 |= (arr_2 [i_2] [i_2] [i_2]);
        var_14 = (((arr_1 [i_2] [i_2]) ? ((~(min(-2120600213, 469762042)))) : 1349045895));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_15 = ((var_5 ? (((arr_11 [i_3]) ? (!400831064) : 1)) : (((26645 ? (min((arr_1 [i_3 - 1] [i_3]), (arr_12 [i_3]))) : var_1)))));
        arr_13 [i_3] = ((((max(115, var_0))) ? (max(3894136215, -126)) : var_2));
        var_16 = (min((((!(~1)))), (((((35 / (arr_3 [i_3] [i_3] [i_3])))) ? -1159344859049361098 : (((-(arr_2 [i_3] [i_3] [i_3]))))))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_17 = (arr_17 [i_3] [i_3]);
                            var_18 = (~10089929169738749630);
                            var_19 = ((var_6 / ((2988 | (arr_0 [i_3])))));
                            var_20 = ((((((arr_16 [i_6] [i_7]) | (arr_11 [i_6])))) ? (arr_2 [i_3] [i_4] [i_6]) : (arr_17 [1] [i_7])));
                        }
                        for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_5] [i_4] [i_6] [i_6] [i_4] = ((-(((min(106, (arr_12 [i_3])))))));
                            var_21 = ((-(arr_1 [i_4 + 3] [i_4 + 3])));
                            var_22 = ((((1 ? 3673348461 : 22373)) - (((min((arr_17 [i_8] [i_5]), (arr_22 [i_3] [i_3] [i_5 - 1] [i_3] [i_8])))))));
                            var_23 = (max(((((((~(arr_22 [i_3 - 1] [i_4] [i_4] [i_6] [i_8]))) + 2147483647)) >> ((((arr_21 [i_3] [i_8] [i_3] [i_8]) < (arr_15 [i_5 + 2] [i_3])))))), (((!(((~(arr_24 [i_3] [i_4] [7] [i_6] [3])))))))));
                            var_24 = (min((max((((arr_0 [i_6 - 1]) ? (arr_19 [i_4] [7] [i_6] [i_4]) : (arr_10 [1]))), ((max((arr_12 [i_4 + 1]), -15))))), (250 >= 109)));
                        }
                        arr_28 [i_6] [i_4 + 3] [i_6 + 1] [i_6 - 1] [i_6 + 1] = (max((max((max(4294967295, 19272)), ((3609836142 << (1089906610 - 1089906585))))), (min(((min((arr_25 [i_3 - 1] [3]), (arr_2 [1] [i_4] [i_3])))), ((-23855 ? var_8 : (arr_26 [1] [i_4] [i_4] [i_4 + 2] [i_4] [i_4])))))));
                        arr_29 [i_6] = ((57953 ? 3205060685 : 1));
                        arr_30 [i_4] [i_6] = (arr_11 [i_5]);
                        var_25 = ((~(((min(8356814903970801995, (arr_16 [i_3] [6])))))));
                    }
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 7;i_9 += 1)
    {
        var_26 = var_3;
        var_27 = (!(((((((arr_25 [i_9] [i_9]) ^ var_9))) ? (arr_0 [i_9]) : ((1587067392 ? 0 : 685131129))))));
    }
    #pragma endscop
}
