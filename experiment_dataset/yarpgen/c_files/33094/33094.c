/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((var_2 ? var_3 : (var_6 - 6252308406361458651))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = ((1 && (((var_10 ^ -1874962305) < -1874962305))));
                var_13 += (!10902077894110219759);
            }
        }
    }
    #pragma endscop
}
