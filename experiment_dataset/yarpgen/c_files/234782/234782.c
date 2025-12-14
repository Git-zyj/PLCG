/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((2044440024 ? 65535 : 261166636))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (max(var_15, (!20964)));
                var_17 = (!65532);
            }
        }
    }
    #pragma endscop
}
