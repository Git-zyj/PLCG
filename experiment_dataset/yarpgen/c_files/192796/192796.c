/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_0] [i_0] = (arr_2 [i_0]);
                arr_9 [i_1] = ((((max((arr_2 [i_0]), 0))) + ((max((arr_1 [11] [i_1 + 1]), (arr_2 [i_0]))))));
                var_10 ^= (29429 / -10);
                arr_10 [17] [i_1] [i_1] = 16244839419497932177;
            }
        }
    }
    var_11 = (min(var_11, (((((((~var_7) & (~var_0)))) ? ((((min(45254, 1162557508))) ? var_4 : var_9)) : (((var_7 | 1) ? (var_9 | 17172841088519614356) : (var_4 ^ var_7))))))));
    #pragma endscop
}
