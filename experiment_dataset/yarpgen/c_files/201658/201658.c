/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (max(var_15, (((~(~-2080050833))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((((((arr_4 [i_0]) && (arr_4 [i_2])))) != ((((min((arr_1 [15]), var_11))) / var_12)))))));
                    var_17 ^= (arr_8 [i_0] [i_0] [i_2] [i_1]);
                    arr_10 [i_1] [i_2] [i_2] = (((~var_14) > (arr_9 [i_0] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_17 [i_3] = ((-112 ? ((-(arr_4 [i_3 + 4]))) : (min((arr_4 [i_3 + 2]), (arr_1 [i_4 - 1])))));
                                var_18 = (arr_3 [i_0] [i_4 + 2]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        var_19 *= (max((arr_8 [i_5] [i_5] [i_5] [1]), var_13));
        var_20 ^= (((arr_21 [2] [2]) ? var_11 : (((!1023) + (arr_18 [1])))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 7;i_8 += 1)
                {
                    {
                        arr_30 [i_5 - 1] [i_5] [i_5] [i_5] [i_5 + 1] [i_5] = (~(arr_18 [i_5]));
                        arr_31 [i_5] [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5] = ((~(arr_16 [i_7] [i_6] [i_5] [17] [i_6] [i_6])));
                    }
                }
            }
        }
        var_21 = (max(112, (arr_25 [i_5] [i_5 - 1] [i_5] [i_5 + 1])));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_22 = ((((((arr_5 [i_9] [i_9] [i_9]) ? (((arr_1 [i_9]) ? var_1 : var_7)) : (((~(arr_3 [i_9] [i_9]))))))) ? ((~(arr_4 [i_9]))) : ((min(3089877313, ((((arr_33 [i_9] [i_9]) + var_0))))))));
        var_23 = (max(var_23, ((min((arr_4 [i_9]), var_1)))));
    }

    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_24 = 3070784799;
        arr_36 [i_10] [i_10] = ((((~(arr_13 [6] [i_10] [i_10] [i_10] [6]))) ^ (((!(((var_9 / (arr_13 [i_10] [i_10] [i_10] [i_10] [12])))))))));
        var_25 = (max(var_25, (((var_11 ? (var_12 | var_10) : (arr_34 [i_10]))))));
        var_26 = ((var_6 ? (arr_12 [17] [i_10]) : (max(var_2, ((var_7 - (arr_8 [i_10] [i_10] [i_10] [i_10])))))));
    }
    for (int i_11 = 3; i_11 < 15;i_11 += 1)
    {

        for (int i_12 = 4; i_12 < 15;i_12 += 1)
        {
            var_27 = ((((!(arr_32 [i_11 - 1] [i_12 + 2]))) ? ((max(2234637209, (arr_11 [i_11] [i_11 - 1] [i_12 - 3] [i_11] [i_11 - 1])))) : (((max((62549 != var_4), (arr_1 [i_11])))))));
            var_28 = (arr_38 [i_11]);
            var_29 &= ((arr_16 [i_12 - 3] [i_12 + 1] [16] [16] [i_11 - 3] [i_11 + 2]) * (((!(arr_16 [i_12 - 4] [i_12] [8] [8] [i_11] [i_11 - 2])))));
            var_30 = (min(var_30, (arr_13 [4] [1] [i_12 - 2] [i_11] [4])));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_31 = (max(var_31, var_12));
            arr_45 [i_11] [i_11] [i_11] = (arr_32 [i_11 - 2] [i_11 - 1]);
            var_32 = (max((((min(var_1, 112)))), ((112 ? 5184334515316262259 : (arr_42 [i_11 - 3] [i_13])))));
        }
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            var_33 = (max(var_33, ((!(((~((-(arr_3 [i_11] [i_11]))))))))));
            var_34 = (max(var_34, ((~(((((-(arr_11 [i_14] [i_14] [i_14] [i_14] [0])))) ? (arr_4 [i_11]) : (((var_13 ? (arr_44 [5] [i_14]) : var_12)))))))));
            arr_49 [i_11] [i_14] [i_11] = var_10;
        }
        var_35 = (arr_38 [i_11]);
    }
    var_36 = (min(var_36, ((max(var_4, ((var_10 ? (~17835817573679824573) : var_3)))))));
    var_37 = var_9;
    #pragma endscop
}
