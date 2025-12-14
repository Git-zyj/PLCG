/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min(1, (arr_5 [1] [2])));
                var_15 = var_10;
                var_16 ^= (((max((arr_3 [i_0] [i_0 + 2]), (arr_3 [i_0] [i_0 + 2]))) ? (max(5913875612587606514, (arr_3 [i_0 - 1] [i_0 - 2]))) : (arr_0 [i_0 + 3] [i_0 - 1])));
                arr_7 [1] [i_1] = var_8;
            }
        }
    }
    var_17 = var_10;
    #pragma endscop
}
