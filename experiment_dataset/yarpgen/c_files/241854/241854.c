/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_4));
    var_16 = ((((!((max(var_6, var_9))))) ? (~var_14) : var_9));
    var_17 = (-var_11 || var_7);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_7 [i_0] [i_0] [i_0] [i_0] = (((15286617486566779442 < 3160126587142772173) ? var_3 : -1));
                var_18 = (min(var_18, (((var_1 ^ (arr_4 [8] [i_2] [4]))))));
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_19 -= (max(((var_9 ? (arr_11 [i_5] [i_4] [i_3]) : (arr_11 [i_1] [i_4] [i_5]))), ((var_10 ? var_11 : (arr_6 [i_5] [3] [i_3] [i_1])))));
                            arr_17 [i_0] [i_0] [i_0] = 1;
                            arr_18 [i_0] [i_3] [i_3] [i_0] = var_3;
                            arr_19 [i_5] [i_0] [1] [i_3] [i_0] [i_0] = (((((4492576301428925071 + (var_4 % 1)))) ? ((((arr_0 [i_0]) ? (arr_13 [i_0] [i_1] [5]) : (arr_2 [i_0])))) : ((((((65528 >> (15286617486566779442 - 15286617486566779416)))) ? 255 : (-2147483647 - 1))))));
                        }
                    }
                }
                arr_20 [i_0] [i_1] [i_0] [i_1] = (((((((arr_2 [i_0]) < (arr_2 [i_0]))))) < (((arr_4 [i_3] [i_0] [i_0]) ? (((var_11 >> (var_6 - 2831433325)))) : (min(1, 829535064895859440))))));
                var_20 = (max(((((var_2 ? var_4 : 829535064895859444)))), ((~((var_14 | (arr_16 [i_0])))))));
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    arr_27 [i_0] [i_6 - 1] [i_6] [i_1] [i_0] = var_9;
                    arr_28 [i_1] [i_0] [i_6 - 1] [i_7] [8] [i_7] = -3890483162;
                    arr_29 [i_7] [i_0] [i_0] = var_1;
                    var_21 = (max(var_21, var_9));
                }
                arr_30 [i_0] = 1;
            }
            var_22 = (max((arr_5 [i_0] [i_1] [i_1] [i_1]), (95 || var_2)));
            var_23 = (((((max((arr_13 [i_0] [i_0] [i_0]), (arr_3 [i_1] [i_0])))) ? (arr_24 [i_1] [i_0] [i_0]) : ((max(var_12, var_13))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_24 = (min(var_24, ((((arr_4 [i_0] [i_8] [i_9]) ? (((((min(var_11, 4))) || var_4))) : 96)))));

                        for (int i_10 = 1; i_10 < 13;i_10 += 1)
                        {
                            arr_39 [i_1] [i_9] [i_8] [i_9] [i_8] |= (var_4 >= var_12);
                            arr_40 [i_8] [i_0] [i_10 + 1] [i_9] [i_10] = (arr_35 [i_10 + 3] [i_10 + 1] [i_10 + 1] [6] [6]);
                            var_25 = 15286617486566779434;
                            var_26 = 255;
                        }
                        arr_41 [i_0] [i_0] [i_0] = (arr_4 [i_1] [i_0] [0]);
                    }
                }
            }
        }
        arr_42 [i_0] = var_14;
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        arr_45 [i_11] = ((((~(max(var_0, var_4)))) ^ (((((-4116218538216917442 ? (arr_2 [i_11]) : var_8)))))));
        var_27 = (max(var_0, ((max((max(255, (arr_12 [i_11] [i_11] [i_11] [i_11]))), (arr_12 [i_11] [i_11] [11] [i_11]))))));
    }
    for (int i_12 = 2; i_12 < 23;i_12 += 1)
    {
        var_28 -= (max((max((min(237, 16941663159770581338)), var_8)), (((var_0 ? var_14 : var_9)))));
        var_29 *= (max(((max(var_7, var_4))), ((min(var_8, var_8)))));
    }
    var_30 = (max(var_30, var_14));
    #pragma endscop
}
