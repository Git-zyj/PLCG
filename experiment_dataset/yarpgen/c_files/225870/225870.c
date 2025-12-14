/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 = var_4;
                    var_12 = min(22, (((arr_4 [i_0]) ? ((1820187734 ? 65533 : (arr_4 [i_0]))) : (min(var_5, (arr_3 [i_0] [14]))))));
                    var_13 = (max(((2474779560 >> (((arr_2 [i_2 + 2]) - 4212211911)))), (((((arr_4 [i_0]) ? (arr_5 [i_2] [i_2] [i_2] [i_2 - 1]) : (arr_0 [i_1])))))));
                }
            }
        }
    }
    var_14 = (min(var_14, var_10));
    var_15 = var_3;
    #pragma endscop
}
