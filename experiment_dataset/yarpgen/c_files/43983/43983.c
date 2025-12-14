/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-127 - 1);
    var_18 = ((3414587456 ? -97 : 103045297));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] = (~((-(((!(arr_2 [i_0] [i_0] [i_1])))))));
                var_19 = ((((((!var_10) ^ ((~(arr_2 [i_1] [i_1] [i_0])))))) ? ((((~(arr_1 [i_0 + 2]))))) : (--16412049496379796358)));
            }
        }
    }
    #pragma endscop
}
