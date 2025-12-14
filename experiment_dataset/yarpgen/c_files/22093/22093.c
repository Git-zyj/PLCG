/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -540749489;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((((((arr_1 [i_0 + 1] [i_0 + 2]) ? (arr_1 [i_0 + 1] [i_0 + 2]) : (arr_1 [i_0 + 1] [i_0 + 2])))) ? (!4924) : (((arr_1 [i_0 + 1] [i_0 + 2]) * (arr_1 [i_0 + 1] [i_0 + 2])))));
                arr_6 [i_1] = (max((((arr_4 [i_1] [i_1 - 1]) & (arr_3 [i_1 - 1] [6] [i_1 - 1]))), ((((arr_3 [i_1] [i_1] [i_1 - 1]) >= (arr_1 [i_1] [i_1 - 1]))))));
                var_21 = (min(var_21, ((max(-4931, -4925)))));
            }
        }
    }
    #pragma endscop
}
