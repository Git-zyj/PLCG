/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_17 = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = ((var_13 ? ((((arr_7 [i_1 + 2] [i_2] [i_2 + 1] [i_3]) - (arr_7 [i_1 + 2] [i_2] [i_2] [i_2])))) : (((arr_8 [i_1 - 1] [i_0] [i_3] [i_0]) ? (arr_7 [i_1 + 1] [i_1 + 1] [i_2] [i_3]) : (arr_8 [i_1 + 1] [i_1] [i_3] [i_0])))));
                                var_19 *= (~var_8);
                                arr_14 [i_3] [i_3] [i_2] [i_2] [i_1 + 1] [i_3] [i_3] = ((-(((arr_7 [i_0] [i_1 + 2] [i_2] [i_3]) ? var_13 : (min(var_13, (arr_12 [i_0] [i_0] [i_2 + 3] [i_3] [i_4] [i_2] [i_2])))))));
                                arr_15 [i_3] = ((((((min(1, -1245284922))) ? (arr_0 [i_0]) : 0)) == var_8));
                            }
                        }
                    }
                    var_20 = (((((~((var_14 ? (arr_9 [i_2] [i_1 + 1] [i_1] [i_0] [i_0] [i_0]) : var_13))))) ? ((((21668 ? 696208601427893078 : 1881394717)) << (var_14 + 129))) : (arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] [i_1 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
