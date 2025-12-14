/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_4);
    var_16 = ((((((~-63) ^ 391552721))) ? ((~((var_9 ? var_3 : var_11)))) : var_11));
    var_17 = min(-391552722, 391552721);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((~13106027541052044300) ? ((391552721 ? 391552721 : 391552721)) : (((arr_2 [i_0 + 2] [i_0]) ^ 391552724))));
                arr_7 [i_0] [10] [i_1] = var_6;
            }
        }
    }
    #pragma endscop
}
