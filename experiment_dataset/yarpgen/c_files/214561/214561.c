/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 -= ((34 ? 31760 : ((var_6 ? -12079 : -12063))));
    var_17 = (((((-var_9 ? (((var_2 + 9223372036854775807) >> (-6272351622742853976 + 6272351622742853986))) : (var_8 % var_6)))) ? var_11 : -var_2));
    var_18 = ((~(!var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((((((arr_9 [i_2] [i_1] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_1] [i_0]) : (arr_9 [i_0] [5] [1] [i_2])))) * 3804851263864515658));
                    var_20 &= ((((var_6 ? (arr_9 [i_2] [i_1] [6] [i_1]) : (((max((arr_8 [i_2] [i_1] [2] [2]), 0)))))) % ((((arr_8 [i_2] [i_1] [1] [1]) ? (536870912 / 84) : (arr_1 [11]))))));
                }
            }
        }
    }
    #pragma endscop
}
