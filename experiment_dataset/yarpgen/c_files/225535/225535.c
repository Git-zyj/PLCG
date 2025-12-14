/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = -22562;
                    var_13 = ((!(arr_6 [i_0] [i_1] [i_2])));
                }
            }
        }
        var_14 = (max(var_14, ((((-((var_3 >> (var_1 - 7219098885545700260)))))))));
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        arr_9 [i_3] = ((var_4 && (((((9223372036854775799 ? 65535 : 15)) >> (((arr_7 [i_3] [i_3]) - 77)))))));
        var_15 ^= (((((((arr_8 [i_3]) < (arr_8 [i_3]))) && (arr_8 [i_3]))) ? (max((((arr_8 [i_3]) ? (arr_7 [i_3] [i_3]) : var_2)), (((arr_7 [i_3] [i_3]) + (arr_8 [i_3]))))) : var_2));
    }
    var_16 = (min(((var_5 ? var_1 : (var_3 & var_9))), (((~var_0) ? (((var_2 ? var_0 : var_0))) : (min(var_1, var_0))))));
    #pragma endscop
}
