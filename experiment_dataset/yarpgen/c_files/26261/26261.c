/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [20] [20] |= (((-25648467475993219 | var_16) ^ (((((((~(arr_3 [2] [i_1] [2]))) + 2147483647)) >> (var_2 - 35243))))));
                    var_18 = (max((((arr_4 [i_0] [i_1] [i_2]) ? ((~(arr_5 [i_0] [i_1]))) : ((160 & (arr_7 [11] [i_1] [i_2] [i_2]))))), ((((arr_3 [i_0] [i_1] [i_2]) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_3 [i_0] [i_1] [6]))))));
                    var_19 = (max(var_19, (!96)));
                    var_20 -= ((((~(arr_4 [i_2] [i_1] [i_2]))) % ((72 ? ((max(160, -90))) : 821131342))));
                }
            }
        }
    }
    var_21 = (max(var_0, (~var_9)));
    var_22 = ((var_10 ? 15441547942754833832 : ((min(var_6, (var_14 + var_15))))));
    var_23 = ((!(((min(1073741824, -1285090445))))));
    #pragma endscop
}
