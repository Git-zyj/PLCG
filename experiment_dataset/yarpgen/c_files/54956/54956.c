/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 10224;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((!((((2 ? 254 : 2880))))));
                var_12 = (max(var_12, ((((!1) ? (arr_1 [i_1]) : (((arr_3 [i_0] [i_1]) ? 62631 : 14717)))))));
            }
        }
    }
    #pragma endscop
}
