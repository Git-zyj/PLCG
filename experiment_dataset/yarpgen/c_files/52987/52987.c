/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((2048 ? ((((!var_9) <= ((max(var_2, var_3)))))) : ((~(~9)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 &= (arr_2 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_14 = (max(var_6, (arr_2 [i_1] [i_3])));
                        var_15 = (max(var_15, (((~(((arr_6 [i_0] [i_1] [i_1] [i_0]) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : var_6)))))));
                    }
                }
            }
        }
        var_16 = 8542657571705452047;
    }
    #pragma endscop
}
