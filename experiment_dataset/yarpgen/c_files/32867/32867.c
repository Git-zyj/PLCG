/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [9] [i_0] = ((~(max((arr_3 [i_1]), var_5))));
                arr_6 [i_0] [i_0] = ((((max((min(5492720768901756876, (arr_2 [i_0]))), (((var_11 ? (arr_4 [3]) : var_4)))))) ? var_3 : ((((5069486925510706720 ? 13377257148198844895 : 5069486925510706720))))));
            }
        }
    }
    var_15 ^= ((((max(5069486925510706741, var_0))) ? var_10 : var_5));
    #pragma endscop
}
