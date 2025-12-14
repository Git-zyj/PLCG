/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (min(((49949 ? 9464244640618451195 : (max(1, 9464244640618451204)))), ((((15587 | 65535) >= (arr_1 [i_0 + 2] [i_0]))))));
                arr_8 [i_1] &= ((1 ? 49952 : 2635305464258217455));
                var_19 = (-2147483647 - 1);
                var_20 = var_4;
            }
        }
    }
    var_21 = -354821657;
    #pragma endscop
}
