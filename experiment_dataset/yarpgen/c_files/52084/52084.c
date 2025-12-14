/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (var_6 ? ((var_8 ? (min(var_4, 1938613935)) : ((var_3 ? var_0 : var_7)))) : (((((var_9 ? 44 : 6762628444874042930))))));
    var_12 = ((((((-19 + var_5) + var_7))) >= (min((((var_0 ? 0 : 4294967279))), 2147483647))));
    var_13 = (min(4294967290, ((max(-18, var_9)))));
    var_14 = (max(var_3, (min(var_6, ((var_8 ? var_0 : var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = (min((((((~(arr_8 [i_0] [i_2] [i_3] [i_4])))) ? ((((arr_13 [i_0 - 1]) ? 7 : (arr_6 [i_0] [i_1] [i_1])))) : (max((arr_11 [i_1] [i_3] [5] [5] [i_4]), 5)))), var_1));
                                arr_14 [i_0] [i_1 + 4] [i_1] [i_3] [i_4] = -11;
                            }
                        }
                    }
                    var_16 = (min(var_16, ((((min(((((arr_4 [i_1] [i_2]) ? 127 : (arr_6 [i_0 + 2] [i_1] [i_2])))), (min(11, (arr_3 [i_0] [i_1 - 2])))))) ? ((((arr_10 [i_2] [i_0] [i_1] [i_0] [i_2]) ? (min(4294967265, -1)) : (!var_6)))) : (max(((var_7 ? var_3 : 0)), (((var_10 ? (arr_13 [3]) : var_7)))))))));
                    var_17 = ((((min(((1 + (arr_13 [i_2]))), ((var_10 ? (arr_13 [i_0]) : 7))))) >= (max(var_5, (arr_5 [i_1] [i_1 - 1] [i_1])))));
                    arr_15 [i_0] [i_0] [i_1] [i_0] = (min(((9892624356629430493 ? 331996117916700790 : 5)), (~var_5)));
                }
            }
        }
    }
    #pragma endscop
}
