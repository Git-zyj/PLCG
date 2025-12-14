/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(165718286 && 118)));

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (arr_3 [i_0] [i_0 - 3]);
                    var_14 = 4129249024;
                    var_15 = var_1;
                    var_16 = (arr_6 [i_0] [i_0]);
                }
            }
        }
        var_17 = (((max(var_1, (arr_4 [i_0])))) ? (arr_4 [i_0]) : (min((arr_4 [i_0]), var_2)));
        var_18 = 4129249000;
        var_19 = 1;

        /* vectorizable */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_15 [i_0] [i_4] [i_3] [i_0] = 23362;
                        arr_16 [i_0 - 3] [i_0] [i_4 - 3] [1] = (arr_9 [7] [i_0] [i_4]);
                        arr_17 [i_0] [13] [i_0] [i_5] = 16128;
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((!(arr_14 [1] [i_0] [i_4 - 2] [1])));
                        arr_19 [i_0] [i_0] [6] [i_3] [i_4 + 1] [i_5] = 1;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_20 = var_10;
                            arr_28 [i_0] [i_3] [i_6] [i_7] [i_7] = (((arr_11 [i_0] [i_3 - 1] [i_0] [i_0]) ? (arr_24 [i_0 - 3] [i_0] [i_8] [i_8]) : (arr_10 [i_0] [i_3 + 1])));
                        }
                    }
                }
            }
        }
        for (int i_9 = 2; i_9 < 16;i_9 += 1)
        {
            arr_32 [i_0] [i_0] = (min((((arr_4 [i_0]) ? var_11 : (arr_4 [i_0]))), -63));
            var_21 = (arr_9 [i_9 - 1] [10] [i_9]);
            var_22 = (57190 ? (((arr_24 [i_0] [i_0] [i_0 - 2] [i_9]) ? (arr_24 [i_0] [i_0] [i_0 - 3] [i_0 - 3]) : -6873345578132013141)) : -var_1);
            var_23 = ((!(arr_26 [i_0] [i_9])));
        }
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 16;i_10 += 1) /* same iter space */
    {
        var_24 = (arr_2 [i_10 - 1] [i_10]);
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    arr_41 [i_10] [i_11] [i_12] = 6;
                    arr_42 [i_10] = ((arr_7 [i_10 - 2] [i_11 - 2] [i_12] [i_10]) ? (arr_7 [i_10 - 2] [i_11] [i_11] [i_10]) : var_5);
                }
            }
        }
    }
    for (int i_13 = 3; i_13 < 16;i_13 += 1) /* same iter space */
    {
        var_25 = (((((!var_1) && (arr_0 [i_13]))) ? (113392930 | 1113866120) : (min(2751639740929252883, 25429))));
        arr_45 [i_13] = (min((((!var_3) ? (arr_6 [i_13] [i_13 - 1]) : (arr_22 [i_13] [i_13] [i_13] [i_13]))), ((min((((!(arr_24 [i_13] [i_13] [i_13] [i_13 - 1])))), (arr_27 [i_13]))))));
    }
    for (int i_14 = 3; i_14 < 16;i_14 += 1) /* same iter space */
    {
        var_26 = (arr_8 [i_14] [i_14]);
        arr_48 [i_14] = ((((((arr_47 [i_14]) ? (arr_4 [6]) : ((((var_10 != (arr_0 [14])))))))) ? (+-1893025550) : (min(-122, 15695104332780298736))));
    }
    #pragma endscop
}
