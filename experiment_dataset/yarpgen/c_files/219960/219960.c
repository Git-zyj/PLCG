/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (min(((((max((arr_1 [i_0]), -88))) ? ((min(1, 94))) : var_8)), var_8));
                var_11 = var_3;
                var_12 |= (((var_5 ^ (arr_1 [6]))) % (((((arr_2 [i_0] [i_1]) && ((max(77, -88))))))));
            }
        }
    }
    var_13 = 1;
    #pragma endscop
}
