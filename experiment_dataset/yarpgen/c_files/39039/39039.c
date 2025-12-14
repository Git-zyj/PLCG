/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_14 = -2424645799047390363;
                        var_15 = ((((max((~-129155903), (max(2424645799047390356, (arr_11 [0] [i_1] [0] [i_2] [i_2])))))) ? ((max((arr_11 [i_0] [i_1] [i_1] [i_2] [i_2]), ((~(arr_0 [i_2])))))) : ((-468293834291667500 ? (min(-8041403749063412745, var_3)) : var_5))));
                    }
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        var_16 = (min(var_16, (arr_10 [i_0] [15] [i_2] [i_4])));
                        var_17 = (max(var_17, (((((((-332548891 - 255) ? (min((arr_2 [i_0] [i_1]), 2149944161)) : var_6))) ? (arr_1 [i_4 + 2] [i_0 - 1]) : ((max(var_4, (arr_3 [i_0 - 1] [i_2])))))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [2] [i_0] = ((-var_0 <= (((arr_1 [i_4 - 1] [i_4 + 1]) ? (arr_1 [i_4 - 1] [i_4 + 1]) : (arr_4 [i_4 + 1])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_18 = (min(var_18, (((~(~var_6))))));
                            arr_19 [i_5] [i_5] [i_2] [1] [2] = (-429410713 & 244);
                            var_19 = ((arr_11 [i_0 + 1] [i_0 + 1] [0] [i_0 + 2] [i_2]) ? (arr_11 [i_0] [i_1] [i_0] [i_0 + 2] [i_2]) : (arr_11 [0] [i_1] [0] [i_0 + 1] [i_2]));
                        }
                        arr_20 [i_0] [i_1] [i_2] [0] = (((912527732 > 1528283286255370646) / (~599016595)));
                    }
                    var_20 = -1661155383;
                    arr_21 [i_0] [i_2] = (min((((var_8 + ((-(arr_8 [i_2] [i_1] [i_0] [i_0])))))), (((arr_12 [i_0 + 2] [i_0]) + -3227324793772319888))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_21 = var_0;
                                var_22 = (((var_9 && (var_2 & var_5))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
