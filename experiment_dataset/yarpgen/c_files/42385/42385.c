/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_10 ^= ((((((arr_0 [i_1]) >> (((arr_0 [i_0]) - 644211681))))) ? (~4886002878811639150) : (~1)));
                arr_7 [i_0] = ((((((((arr_0 [i_1]) ? var_4 : var_9)) == (arr_4 [i_0] [i_0] [i_1])))) | (((!(((var_2 ? -4886002878811639155 : (arr_1 [i_0])))))))));
            }
        }
    }
    var_11 = var_3;
    #pragma endscop
}
