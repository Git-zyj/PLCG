/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200393
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
                arr_6 [i_1] [2] = max((((((var_1 ? (arr_3 [i_0] [1] [i_0]) : (arr_0 [i_0])))) ? (var_6 || -773595025) : ((min((arr_4 [i_0] [i_0] [i_0]), 65509))))), (max(773595013, (((arr_0 [i_0]) ? 7491 : (arr_4 [i_0] [i_1] [i_1]))))));
                var_10 ^= ((var_7 - (arr_2 [i_1])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] = 773595013;
        arr_11 [i_2] = (max(773595028, -773595028));
    }
    #pragma endscop
}
