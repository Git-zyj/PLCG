/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] &= (((min((max((arr_2 [i_0] [i_1]), 2051936278)), var_0)) == -23829));
                arr_6 [i_0] &= (!-23829);
                arr_7 [i_0] &= ((-(((((23828 * (-127 - 1)))) & (arr_1 [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
