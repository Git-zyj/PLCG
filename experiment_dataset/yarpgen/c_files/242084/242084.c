/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((~((1654992071 ? (arr_0 [i_0]) : var_8))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 ^= (~-1654992072);
                    var_20 = ((-1332059200 ^ (-17291 ^ 3622215780)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_1] [2] [i_1] [12] = max((var_7 + -17291), var_5);
                                var_21 = ((~(min(135, -23))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_22 = (((arr_18 [i_7 + 2]) ? var_8 : 18091841801952201520));
                        arr_28 [i_6] = ((1089994099 ? 2531254577 : 2136279902));
                        arr_29 [i_8] [i_8] = ((((!(arr_10 [i_5 + 1] [i_6] [i_7 + 2] [i_8] [i_8]))) ? (arr_24 [i_7 - 1] [i_6 - 2] [i_6 - 1] [i_5 - 2]) : 135));
                        arr_30 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5] = ((4294967289 ? var_5 : (var_14 ^ var_3)));
                        arr_31 [i_5] [i_6 + 1] [i_7 - 1] [i_8] [i_8] &= var_6;
                    }
                }
            }
        }
        var_23 = ((!(arr_9 [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 2])));
    }
    for (int i_9 = 2; i_9 < 14;i_9 += 1)
    {
        var_24 = (max(((((arr_35 [i_9 + 3]) ? 2973214773 : var_9))), (max(var_15, (((-(arr_12 [i_9 + 2] [i_9 + 2] [13] [9] [i_9 + 4] [i_9]))))))));
        var_25 = (((((((1919807450 ? -13 : 127))))) <= (max((-122 - 2782764484), -2368))));
        var_26 -= (~46260);
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_27 += (min(((var_11 ? (arr_25 [0] [i_10] [i_10] [i_10]) : 672751532)), 4294967295));
        var_28 += ((12522659736060454264 / ((0 ? (arr_4 [i_10] [i_10] [i_10]) : 2147483647))));
        arr_39 [i_10] = (((((-var_2 ? (((arr_3 [i_10] [i_10]) * 672751515)) : (((max(46278, 6))))))) ? ((((min(var_15, (arr_19 [i_10] [8])))) ? var_9 : (arr_25 [7] [i_10] [i_10] [i_10]))) : ((min(var_10, 31)))));
    }
    var_29 = (((4880 << (var_2 - 140))));
    #pragma endscop
}
