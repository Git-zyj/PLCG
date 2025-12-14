/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((--1), (((!4294967281) ^ ((-14804 ? var_7 : 25))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1 - 1] = ((((((max(var_3, 68))) - ((1 ? var_11 : (arr_3 [i_0] [0] [i_0]))))) | (((!(((1 ? var_8 : -81))))))));
                arr_5 [i_0] [i_1 - 2] [i_0] = (((arr_1 [i_0] [9]) ? 6 : (((0 >= -119) ? (!var_7) : var_5))));
            }
        }
    }
    #pragma endscop
}
