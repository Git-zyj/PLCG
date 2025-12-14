/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 = (min(var_9, ((var_5 << (((arr_5 [i_0] [i_1 - 2] [i_1 + 1]) - 2070135446230283858))))));
                    var_11 = (~(((((1 ? 1 : var_2))) ? (arr_4 [i_1 + 2] [i_1 + 1] [i_1]) : 1)));
                }
            }
        }
    }
    var_12 = ((57185 / ((var_7 ? (max(1, var_0)) : (1 && 1)))));
    var_13 = ((var_0 ? (max((28187 > var_6), ((-1736629602 ? var_2 : var_7)))) : (((((var_2 ? var_0 : var_8)) <= (((9243486699402305276 ? var_1 : 499651374))))))));
    #pragma endscop
}
