/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (var_12 - 15)));
    var_19 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((((min(var_11, 910574105)) * (((max((arr_5 [i_0]), 22558080567855482)))))))));
                    arr_10 [4] [i_0] [i_2] = (max((arr_3 [i_0]), (((arr_9 [i_0] [i_1 - 1] [i_2]) ^ (arr_9 [i_0] [i_0] [i_2])))));
                    arr_11 [i_0] [i_1] [4] [i_0] = -22558080567855483;
                }
            }
        }
    }
    #pragma endscop
}
