/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_1;
    var_18 = -86;
    var_19 = -29;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = ((((1 ? ((var_0 ? var_3 : (arr_4 [i_0]))) : 255)) & (((arr_4 [2]) - (arr_2 [i_1])))));
                var_21 = (max((max(50331648, -1156)), var_9));
                arr_5 [i_0] [i_0] = var_8;
            }
        }
    }
    #pragma endscop
}
