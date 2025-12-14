/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((min((var_7 == var_8), var_13)), var_8);
    var_16 = ((var_10 * (var_11 && 64718)));
    var_17 -= var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [1] = ((~(((var_4 > ((max(-14135, (arr_2 [i_0] [i_0])))))))));
                var_18 = (max((max(35, 48)), (max((arr_2 [i_0] [i_0]), var_2))));
            }
        }
    }
    #pragma endscop
}
