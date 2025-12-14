/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = min((((~(arr_3 [i_1 + 1] [i_1 - 2])))), (min(((197 ? (arr_1 [i_0]) : 604428973405667856)), (((75 ? (arr_1 [i_0]) : 4096405176))))));
                var_12 = ((((min(var_1, (arr_0 [i_0 - 2])))) ? ((4096405161 ? 198562135 : -1)) : ((((arr_0 [i_0 - 2]) - (arr_0 [i_0 - 2]))))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_9 [i_0] [i_1 + 2] [i_0] = min((((((((arr_4 [i_0] [i_0]) <= (arr_4 [i_0] [i_0]))))) & var_11)), (arr_2 [i_2]));
                    var_13 &= 6097283250978002897;
                    var_14 = (max(var_14, (((var_3 != (((((arr_2 [i_2]) && 3767977557)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] = arr_3 [i_3] [i_3];
                                var_15 = (((((((((var_4 && (arr_7 [i_4] [9])))) >= (!1724112644))))) != (min((!var_0), var_4))));
                            }
                        }
                    }
                    var_16 &= (((((~(arr_13 [i_0] [i_0] [i_0] [i_0] [i_1 + 3] [i_1 + 1])))) || (arr_12 [i_0] [i_0] [i_0] [i_0 - 2] [24])));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_17 = (((arr_7 [1] [i_0 + 1]) ? (arr_19 [i_1] [i_0 + 2] [i_0 + 1] [i_0]) : (((arr_19 [i_5] [i_0 - 1] [18] [18]) ? var_6 : (arr_7 [8] [i_0])))));
                                arr_23 [i_0] [i_0] [i_0] [i_5] [i_5] [i_5] [i_7 + 3] = var_3;
                                var_18 ^= (arr_17 [i_0 - 2] [4] [6]);
                            }
                        }
                    }
                    arr_24 [i_0 + 2] [i_1] [i_1 + 3] [i_0] = (~((((max((arr_16 [i_0] [i_1] [i_1] [i_5]), -2442634956647588709))) ? (arr_20 [i_0] [i_0] [i_0] [24] [i_5]) : (arr_7 [i_5] [i_1 - 2]))));
                    var_19 = 2570854650;
                }
                arr_25 [12] [i_1 + 3] [i_0] = (((arr_14 [i_0] [i_0] [i_0 + 1]) >> (68719476735 - 68719476729)));
                var_20 ^= min((arr_4 [16] [16]), (((arr_1 [i_0 + 1]) ? (max(var_2, (arr_3 [i_0] [19]))) : ((((var_1 > (arr_18 [i_0] [i_0] [i_0 + 1] [i_0]))))))));
            }
        }
    }
    var_21 = var_2;
    var_22 |= 766917880;
    var_23 = (max(var_23, 4096405166));
    #pragma endscop
}
