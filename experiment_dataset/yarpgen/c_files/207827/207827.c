/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max(var_17, 1949884917));
                arr_4 [i_0] [i_1] = (((arr_2 [i_0] [i_1]) ? (((!((min(9928968567611976414, (arr_0 [i_0]))))))) : (((arr_3 [i_0] [4] [i_1]) ? (arr_2 [i_0 - 1] [i_1 + 4]) : (arr_2 [i_0 + 1] [8])))));
            }
        }
    }
    var_18 = 0;
    var_19 = var_13;
    #pragma endscop
}
