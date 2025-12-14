/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = -196;
        var_13 -= (max(60, 17403));
    }
    var_14 = (min(-63, 65518));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            {
                var_15 -= ((var_4 ? (((106 ? 50489 : 7))) : (60 ^ 18192752430840728910)));
                var_16 += ((109 ? 125 : 150));
            }
        }
    }
    #pragma endscop
}
