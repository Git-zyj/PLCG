/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_9 ? var_7 : var_16)) ? (((max(var_9, 65535)))) : (var_5 * var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (arr_1 [i_0]);
                    var_19 = ((40446 / (max((var_6 >= var_14), (max(var_4, (arr_1 [i_0])))))));
                }
            }
        }
    }
    var_20 = (((((max(49324, var_15)))) || ((max(var_12, -22037)))));
    #pragma endscop
}
