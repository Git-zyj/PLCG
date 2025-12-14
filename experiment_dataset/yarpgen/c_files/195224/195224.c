/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_14, 28));
    var_16 = (max(var_16, ((max(17, (min((var_13 / var_10), var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [12] = ((((max(var_11, var_2)) + (((var_7 + (arr_6 [i_0] [i_1] [i_1])))))));

                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        var_17 = (min(var_17, (((-1 / (((var_5 | var_9) + ((((-100 + 2147483647) >> (var_7 - 12191)))))))))));
                        arr_11 [i_2] [i_2] |= ((((var_11 != (((var_8 > (arr_10 [13] [i_3] [13] [13] [i_3])))))) ? var_9 : 175));
                        var_18 = (min(var_18, ((((((max(-1, 73)) / var_8)) / (arr_9 [10] [i_1] [i_2] [i_2]))))));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_19 = (max(var_19, ((max((max((arr_6 [i_1 - 1] [i_2] [i_3]), (!var_5))), (var_12 && var_4))))));
                            arr_15 [i_0] [i_1] [i_0] [i_2] [i_0] [i_4] [i_4] = (arr_5 [i_0 + 2] [11] [i_3]);
                            var_20 -= (((((((max(var_10, 65522)))) | (max(var_10, var_2)))) - (((((max(13, (arr_1 [i_4])))) ? (var_8 <= var_5) : (1501008795 | -1))))));
                            var_21 = max((((var_2 % 1) | (var_11 - var_6))), (((((((arr_14 [i_0] [i_0] [i_2] [i_3] [i_4]) ^ var_2))) >= (var_9 - var_12)))));
                        }
                        for (int i_5 = 3; i_5 < 12;i_5 += 1)
                        {
                            var_22 = ((max(7054400040588519275, ((max(12, 0))))) + var_8);
                            var_23 = (-1 * (min((((var_8 <= (arr_9 [i_0] [i_0 + 3] [i_0 + 3] [i_0])))), var_9)));
                        }
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_24 = (((((((~(arr_2 [i_0] [i_1 + 3] [10])))) ? ((var_6 << (var_14 - 10237193430549752869))) : var_4))) ? ((-472121813 ? var_12 : 49152)) : var_1);
                        var_25 = ((var_4 / (((11511 > var_13) + ((-1 ? var_13 : -100))))));
                        var_26 += (var_6 ? (((((1501008792 / var_8) == (var_6 * var_0))))) : ((-(var_1 ^ -1))));
                    }
                    var_27 = 0;
                }
            }
        }
    }
    #pragma endscop
}
