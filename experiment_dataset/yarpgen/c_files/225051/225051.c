/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 64;
    var_21 = ((var_10 ? ((var_1 ? 666634095 : ((max(0, 1))))) : (((!(~15))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_22 = (min(var_22, ((((!(arr_3 [i_0])))))));
                var_23 = 239;
            }
        }
    }
    var_24 = (max((((min(1, var_9)))), (max(116, 16))));
    var_25 = 101;
    #pragma endscop
}
