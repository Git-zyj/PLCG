/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((~4321951388749663933) * (!67107840))) >> (var_1 - 70)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [12] = (arr_3 [i_0]);
                arr_6 [i_1] = (arr_2 [i_0] [i_0]);
            }
        }
    }
    var_19 &= ((!((min(var_1, (!var_3))))));
    #pragma endscop
}
