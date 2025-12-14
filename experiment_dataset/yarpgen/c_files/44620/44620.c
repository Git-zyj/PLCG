/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((1 ? 1 : 1));
                var_17 = (min((arr_0 [i_1]), (max((arr_5 [i_0] [i_0]), (min(-5, var_15))))));
            }
        }
    }
    var_18 += (((max(-var_5, (!1)))) ? 105 : var_4);
    var_19 = (max((min(((min(70, 105))), ((var_0 ? 103 : var_9)))), ((~((max(1, 1)))))));
    #pragma endscop
}
