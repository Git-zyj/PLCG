/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = (((((var_9 - var_2) ? var_3 : (((-20110 + 2147483647) << 0)))) << ((((var_5 ? (max(var_2, var_7)) : (max(31088, 18446744073709551615)))) - 4660721711599844523))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = ((var_7 ? (max(((((arr_5 [i_2] [i_1 + 1] [i_2]) - var_9))), (min(18446744073709551585, 16515158905746984546)))) : ((max(((34421 ? (arr_2 [i_0]) : var_6)), (arr_2 [i_1 - 2]))))));
                    var_15 = ((max(15, var_3)));
                    var_16 = var_3;
                }
            }
        }
    }
    #pragma endscop
}
