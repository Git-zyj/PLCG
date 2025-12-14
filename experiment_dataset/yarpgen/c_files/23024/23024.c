/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((((arr_2 [i_0 + 1] [i_0 - 1]) ? (arr_2 [i_0 - 2] [i_0 - 1]) : 17870283321406128128))) || var_5)))));
                arr_6 [i_0] [i_1] [i_1] = ((((31393 || -12) ? (((arr_5 [i_1]) >> (arr_3 [i_0]))) : (arr_1 [i_1]))) | var_8);
            }
        }
    }
    var_15 = (max(var_15, (((((((var_7 ? var_5 : var_13)) < var_2)) ? -var_9 : (((var_3 || (((8 ? var_13 : -24)))))))))));
    #pragma endscop
}
