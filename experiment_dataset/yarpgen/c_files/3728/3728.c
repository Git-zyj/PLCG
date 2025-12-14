/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_3 ? (((max(2147483647, var_9)) >> (((63 ^ 2147483647) - 2147483572)))) : (((1 > -1632568136) ? var_16 : (~1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [9] [i_0] = (+(((arr_0 [i_0]) ? (min(var_3, var_5)) : (arr_0 [i_0]))));
                var_21 = (((((((arr_3 [i_0] [i_0] [i_0]) + (arr_2 [i_1]))) + 2147483647)) >> ((((((var_5 / (arr_3 [i_0] [i_1] [i_0]))))) - 124))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 *= (((((arr_5 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_2]) : (min(1, (arr_0 [i_2]))))) - ((((~(arr_8 [i_4] [i_2] [i_2] [1] [i_2] [i_0]))) / (((arr_11 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0] [1]) ? (arr_6 [i_2] [i_3] [i_2]) : 1))))));
                                var_23 -= 10;
                                arr_13 [i_2] [i_0] [i_2] [i_2] [i_4] [i_3] = ((1 ^ ((-29 ? (arr_6 [i_0] [i_2] [i_4]) : -1))));
                            }
                        }
                    }
                    var_24 = (-var_6 || (((arr_2 [i_0]) || (-2147483647 - 1))));
                    var_25 = ((((-19 != ((max((arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [1]), -1))))) ? ((((((arr_10 [i_0] [i_1]) ? var_3 : (arr_2 [i_2])))) ? (((arr_8 [i_0] [i_0] [i_1] [6] [i_1] [i_1]) ? (arr_12 [i_2] [i_1] [i_2] [i_2] [i_0] [i_1] [i_2]) : 1)) : ((max(var_4, 1))))) : 14));
                    var_26 = var_6;
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_27 = (arr_18 [i_1]);
                        arr_19 [i_6] [i_6] [i_0] [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? (((((((~(arr_16 [i_6] [i_6] [i_5] [i_6]))) << (((arr_17 [i_0] [i_0] [i_0] [i_0]) - 1046291221)))) >> (((((min(var_10, 1))) && ((max(-1, 1))))))))) : (((((((~(arr_16 [i_6] [i_6] [i_5] [i_6]))) << (((((arr_17 [i_0] [i_0] [i_0] [i_0]) + 1046291221)) + 639447064)))) >> (((((min(var_10, 1))) && ((max(-1, 1)))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_28 -= (min((arr_16 [i_0] [i_0] [i_0] [i_0]), var_19));
                                arr_26 [i_0] [i_0] = ((-(arr_0 [i_0])));
                                var_29 = (((((var_11 ? var_0 : ((-(arr_15 [i_1])))))) ? ((((((arr_7 [i_0] [i_1] [i_5]) ^ (arr_5 [i_0] [i_0] [i_7])))) ? (arr_6 [i_7] [i_7] [i_7]) : ((1 ? 55 : var_10)))) : (((1 & 14) ? (var_1 || var_0) : 1))));
                            }
                        }
                    }
                    var_30 += (((arr_10 [1] [i_1]) + ((var_9 ? (arr_14 [i_5] [i_1] [i_5]) : (max(var_19, (arr_0 [i_5])))))));
                }
            }
        }
    }
    #pragma endscop
}
