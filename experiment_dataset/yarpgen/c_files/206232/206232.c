/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((1 ? 8296232516883305258 : 4747926344261516477));
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (3008391176 & 1);
                var_15 = ((~(((arr_3 [i_0 - 1]) & 1))));
                arr_6 [i_0] [i_1] = (((((min(var_2, -27171))))) / 5003256778664610162);
            }
        }
    }
    #pragma endscop
}
