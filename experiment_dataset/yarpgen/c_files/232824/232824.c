/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (((~var_2) & ((max(var_8, 11777)))));
        var_15 = -1363274139;
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                var_16 ^= ((((((0 / 8708915231147257885) / 8708915231147257895))) ? (max(((0 ? 15816 : var_7)), (arr_7 [i_1 - 2]))) : 1));
                var_17 = (max(var_17, (((((((arr_5 [i_1 + 1]) * ((-1909380343 ? 1 : 4294967295))))) ? 2147483647 : (1179211730264755916 < 2147483640))))));
            }
        }
    }
    #pragma endscop
}
