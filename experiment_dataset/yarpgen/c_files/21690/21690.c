/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (var_8 ? (((min(var_5, ((((arr_5 [i_0] [i_0]) || (arr_1 [i_0])))))))) : (max((arr_4 [i_1 - 1] [i_1 - 1]), var_7)));
                arr_7 [i_0] |= (max((arr_3 [i_1]), ((((~var_5) & (max((arr_2 [i_0]), (arr_0 [i_0] [i_1 - 1]))))))));
            }
        }
    }
    #pragma endscop
}
