/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (var_2 && var_12)));
    var_21 = (min(var_21, var_18));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((((arr_4 [i_0 + 2] [i_1]) ? -1341214113 : var_1))) ? (((((max((arr_0 [i_0]), var_13))) && var_15))) : 1869406298));
                arr_6 [i_0] = (i_0 % 2 == 0) ? (((!(((((((arr_4 [i_0] [i_0]) && -1341214113))) >> (((arr_1 [i_0] [i_0]) - 26)))))))) : (((!(((((((arr_4 [i_0] [i_0]) && -1341214113))) >> (((((arr_1 [i_0] [i_0]) - 26)) + 154))))))));
            }
        }
    }
    var_22 = var_6;
    #pragma endscop
}
