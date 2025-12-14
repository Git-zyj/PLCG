/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((((max(-18, var_7))))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_21 = (min(1, ((1 ? 31207 : 2211699355))));
                var_22 = ((-(((arr_5 [i_1 - 1] [i_1]) ? ((34322 ? 17859 : 1)) : ((min(34322, 1)))))));
                arr_7 [i_0] [i_1] = 100072185;
            }
        }
    }
    #pragma endscop
}
