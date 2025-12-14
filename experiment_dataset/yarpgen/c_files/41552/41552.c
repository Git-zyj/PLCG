/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max((((max(var_10, var_5)))), (max(((max(-67, (-32767 - 1)))), -var_0)));
    var_13 = (((((max(var_10, var_0)) ^ (4525758835481596219 % -67))) <= (max(var_6, (max(var_10, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = 1671773475;
                var_15 = (((var_1 ? (((arr_2 [i_0] [i_0]) ? var_2 : var_9)) : (arr_3 [i_0 + 2] [i_0 + 2] [6]))));
                arr_4 [i_0] [i_1] = (((arr_0 [i_1]) >= var_3));
            }
        }
    }
    #pragma endscop
}
