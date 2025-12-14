/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((max(12675182964847882871, -496037837560859926)), (((((max(var_12, var_12))) ? ((var_12 ? var_11 : var_1)) : (~var_11))))));
    var_14 = ((~(((var_5 ? var_6 : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [12] = (((~var_12) ? (((arr_1 [i_1]) ? 8775604261528705957 : (((~(arr_3 [1] [11])))))) : -var_5));
                arr_5 [i_0] [0] [6] = ((~((((max((arr_1 [i_1]), var_5))) ? ((((arr_1 [12]) ? (arr_3 [1] [i_0 + 1]) : var_10))) : (~var_0)))));
            }
        }
    }
    var_15 = max(((var_6 / ((var_11 ? var_11 : var_6)))), (((~0) ? var_6 : (max(var_1, var_6)))));
    #pragma endscop
}
