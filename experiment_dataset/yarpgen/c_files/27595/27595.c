/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_6);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 = (((((((var_12 ? var_1 : (arr_3 [i_2])))) ? ((min((arr_6 [i_0] [i_1] [i_1]), 127))) : var_1)) >> (((((!0) ? (5863098893239671406 | 5) : (((var_11 | (arr_2 [i_0] [i_0] [i_0])))))) - 5863098893239671399))));
                    var_20 = ((29272 ? (((max(var_12, 0)))) : (((4087919582100450548 + var_5) / 60658))));
                }
            }
        }
    }
    var_21 = (~var_2);
    #pragma endscop
}
