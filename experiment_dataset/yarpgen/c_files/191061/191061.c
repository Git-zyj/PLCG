/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [10] [i_0] [i_0] = arr_2 [i_1];
                arr_7 [i_0] = (((arr_0 [i_1]) != ((max((arr_4 [i_0] [i_1 + 1]), (arr_4 [i_1 - 3] [i_0]))))));
            }
        }
    }
    var_10 |= ((-1554923024 ? (((max(var_8, var_5)))) : ((-85 ? var_1 : 64512))));
    #pragma endscop
}
