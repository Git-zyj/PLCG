/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -6528729123800902578;
    var_19 = (max(var_17, var_7));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 -= 19;
                    var_21 = var_3;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_22 -= (min((min(-6528729123800902578, -28610)), (~var_10)));
                        arr_19 [i_5] [i_5] [i_3] [i_6] [i_6] = 642198060633185496;
                        var_23 -= ((2701568209 ? (2001390375 & -15) : (max((min(-785202187, -22365)), -3))));
                        arr_20 [i_3] [i_5] [i_5] [i_6] = (max((min((min((arr_3 [i_3]), var_14)), (arr_17 [i_3] [i_4] [i_5 + 1] [i_6] [11]))), (((-(arr_9 [i_3]))))));
                    }
                }
            }
        }
        var_24 = (arr_1 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 13;i_10 += 1)
                        {
                            {
                                arr_32 [i_3] [i_7] [i_8] [i_9] [i_9] [i_8] [i_10 + 1] = (min((arr_0 [i_3]), ((max((!7067876669382584011), (!1))))));
                                var_25 ^= 28599;
                            }
                        }
                    }
                    arr_33 [i_3] [5] [i_8] = (min((min(var_15, 2001390375)), (arr_6 [14] [12] [i_8 + 1] [14])));
                    var_26 = (min(var_26, 125));
                    var_27 = (max((min((!var_11), (((arr_9 [6]) ? (arr_10 [i_3]) : var_8)))), (~116)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
    {
        arr_37 [i_11] = (~var_2);
        arr_38 [i_11] = ((((140 ? 0 : 1593399099)) + (((((arr_29 [i_11] [i_11] [i_11] [i_11]) == (arr_7 [i_11] [i_11] [i_11])))))));
        arr_39 [i_11] = 1481997343;
        arr_40 [i_11] [10] = 124;
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
    {
        var_28 = (arr_15 [i_12] [i_12] [4] [i_12]);
        var_29 = var_4;
    }
    var_30 = var_15;
    #pragma endscop
}
