/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_20 += (min((arr_4 [i_0] [i_0] [i_1]), (min((((arr_6 [i_1 - 2] [i_0] [i_0]) ? (arr_3 [6]) : (arr_6 [4] [i_0] [12]))), (arr_5 [i_0])))));
                arr_7 [i_1] = (min((arr_1 [i_0]), (((arr_4 [i_1 - 2] [i_1] [17]) ? (arr_4 [i_1 - 2] [i_1] [i_1]) : (arr_4 [i_1 + 1] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
