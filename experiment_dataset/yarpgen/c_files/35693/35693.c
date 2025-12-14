/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (min(var_2, var_1));
    var_12 = (var_6 - var_5);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (((((arr_6 [8] [8] [i_0]) ? (arr_3 [i_2]) : -8931250845789787194))) ? ((((!11) < 3019))) : (arr_2 [i_0 + 3] [i_1]));
                    var_14 *= ((!(((7159268033574315200 ? 7159268033574315200 : 28514)))));
                }
            }
        }
    }
    #pragma endscop
}
