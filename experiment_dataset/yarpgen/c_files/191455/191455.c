/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((-((2513426768 ? 252 : var_12))));
                var_14 = (max(var_14, (((((11366 ? 4 : 13)) + ((min(25691, 39848))))))));
            }
        }
    }
    #pragma endscop
}
