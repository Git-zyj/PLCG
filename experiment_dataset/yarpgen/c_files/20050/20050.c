/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((((((var_7 ^ 4294967295) != var_9))) + (!var_7)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 *= (max((arr_4 [i_0] [i_0 - 1]), (arr_0 [i_0])));
                var_16 -= (max(78, 1245223797));
                var_17 = (max(var_17, ((((((-(((arr_3 [i_0 - 1] [i_1]) - var_7))))) ? var_8 : (((max(-22, -18)))))))));
            }
        }
    }
    var_18 *= (max(-124, 85));
    #pragma endscop
}
