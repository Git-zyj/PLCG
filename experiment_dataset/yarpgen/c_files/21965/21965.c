/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(0 - 12040206958308109660)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((arr_0 [i_0] [i_0]) & ((var_15 ? (((~(arr_3 [i_0])))) : (arr_4 [i_0])))));
                var_17 = 3250043724;
            }
        }
    }
    #pragma endscop
}
