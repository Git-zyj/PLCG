/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((-(arr_2 [i_0] [i_0]))));
        arr_4 [7] = var_7;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_14 = 0;

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_15 = (min(var_15, (((((((arr_11 [i_1] [i_2] [i_2]) ? (arr_0 [i_2] [i_1]) : (max(var_10, 93451665))))) ? ((((min(var_8, -1))))) : -5)))));
            var_16 = ((+(((arr_8 [i_2]) & (arr_7 [i_1] [i_2])))));
            arr_12 [i_1] [i_1] = (min(-1, 0));
            var_17 = ((-(((~var_4) ? (var_2 & 4201515643) : ((var_8 ? var_10 : (arr_8 [i_1])))))));
        }
        var_18 -= (arr_10 [i_1] [i_1]);
        var_19 = (min(var_19, ((min((arr_9 [i_1] [i_1]), ((((arr_7 [i_1] [i_1]) == (((arr_10 [13] [i_1]) ? 425418187336678560 : -95))))))))));
    }
    var_20 = var_9;
    #pragma endscop
}
