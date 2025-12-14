/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_3;
    var_13 = min(var_11, (!var_10));
    var_14 -= var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = (min(((~(arr_2 [i_1] [i_1]))), (((var_8 ? (16310265160891449345 > var_0) : ((min(var_0, (arr_4 [i_0] [i_1] [i_1])))))))));
                var_15 = var_1;
            }
        }
    }
    #pragma endscop
}
