/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = max(((var_9 ? var_0 : -248801594753999041)), (((!(~-248801594753999041)))));
                arr_4 [16] [i_0 + 1] = (min((34198 / var_1), ((127 ? 34198 : -248801594753999057))));
            }
        }
    }
    var_13 = ((((((~20367) <= (var_10 != var_9))))) * (((((var_5 ? var_8 : -121))) ? (((-248801594753999026 + 9223372036854775807) >> (248801594753999041 - 248801594753999014))) : var_1)));
    #pragma endscop
}
