/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((var_0 ? var_0 : (min(-var_3, var_10)))))));
    var_13 = ((!((min(((var_1 ? var_5 : var_1)), var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (1 || -2683);
                var_14 = (((((var_8 - (arr_3 [i_0 - 2])))) && ((((arr_3 [i_0 + 2]) << var_7)))));
                arr_5 [i_0] [i_0] = (!var_3);
                arr_6 [i_0] [i_1] [i_0] = (arr_3 [i_0 - 2]);
                var_15 = var_8;
            }
        }
    }
    #pragma endscop
}
