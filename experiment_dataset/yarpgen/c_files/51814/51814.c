/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (max((max((arr_0 [i_0 + 1] [i_0 + 1]), (max(94, var_10)))), (arr_1 [i_0])));
                arr_4 [i_0] = ((((min((max(var_3, -74)), (((74 ? var_4 : (arr_2 [i_0]))))))) ? (max((arr_1 [i_0]), 84)) : ((((((9399753399901195484 + (arr_1 [i_0])))) ? 73 : -13476)))));
                var_12 = ((((-(112 > var_7))) == (arr_3 [i_0] [i_0])));
            }
        }
    }
    var_13 = -91;
    var_14 = (max(var_14, ((((-((-7571858282178235016 ? -114 : 144))))))));
    var_15 = -35;
    #pragma endscop
}
