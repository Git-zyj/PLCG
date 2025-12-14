/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max((((((40988 ? 18446744073709551615 : var_3))) ? 47 : ((min(24538, 20321))))), (((!(var_2 / 2067153935326075285)))));
    var_15 = (((max(48, (~47))) > ((min(40988, (9 || var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((min((arr_2 [i_0]), (arr_3 [i_0] [i_1])))) ? (min((arr_2 [i_0]), var_8)) : (var_6 && var_12))));
                arr_6 [6] [6] [14] = var_7;
                arr_7 [i_0] = (max(((((((arr_3 [i_0] [4]) | var_1))) / (arr_2 [i_0 + 1]))), (arr_4 [i_0])));
            }
        }
    }
    #pragma endscop
}
