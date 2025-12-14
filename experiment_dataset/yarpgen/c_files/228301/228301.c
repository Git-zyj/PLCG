/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 -= var_1;
    var_20 += ((((min(99, var_1)) / var_13)));
    var_21 = 5833051997056294244;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1 + 2] = var_2;
            arr_8 [i_1] |= (min(var_14, (max((arr_0 [i_1]), (arr_0 [i_1])))));
            arr_9 [2] [i_0] [5] = (arr_2 [i_0] [i_1 - 2]);
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_22 = ((((((0 ^ 1) - 230))) ? (arr_11 [i_2 - 1] [i_2 - 2]) : (((((arr_0 [i_0]) + (arr_5 [i_2]))) - (1 - 0)))));

            /* vectorizable */
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                var_23 = ((var_2 >> (var_6 + 20410)));
                arr_15 [i_0] [i_0] [i_0] = var_7;
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_24 = ((((((7956 ? 248 : 155)))) ? ((min(-7, (arr_4 [i_0])))) : ((~((2708 ? 0 : 5298085495949461757))))));
                        var_25 = (arr_12 [i_5]);
                        arr_23 [i_0] [i_0] [i_4] [i_0] = (252 > ((min(248, -115))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_26 = var_16;
            var_27 = ((-(arr_13 [i_6] [1] [9] [i_0])));
            var_28 = (1 ? 7942 : 5762295149984808968);
        }
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                {
                    var_29 = ((((min(0, -19142))) ? ((~(arr_13 [i_0] [i_0] [8] [i_7 - 2]))) : (((!(~64196))))));
                    var_30 = (min(var_30, ((min(1, 1619)))));
                    arr_30 [11] [i_0] [i_8] = ((((((arr_27 [i_7 - 3]) ? (arr_16 [i_7 - 2] [i_7 + 2] [i_8 + 1] [i_8 - 1]) : (arr_16 [i_7 + 1] [i_7 - 2] [i_8 - 2] [i_8 - 2])))) <= (3271961792 % 1)));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_35 [i_0] [i_7] [i_7] [i_0] [i_0] [i_10] = (max(7699566038941567573, 1));
                                arr_36 [i_0] [i_0] [i_0] [i_9] [i_10] = (1 * 5762295149984808974);
                                var_31 = ((((((arr_5 [i_8 + 1]) ? var_1 : (((arr_1 [i_9]) ? var_10 : 1))))) ? 11192 : var_13));
                            }
                        }
                    }
                    arr_37 [i_0] = ((-(min(((39840 >> (var_5 - 445768409950688732))), var_0))));
                }
            }
        }
    }
    for (int i_11 = 4; i_11 < 18;i_11 += 1)
    {
        arr_41 [i_11] [i_11] = 163;
        var_32 = (~32767);
        var_33 = (min(((1 ? (max(10729338073863523338, 2708)) : ((max((arr_39 [i_11] [i_11]), var_17))))), ((min(93, (arr_39 [i_11 + 1] [i_11 + 1]))))));
        arr_42 [i_11 + 2] = (arr_38 [i_11]);
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
    {
        arr_45 [i_12] = 163;
        var_34 = (arr_22 [14] [i_12] [i_12] [i_12]);
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
    {
        var_35 ^= (min(((((((arr_21 [14] [i_13] [i_13] [14]) / (arr_18 [i_13] [8] [i_13] [i_13]))) <= (arr_18 [i_13] [i_13] [i_13] [i_13])))), -2706));
        var_36 = (max(1, 1));
    }
    #pragma endscop
}
