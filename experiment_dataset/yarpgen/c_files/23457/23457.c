/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((1 ? (min((min(35235, var_7)), (min(255, var_7)))) : (min((min(var_2, 8938186317223851335)), (min(2471752130418068149, var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = ((((min((arr_9 [i_2] [i_2 - 2] [i_1] [i_0]), (arr_8 [i_0] [i_0] [i_0])))) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_1])));
                    var_13 ^= (min((~13), (min(-304844713, -8))));
                }
            }
        }
    }
    var_14 = ((var_7 ? var_7 : (((var_1 ? 43 : var_5)))));
    var_15 = (!var_3);
    #pragma endscop
}
