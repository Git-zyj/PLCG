/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = (((((((!var_4) > (min(var_5, var_9)))))) != var_2));
                    arr_8 [23] [i_1] [i_0] = ((~(((((1414803390 ? var_8 : (arr_5 [17] [22] [i_0 + 1])))) ? ((16255 ? var_9 : -256833992)) : ((((arr_2 [i_2] [i_0]) & var_7)))))));
                }
            }
        }
    }
    var_12 = (var_8 ? (((((min(-5843863577693902797, -1)) < (((2503713748 ? var_2 : var_1))))))) : var_3);
    var_13 = (((((var_9 & 2073572373) && 0)) ? ((7406 ? ((var_0 ? 1 : var_0)) : (var_1 || 2171495558))) : var_3));
    #pragma endscop
}
