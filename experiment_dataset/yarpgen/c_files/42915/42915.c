/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_2 | -var_9) ? var_10 : ((((968633046 > var_6) | (~var_17))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [3] [i_3] [8] = var_1;
                                var_19 += var_16;
                                var_20 = (min(var_20, (((((arr_7 [i_4 - 2] [17] [i_0] [1] [i_4]) + (arr_7 [i_4 + 2] [i_1] [i_2] [16] [i_4])))))));
                                var_21 = (min(var_21, var_5));
                            }
                        }
                    }
                    arr_13 [i_0] = (max((((arr_2 [i_2] [i_1]) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_0]))), (((((~(arr_3 [11] [11] [11])))) ? 491655717 : ((-8905586871906987867 ? var_0 : (arr_3 [i_0] [i_1] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
