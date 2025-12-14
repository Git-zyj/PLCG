/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_20 += ((((min((arr_9 [i_3] [i_3 - 3] [i_3 - 3] [i_3 - 3]), (arr_9 [i_0] [i_0] [i_3 + 2] [i_4])))) <= ((((arr_9 [i_0 - 1] [i_0] [i_3 - 1] [i_3 - 1]) || (arr_9 [i_2] [i_2] [i_3 + 3] [i_2]))))));
                                var_21 = (((arr_0 [i_0] [i_1 - 1]) != (((arr_3 [i_1]) ? (arr_0 [i_1] [i_1 - 2]) : (arr_3 [i_1])))));
                                var_22 *= ((((max(2068490272, -20338))) || (((((min((arr_0 [i_4 - 4] [i_1]), (arr_12 [i_2] [i_2])))) ? (((((arr_10 [i_0] [1] [5] [i_3] [i_4]) == (arr_1 [i_4]))))) : ((-(arr_3 [i_2]))))))));
                            }
                        }
                    }
                    var_23 = (((((((arr_11 [1] [8] [i_2] [i_2 + 2] [i_2]) >> (((arr_0 [i_1] [i_1]) - 493974650728872984))))) ? (((((arr_5 [i_2]) != (arr_9 [i_0 + 2] [i_1] [i_2 - 2] [i_0 + 2]))))) : (((arr_7 [i_0 - 1] [i_1] [i_2] [9]) ? (arr_12 [i_1] [i_1]) : (arr_10 [6] [i_1 - 2] [i_2 - 1] [i_2] [i_1 - 2]))))) + (((arr_1 [i_0 + 2]) ? (arr_3 [i_1]) : (arr_1 [i_0 + 2]))));

                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        var_24 -= (((((((min((arr_8 [i_2]), (arr_8 [i_2])))) < ((min((arr_14 [i_2] [i_1] [i_0] [i_5]), (arr_8 [i_2]))))))) != ((~(((arr_17 [i_0 + 2] [i_1 + 1] [i_2] [i_2] [i_5]) ? (arr_7 [i_1] [i_5] [i_5] [i_5]) : (arr_9 [i_0 + 1] [i_0] [i_0] [i_0 - 1])))))));
                        var_25 = ((((min((((arr_8 [i_1]) != (arr_1 [i_5]))), (((arr_8 [i_1]) >= (arr_6 [8] [i_2] [i_2])))))) % ((((((arr_5 [i_0]) ^ (arr_8 [i_1])))) ? (((arr_12 [i_1] [i_1]) & (arr_11 [i_0] [i_1] [i_2] [i_2] [i_2]))) : (arr_1 [i_2 + 2])))));
                        var_26 = ((!(((((((arr_16 [i_2] [i_1] [3] [i_5]) ? (arr_16 [i_0] [i_1] [i_5] [i_1]) : (arr_16 [i_0] [i_1] [i_0] [i_5])))) ? (((arr_15 [i_5 + 2] [i_2] [i_1 - 1] [i_0] [i_0]) & (arr_12 [i_1] [i_2 - 1]))) : (((arr_7 [i_0] [i_1] [i_2] [i_5]) - (arr_2 [i_5]))))))));
                        var_27 = (((((-(arr_2 [i_2 + 1])))) && ((((arr_2 [i_2 - 1]) + (arr_2 [i_2 - 2]))))));
                    }
                    var_28 = min((-806254112846931192 || -3869), ((((((arr_5 [i_2 - 2]) ? (arr_2 [i_0]) : (arr_10 [i_0] [i_0] [i_1] [5] [i_2])))) ? (arr_11 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 2]) : ((-(arr_0 [i_0] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
