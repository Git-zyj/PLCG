/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (min(((((-1897283140 ? 7718816888122452156 : (arr_4 [i_0] [i_0] [i_0]))) ^ (var_2 > 65))), (max(-var_2, (((81 ? 101 : -8119)))))));
                var_13 = ((((((arr_0 [i_0]) ? var_0 : 1))) ? -81 : (arr_2 [i_1])));
                var_14 ^= (((var_5 > var_8) > ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
                arr_6 [i_0] [i_0] = ((!((min(449775992, 62)))));
            }
        }
    }
    #pragma endscop
}
