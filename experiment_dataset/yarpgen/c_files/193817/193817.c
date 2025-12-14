/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0 - 4] [i_0 - 2] [i_0] = (min((arr_0 [i_0]), var_3));
                var_10 ^= (((((arr_4 [i_0]) ? var_8 : (arr_2 [2])))));
                var_11 = (~-23);
            }
        }
    }
    var_12 *= (!var_2);
    #pragma endscop
}
