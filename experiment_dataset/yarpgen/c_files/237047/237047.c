/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = ((~((max((arr_3 [i_1 + 1] [i_1 + 1] [i_0]), (arr_3 [i_1 - 1] [i_1 + 1] [i_0]))))));
                var_20 = ((((max((arr_3 [i_0] [i_1 - 1] [i_0]), (arr_3 [i_0] [i_1 + 1] [i_0])))) / 4095));
            }
        }
    }
    var_21 = ((((max((!4117), 0))) ? 1 : 1));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_22 ^= 1;
        var_23 ^= (!237);
        var_24 = (arr_5 [i_2]);
        arr_7 [i_2] = (!var_2);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_25 = (((((~var_0) + 2147483647)) >> ((((var_12 ? var_4 : (arr_11 [i_3]))) - 3871001049))));
        var_26 = (((~1073741823) >= (var_12 | var_11)));
        var_27 = (min(var_0, -1073741800));
    }
    var_28 = (~4294967295);
    #pragma endscop
}
