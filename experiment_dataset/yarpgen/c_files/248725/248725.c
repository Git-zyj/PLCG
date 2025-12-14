/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (!139);
    var_18 = var_3;
    var_19 = var_1;
    var_20 = (((((~(var_15 / var_2)))) || var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] = ((((var_0 ? var_8 : var_5)) / (var_14 * var_15)));
                    var_21 = (min(var_21, (((((!((min((arr_6 [i_2] [i_1] [i_1] [i_0]), 5281479001737675802))))) ? ((((!(((arr_8 [20] [20] [20] [i_2 + 1]) && 144189990)))))) : (!1893831649))))));
                    arr_11 [i_0] = (((((arr_2 [i_0] [i_0]) && var_9)) || ((min((arr_2 [i_1 - 1] [i_0]), (arr_2 [i_1] [1]))))));
                }
            }
        }
    }
    #pragma endscop
}
