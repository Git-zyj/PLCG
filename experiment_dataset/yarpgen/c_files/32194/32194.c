/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= 418054756276522162;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((((7262226848005283687 ? 418054756276522162 : (arr_2 [i_0] [i_1] [i_1]))) % (arr_2 [i_1 + 1] [i_1 + 1] [i_0]))) != var_14));
                var_21 = ((((max((((arr_3 [i_1]) / var_18)), var_19))) ? (max((min(418054756276522162, 30454)), (min((arr_3 [1]), (arr_0 [i_0]))))) : ((max((arr_2 [9] [i_1 + 1] [i_1 - 1]), (arr_2 [i_1 + 2] [i_1 - 2] [i_1 - 1]))))));
            }
        }
    }
    #pragma endscop
}
