/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_18 ? 28672 : var_7)) % var_18))) > ((min(var_14, var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_20 = ((((max((((var_15 ? var_15 : (arr_2 [i_0])))), 3071868636))) ? ((((((arr_0 [i_2]) ? (arr_3 [20]) : var_4))) ? (((max((arr_2 [i_0]), -39)))) : (((arr_5 [i_2] [i_0] [i_0] [i_0]) ? var_11 : (arr_0 [i_0]))))) : (((175 ? 1 : 1)))));
                    arr_7 [i_0] = (((((4183974157 ? 1223098653 : (((min(14, 17))))))) ? 1 : 0));
                }
                var_21 = ((max((arr_4 [i_1 + 1] [i_0] [i_0]), (arr_4 [i_1 + 1] [i_0] [i_0]))));
                arr_8 [i_0] [i_1 + 1] = ((max(1, 14064965621842170475)));
            }
        }
    }
    var_22 = (max(var_22, (((1 ? ((((max(var_4, 536870912))) ? var_13 : (max(1590074923999456788, -7)))) : var_12)))));
    #pragma endscop
}
