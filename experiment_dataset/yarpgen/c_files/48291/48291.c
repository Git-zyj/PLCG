/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_4 [i_0] = (-(min(0, 9223372036854775779)));
                var_17 = ((-(((!(((-929336841750475397 ? 7928463451401207815 : (arr_0 [i_1 + 1] [i_1 + 1])))))))));
                arr_5 [3] = (((((-(arr_2 [i_1] [i_1] [i_1])))) ? 249 : (arr_2 [5] [5] [5])));
                arr_6 [i_0] = ((101 ? ((9223372036854775779 ? (((~(arr_1 [i_1 + 1])))) : (((arr_2 [i_0] [i_0] [i_0]) ? var_1 : var_14)))) : var_11));
                var_18 = (arr_2 [i_0] [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
