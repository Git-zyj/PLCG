/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_5 == var_8);
    var_17 = (max(var_17, ((max((!var_3), (max((!var_15), (var_0 - var_14))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (max((arr_0 [i_0]), (1 == 9223372036854775807)));
                arr_6 [i_0] [i_1] = ((arr_1 [i_0]) - ((~(((arr_1 [i_0]) / 4081589736606033456)))));
            }
        }
    }
    var_18 -= (max(((((4081589736606033454 >> (4081589736606033456 - 4081589736606033418))) >> (var_12 - 172))), ((min(((max(var_12, var_0))), ((4081589736606033456 ? var_12 : var_3)))))));
    #pragma endscop
}
