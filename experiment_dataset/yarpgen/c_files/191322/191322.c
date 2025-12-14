/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (var_12 < var_5);
                arr_6 [i_0] [i_0] = (min(2673012970482867147, ((max(((max(var_2, (arr_2 [i_0] [i_1])))), 15773731103226684483)))));
            }
        }
    }
    var_14 = (((18446744073709551615 - var_5) ? ((((14221409864974430604 ? 240 : 1)))) : (((((2199022731264 ? 2673012970482867147 : -6116328522939286248))) ? -56756148302461287 : (max(2673012970482867130, 6116328522939286247))))));
    #pragma endscop
}
