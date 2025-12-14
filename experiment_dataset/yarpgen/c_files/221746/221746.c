/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = 9061;
                var_14 = ((0 + (((((var_2 / (arr_2 [i_1])))) ? (-28272 || 0) : (~var_13)))));
                arr_7 [i_0] = var_10;
                var_15 = (max((arr_1 [i_0] [i_1]), (min(-6074099783000405679, 5511122430637325928))));
            }
        }
    }
    var_16 = var_0;
    var_17 = var_12;
    #pragma endscop
}
