/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((max((max(var_3, var_9), ((var_3 >> (var_2 - 18411056))))))))));
    var_12 &= (0 - 255);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((((((min(var_6, 2650062349))) ? (6352705842349076255 * var_5) : 1)) < (((2650062349 | (arr_4 [i_0 + 1] [i_0 + 1] [i_0])))))))));
                var_14 += (((((-var_7 ? var_8 : var_8))) + (max(var_2, 7139657108718674337))));
                var_15 = ((var_4 ? (((min((arr_0 [i_0 + 1] [i_0 - 2]), (arr_0 [i_0 + 1] [i_0 + 1]))))) : 1644904946));
                arr_5 [2] |= ((2650062349 ? ((((-var_4 < (4254062582 < -7139657108718674337))))) : var_2));
            }
        }
    }
    #pragma endscop
}
