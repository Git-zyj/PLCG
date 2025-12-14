/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (1 % 4992227477346901442);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((((max((arr_0 [i_0] [i_0]), ((((arr_0 [i_0] [i_0]) < 1044480)))))) ? (arr_0 [i_0] [i_0]) : ((max((arr_0 [i_0] [i_0]), 15)))));
        var_14 -= (((arr_1 [i_0]) ? ((((var_4 | (arr_0 [i_0] [i_0]))) & 1316283488)) : var_9));
        var_15 &= (var_0 - ((1 ? -22 : -4992227477346901442)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 = arr_1 [i_1];
        var_17 ^= ((2224105207 ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                var_18 = (max(var_18, ((min(((((var_11 | (arr_9 [i_2] [i_2] [i_2]))) & (arr_7 [i_2]))), (!var_4))))));
                var_19 = ((-((15 ? -31 : (((23 ? 1325964607 : (arr_6 [i_2]))))))));
            }
        }
    }
    var_20 = 1;
    #pragma endscop
}
