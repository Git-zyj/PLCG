/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_12 ? 17 : (111 + var_8))) << (1090954815 - 1090954790)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (max(16383, (min((max(-16384, (arr_3 [i_0] [i_1]))), 111))));
                arr_5 [i_1] [i_1] [i_1 + 1] = (-112 - 22);
            }
        }
    }
    #pragma endscop
}
