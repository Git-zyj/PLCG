/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [8] [8] = ((max(549755813888, -549755813888)));
                var_20 = (max(var_14, (arr_1 [i_1])));
                var_21 *= (-2745268286584187204 < 248);
                var_22 += ((((((arr_1 [i_1]) ? ((248 ? 549755813901 : 549755813904)) : ((1754821370 ? 2540145925 : 6561920135031978888))))) ? (((((2540145925 ? 549755813888 : 248))) ? -9 : ((max(15, 764174346))))) : -58));
            }
        }
    }
    var_23 *= var_4;
    #pragma endscop
}
