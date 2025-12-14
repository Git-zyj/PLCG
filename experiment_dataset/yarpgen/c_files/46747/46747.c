/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (min(var_17, 1086756753));
                arr_5 [i_0] = ((max(var_6, (arr_1 [i_0]))));
                var_18 = (arr_3 [i_0]);
            }
        }
    }
    var_19 = (min(((-((-26 ? -265895455711537753 : 1)))), var_5));
    #pragma endscop
}
