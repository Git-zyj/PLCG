/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(-var_7, (max(339495030, var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_19 &= (((-(((arr_0 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))))));
                var_20 = ((3955472269 ? 3949378990 : -675879430));
                var_21 = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
