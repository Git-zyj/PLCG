/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min((arr_3 [i_1]), var_5));
                var_16 = ((((min((((arr_3 [i_1]) | -5124314221406849423)), (((var_0 | (arr_2 [i_0] [i_0]))))))) == (max((~0), (((-5124314221406849423 + (arr_2 [i_0] [4]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((min((((((var_8 ^ (arr_7 [i_0] [i_0] [i_2] [i_2] [i_1] [i_4])))) / (arr_2 [i_2] [i_2]))), (((((arr_11 [i_0 - 4] [i_0 - 4] [i_1] [i_0 - 4] [i_3] [i_3] [i_1]) ? 0 : var_10)))))))));
                                arr_14 [i_0 - 4] [i_0] [2] [i_0] [i_0] [2] = ((((max(var_11, (arr_8 [i_3 - 2] [i_2] [i_0] [i_0])))) && ((!(arr_8 [i_3 + 1] [i_3] [i_2] [i_0 + 1])))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_1] = ((~(((min((arr_3 [i_0]), var_4))))));
                var_18 |= var_12;
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
