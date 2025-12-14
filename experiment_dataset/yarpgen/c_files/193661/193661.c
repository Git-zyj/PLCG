/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (((var_12 ? (((min(-110, (arr_1 [i_0] [i_1]))))) : var_11)) <= (min(((var_5 ? var_11 : var_5)), (arr_0 [i_0] [i_1]))));
                var_13 *= ((!((min(-20906, 255)))));
                arr_5 [i_1] = 20919;
                arr_6 [i_1] [i_1] = (var_7 ? (((arr_1 [i_1] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_1]))) : (((var_11 || (arr_1 [i_1] [i_0])))));
            }
        }
    }
    var_14 -= (var_1 | var_1);
    #pragma endscop
}
