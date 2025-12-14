/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [8] = ((((((!var_2) ? (9223372036854775807 < var_11) : (((arr_2 [i_0] [i_0]) >> (((arr_0 [i_0]) - 1685))))))) ? (min(-16871947707021243771, (arr_0 [i_0]))) : ((((min(127, var_6)))))));
                arr_5 [i_0] [i_1] = var_11;
            }
        }
    }
    var_13 = (min((-1 - -var_2), (((var_10 - var_7) ? (((-1 ? var_9 : var_3))) : (var_4 + var_8)))));
    var_14 = (((((var_7 ^ (min(5968198799344136258, var_4))))) ? ((((var_9 != (((var_1 + 9223372036854775807) >> var_9)))))) : ((((min(0, 2249634364))) ? (min(12478545274365415357, 1)) : var_8))));
    var_15 = var_1;
    #pragma endscop
}
