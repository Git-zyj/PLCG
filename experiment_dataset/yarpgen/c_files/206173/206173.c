/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= 29841190;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((min(((var_10 ^ (arr_0 [4] [i_1]))), (((~(arr_2 [i_0] [i_1])))))))));
                arr_5 [i_0] = ((min((arr_2 [i_1] [i_1]), var_6)));
                var_14 = ((((max(1562819328, 54))) ? (((arr_0 [i_0] [i_1]) + (arr_4 [i_0] [i_0]))) : ((-38 ? 4095 : 9))));
                var_15 += ((arr_1 [i_0]) / (arr_4 [i_0] [i_0]));
            }
        }
    }
    #pragma endscop
}
