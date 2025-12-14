/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = var_4;
    var_14 = (min(var_14, ((max(((188 ? -892549210 : -892549218), ((var_5 ? var_1 : 104))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((arr_2 [i_0]) ? (max((arr_2 [i_0]), (arr_2 [i_1]))) : 255);
                var_15 = ((((max((127 & 173), var_9))) ? (~-1) : var_4));
                var_16 |= -892549218;
            }
        }
    }
    #pragma endscop
}
