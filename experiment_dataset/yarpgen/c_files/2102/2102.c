/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(-var_7, 33554431));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_15 -= var_3;
                var_16 -= (min((min(9306184310087218305, 63131494)), (((var_12 >= ((((var_4 < (arr_1 [i_0]))))))))));
                arr_4 [i_0] [i_1] = 49129;
                var_17 = (min(var_17, (arr_0 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
