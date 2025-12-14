/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((!18446744073709551600) ? ((max(var_4, 108))) : var_9))) ? var_1 : ((((max(var_1, 2387178818))) ? (var_5 > var_2) : var_2))));
    var_11 = (min(var_11, (((!((((!var_4) ? (max(1, 2243607047858223568)) : var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] = max((var_2 ^ var_7), (((-(arr_5 [i_0])))));
                    arr_9 [i_1] [i_1] [8] [i_1] = (max((((!(arr_4 [i_2] [i_1] [i_0])))), (((arr_4 [6] [i_1] [i_2]) ? (arr_4 [15] [i_1] [i_2]) : (arr_4 [i_0] [i_1] [i_2])))));
                    var_12 = ((min((arr_5 [i_0]), 0)));
                    var_13 = (min(var_13, (arr_0 [i_0] [1])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_14 = var_6;
                    var_15 = (((arr_1 [i_1]) > (arr_12 [i_0] [i_0] [i_0] [i_0])));

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_16 = (min(var_16, (arr_4 [i_0] [i_3] [i_3])));
                        var_17 = ((907565335 ? -1 : 3387401960));
                        var_18 = arr_5 [1];
                        var_19 = (max(var_19, (((~(arr_3 [i_3] [i_4] [i_3]))))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            var_20 = (max(var_20, ((((((var_5 ? (arr_3 [i_0] [13] [i_6]) : (arr_1 [i_3])))) ? 39105 : ((((arr_6 [i_0] [i_0] [i_0] [i_0]) || var_8))))))));
                            arr_19 [i_0] [i_1] [i_1] [i_5] [1] = 5369180909567224294;
                            arr_20 [15] [i_1] [i_1] = ((var_6 < ((39105 ? var_8 : 2387178817))));
                            var_21 = (min(var_21, ((((arr_17 [i_5]) | (arr_18 [i_5] [i_6 - 1] [i_6] [i_6 + 1] [i_6 + 1]))))));
                        }
                        arr_21 [19] [i_1] [5] [i_0] [i_1] [i_0] = (((~3387401960) ? ((~(arr_10 [i_5] [i_3] [14] [i_0]))) : (arr_4 [i_5] [i_3] [i_1])));
                    }
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                {
                    var_22 = ((((((var_2 ? var_0 : 2854288453))) | (arr_24 [i_0] [i_0] [5] [i_1]))));
                    arr_26 [i_1] = ((max((arr_3 [i_0] [i_1] [i_7]), (arr_3 [i_7] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                arr_32 [i_1] = ((!((((arr_29 [i_0] [i_0] [i_1] [i_7] [i_8] [i_9] [i_9]) ? (arr_0 [i_8] [i_8]) : (arr_29 [i_9] [i_8] [i_1] [i_7] [i_1] [i_1] [i_0]))))));
                                var_23 ^= (((arr_2 [i_0]) > (((((arr_2 [i_0]) > (arr_2 [i_0])))))));
                            }
                        }
                    }
                }
                var_24 = (((arr_14 [i_0] [i_0] [17] [1]) ? (((-(arr_14 [i_0] [i_0] [i_0] [i_0])))) : 1440678843));
            }
        }
    }
    var_25 = var_1;
    var_26 -= ((var_3 ? var_0 : var_2));
    #pragma endscop
}
