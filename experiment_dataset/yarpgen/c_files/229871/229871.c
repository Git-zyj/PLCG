/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (((((arr_0 [i_0]) ? (min((arr_2 [i_1]), (arr_0 [i_1 + 2]))) : (((min((arr_1 [i_0]), (arr_2 [i_0]))))))) == (((((arr_3 [i_0] [i_1 - 1] [i_0]) && (arr_3 [i_1] [i_1 - 1] [i_0])))))));
                var_11 -= (((((arr_2 [0]) / (arr_0 [i_1])))));
            }
        }
    }
    var_12 = (min(((((var_4 ? var_5 : var_9)))), (12451 % 3181668058)));
    var_13 = (((((((var_2 ? var_6 : var_4))) + var_0)) == ((min((var_8 || var_8), var_4)))));
    var_14 = ((((max(var_7, var_6)) / ((min(var_4, var_2))))));
    #pragma endscop
}
