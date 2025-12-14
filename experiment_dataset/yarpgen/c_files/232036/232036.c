/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((max((!var_1), -25))), -var_4));
    var_14 = (min(var_14, (!6203404211350994112)));
    var_15 *= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_16 += arr_5 [i_0] [6] [i_1];
                var_17 = ((-((min((((!(arr_1 [i_1])))), (min((arr_6 [i_1] [21] [0]), -25)))))));
            }
        }
    }
    #pragma endscop
}
