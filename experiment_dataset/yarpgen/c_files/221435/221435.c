/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_15 ^= var_0;
                var_16 ^= ((((max((~var_1), ((var_13 ? var_13 : var_0))))) || ((((arr_2 [12]) ? (arr_2 [6]) : (arr_2 [16]))))));
                arr_5 [i_0] = (arr_2 [i_0]);
            }
        }
    }
    var_17 ^= (max(-1703856458, -1703856449));
    #pragma endscop
}
