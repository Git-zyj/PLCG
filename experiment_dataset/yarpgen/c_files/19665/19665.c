/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (((((~((max(var_6, 17230)))))) ? -25969 : 2339588498));
                arr_6 [i_0] [i_0] = (((((((arr_4 [i_0 + 1] [i_0 + 1] [i_1 - 1]) * (1994300601939955341 - 176))) + 9223372036854775807)) << ((min(0, ((((arr_1 [i_0] [i_0 + 1]) > (arr_4 [i_0] [i_0] [i_0])))))))));
                var_17 = (min((5 && 14971), (max(((25990 ? (arr_5 [i_1] [1]) : 1)), ((min((arr_4 [i_0] [i_1 + 3] [i_1]), 0)))))));
            }
        }
    }
    #pragma endscop
}
