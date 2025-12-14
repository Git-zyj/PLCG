/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((((-(arr_1 [i_1] [i_0])) * (min(446579567, var_6)))));
                arr_6 [i_0] [i_1] [i_1] = 0;
                arr_7 [i_0] [i_0] [i_1] = 4294967295;
                arr_8 [i_1] &= (((((-9223372036854775796 ? 1 : 576634835))) && ((min((arr_1 [i_0] [i_0]), var_0)))));
                arr_9 [i_0] = (((((min(576634843, var_5)))) || -576634836));
            }
        }
    }
    var_12 = ((!(-576634814 & -576634821)));
    var_13 = var_9;
    #pragma endscop
}
