/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (~var_8);
                arr_6 [i_0] = (max(((max((((arr_3 [i_0] [14]) ? -105 : var_12)), (~1)))), ((~(arr_4 [i_1] [i_0] [16])))));
                arr_7 [12] [i_0] [7] = (arr_4 [i_0] [i_0] [i_0]);
                var_16 = (~(min(var_1, (max(7768202482568112565, 2)))));
            }
        }
    }
    var_17 = ((-(max((var_8 % var_11), (var_1 / var_2)))));
    #pragma endscop
}
