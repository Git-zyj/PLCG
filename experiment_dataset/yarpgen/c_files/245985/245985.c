/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((-(((0 - 16) ? 3390049680345165670 : 16))));
                var_12 = (max((((4 ? 16 : (max(-2, 3390049680345165655))))), (9964513231692291690 - 28)));
            }
        }
    }
    var_13 = -1;
    var_14 += (-3390049680345165656 + 3602320484558104104);
    #pragma endscop
}
