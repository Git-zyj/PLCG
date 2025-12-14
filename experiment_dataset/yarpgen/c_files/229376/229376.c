/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (min(var_7, 24490))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (max(var_17, 790333438640107961));
                var_18 = var_2;
                arr_6 [i_0] = (max((max((arr_1 [16]), (0 && 0))), (11044817078731335800 - -89)));
                arr_7 [i_0] [i_1] [i_0] = (arr_1 [i_0 + 1]);
            }
        }
    }
    #pragma endscop
}
