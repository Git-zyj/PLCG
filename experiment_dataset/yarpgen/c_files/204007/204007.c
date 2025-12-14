/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((max(60, 30))) ? 65535 : 618290781))) ? var_8 : ((10979 ? 140 : 127))));
    var_20 ^= (min(var_1, ((max(11572956926184632750, var_15)))));
    var_21 += (min(var_13, ((min(var_5, var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = (min(var_22, (((max(32719, (arr_1 [3] [i_1])))))));
                arr_4 [i_0] [i_1] = (var_13 ? -127 : -127);
            }
        }
    }
    #pragma endscop
}
