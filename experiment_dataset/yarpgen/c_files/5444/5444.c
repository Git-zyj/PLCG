/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = (min(var_6, (((max(var_7, 32))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((1202091435 ? (min(15182752901808802719, (arr_1 [0]))) : (((max(1, 1)))))) % ((((arr_1 [2]) ? var_4 : (arr_1 [10])))))))));
                var_15 &= (((arr_1 [6]) + ((60931 ? ((max(-7442, 203))) : (arr_3 [i_1 + 1] [6] [i_0 + 2])))));
            }
        }
    }
    #pragma endscop
}
