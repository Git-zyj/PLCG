/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((arr_5 [i_0 - 3] [i_0 - 1] [i_0 - 3]) & (arr_5 [i_0] [i_0 - 4] [i_0 - 4])));

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = (((max((arr_0 [i_4]), (((-5 ? 41847 : 1))))) <= 3027144681));
                                var_13 = (min(var_13, 3820135509));
                                arr_14 [i_0] [i_0] [8] [8] [i_0] [8] = (((45 ? 3027144709 : 24102)));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] |= ((((((min(var_0, 0))))) ? (max(((0 ? (arr_9 [i_2] [8] [8]) : 5085027222590847761)), -86)) : 9));
                }
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    var_14 += (((-5 - 1) - (((~(arr_11 [i_0 - 3]))))));
                    var_15 = (max(var_15, ((((98 == 1) ? ((min(20140, -32341))) : 127)))));
                }
            }
        }
    }
    #pragma endscop
}
