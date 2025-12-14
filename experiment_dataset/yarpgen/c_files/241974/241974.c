/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] = 46006;
                            arr_10 [i_2] [i_2] [1] [i_0] = 127;
                            arr_11 [i_3] [i_3] |= ((((((arr_1 [i_0] [i_3]) ? (arr_0 [i_2]) : 18446744073709551610))) ? (((arr_4 [i_3] [i_3] [i_3] [i_0]) % (arr_4 [i_0] [i_3] [i_3] [i_3]))) : 18446744073709551602));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_14 [i_0] [i_1] = (((((-(arr_12 [i_0] [0]))))) != (arr_2 [i_0] [i_0]));
                    arr_15 [8] [i_1] [i_0] = (((((((arr_4 [i_0] [i_0] [i_0] [i_0]) ? var_7 : (arr_12 [i_1] [9])))) && ((min((arr_12 [i_0] [i_1]), (arr_3 [i_4] [i_0] [8])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_16 -= ((((((arr_1 [i_0] [i_6]) | (arr_16 [i_0] [i_1] [i_4] [1])))) ? (((arr_1 [i_4] [i_5]) ? 5 : (arr_1 [i_0] [i_4]))) : (arr_16 [i_0] [8] [i_4] [i_5])));
                                var_17 = ((~(-1530779520 | var_1)));
                            }
                        }
                    }
                    var_18 &= (arr_16 [i_4] [i_1] [i_1] [i_0]);
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_19 = ((~((((10 / 65518) && 0)))));
                    arr_24 [i_0] [6] [i_7] = (min(65533, var_13));
                }
                var_20 = (max(((-76 - (min((arr_13 [7] [i_0] [i_0]), (arr_20 [i_0]))))), (min(18446744073709551596, -75))));
            }
        }
    }
    var_21 = (((((((var_1 <= var_14) >= (var_1 != 20))))) >= (min(var_6, (((var_1 ? 1 : var_2)))))));
    #pragma endscop
}
