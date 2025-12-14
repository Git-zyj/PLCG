/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((max((min(var_2, var_3)), var_1)), var_10));
    var_14 = (max(var_3, ((~(max(var_2, var_4))))));
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_16 &= 1696423882;
                arr_5 [i_0] [i_1 + 1] [i_0] = ((-4704929557634138830 == (((var_2 != (arr_3 [i_1 + 3]))))));
            }
        }
    }
    #pragma endscop
}
