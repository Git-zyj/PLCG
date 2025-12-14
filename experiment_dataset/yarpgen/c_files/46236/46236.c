/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((-var_8 ? (((!(arr_0 [i_0 + 1])))) : (566361838 < 1))))));
                    var_18 = ((((max(((~(-127 - 1))), ((-122 / (-127 - 1)))))) - ((var_16 ? (((arr_7 [i_0]) ? var_4 : (arr_5 [i_0] [i_1] [i_2]))) : (arr_7 [i_0])))));
                }
            }
        }
    }
    var_19 = ((var_4 != (var_2 ^ 240)));
    var_20 = (((-127 - 1) ? var_7 : var_0));
    var_21 = (max(var_0, -18583));
    #pragma endscop
}
