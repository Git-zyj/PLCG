/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2116
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
                arr_5 [i_0] = (((((arr_1 [i_0]) ? (((arr_1 [i_0]) ? -9218343023089354612 : -26304)) : (!var_2)))) ? ((1 ? 245 : 1)) : (arr_4 [i_0] [i_0] [i_1]));
                arr_6 [i_0] = 59;
                arr_7 [i_1] = (arr_1 [i_1]);
                var_19 = ((((((arr_0 [6]) >= ((var_14 | (arr_0 [i_0])))))) > (arr_2 [i_0])));
                arr_8 [i_0] = (arr_3 [i_0] [i_1] [i_1]);
            }
        }
    }
    var_20 = ((var_12 ? (max(7411, 1)) : (((max((max(62189, 1)), var_15))))));
    var_21 ^= ((((max(121, -6619))) ? (((((max(var_2, var_1))) ? var_1 : var_6))) : ((58 ? 9218343023089354611 : -32))));
    #pragma endscop
}
