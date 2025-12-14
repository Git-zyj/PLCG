/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((-32767 - 1) ^ ((min((arr_0 [i_0]), ((max(127, -103))))))));
                var_16 ^= (!15);
                var_17 = ((((((max((arr_3 [i_0] [i_0] [i_0]), 36028797018963967)) ^ (((16 ? 16 : 16)))))) ? -36028797018963965 : ((min(255, (min((arr_2 [i_1]), (arr_1 [i_0]))))))));
            }
        }
    }
    var_18 = (min(var_18, (!var_0)));
    #pragma endscop
}
