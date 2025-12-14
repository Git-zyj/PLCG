/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~(((!-2209464686364809555) & var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((arr_4 [1]) ? (arr_4 [i_0]) : -1))));
                arr_5 [i_1] [i_1] [i_1] = (max((((var_6 ? -3750990200070840068 : 2970978032932059256))), (((((max((arr_0 [1] [i_0]), (arr_2 [i_1])))) ? (!16813866145299592285) : 3750990200070840076)))));
            }
        }
    }
    #pragma endscop
}
