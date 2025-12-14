/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((-27971 ? var_2 : var_3))) << ((-((min(var_5, var_4)))))));
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((((((1335219459 ? var_11 : (arr_3 [i_0] [1] [i_0]))) + ((1 & (arr_0 [3])))))) ? (((min(var_14, 32767)))) : (min((((var_4 == (arr_5 [11] [i_0] [i_0])))), var_4)))))));
                var_18 = (((((!((max(var_8, (arr_0 [i_0]))))))) >= ((max((max(-4638, (arr_1 [i_1]))), (arr_3 [i_0] [i_1 + 1] [i_0 - 1]))))));
            }
        }
    }
    var_19 = ((((((var_13 ? var_8 : var_9)) / -32767)) ^ 32766));
    #pragma endscop
}
