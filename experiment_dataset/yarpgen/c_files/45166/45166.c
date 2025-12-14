/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 51329;
    var_21 = (51329 % -9653);
    var_22 = (var_5 % 11334415376221748138);
    var_23 = (min(var_1, ((max(2138, 90)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_24 = ((max((-2139 == 11334415376221748138), (!var_3))));
                    var_25 = ((((((arr_6 [i_2 - 3] [i_1] [i_2 + 3]) <= 1634902492))) & (max(131071, 53432))));
                }
            }
        }
    }
    #pragma endscop
}
