/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_12 -= (!1597678291);
                var_13 = (min(var_13, 2224457423));
            }
        }
    }
    var_14 = (((((var_5 ? 2224457423 : (var_2 >= 2309284949962601249)))) && ((2070509886 && ((max(var_4, 2224457388)))))));
    var_15 = (min(var_15, (((var_8 ? var_0 : (max(var_4, -var_9)))))));
    #pragma endscop
}
