/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_13 << (var_12 - 988299013));
    var_17 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((-((((min(var_12, var_12))) ? (max((arr_1 [i_0]), 10432862935125194747)) : (1822475684 == 1822475660)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_3] [i_2] [10] = (((((max(-1822475693, -1822475685)))) ? (((arr_7 [i_0] [i_0] [i_2] [i_3]) ? (arr_1 [i_0]) : (((arr_1 [i_3]) ? (arr_3 [i_0] [i_0]) : var_9)))) : (arr_0 [i_0])));
                            arr_12 [4] [i_3] [i_2] [i_3] [i_3] [15] = max(2147483643, (arr_4 [i_0]));
                            var_18 = (min(var_18, -1822475685));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_19 = (max(var_19, ((var_7 ? ((((((((arr_9 [i_4] [i_4] [i_5] [i_5]) << (var_10 - 11656318887635093066)))) || ((max((arr_14 [i_5]), (arr_3 [i_5] [i_4])))))))) : ((16 ? (max(10496836515228698191, var_5)) : (arr_15 [i_5])))))));
            arr_18 [i_4] [i_4] = 2147483647;
        }
        arr_19 [2] [i_4] = -2145718510;
    }
    #pragma endscop
}
