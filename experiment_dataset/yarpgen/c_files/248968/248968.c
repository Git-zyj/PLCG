/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1215113683;
    var_19 = (min(var_12, var_4));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = ((~(((-29707 >= ((min(29712, (arr_0 [i_0])))))))));
                arr_4 [i_0] [i_1] [i_1] = (-1 ? (((-29091 * var_11) % (~2147483647))) : (min(27197994, ((min(-29091, 1))))));
            }
        }
    }
    #pragma endscop
}
