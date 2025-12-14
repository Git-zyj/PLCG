/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((((var_10 ? 17857465995041346180 : var_9)) + var_2)), (var_13 - var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = ((var_4 ? (-24496 % var_0) : ((((var_6 <= (arr_1 [1])))))));
                var_22 = (((((((max((arr_0 [i_0] [i_1 + 1]), (arr_4 [i_1 + 1] [i_1] [i_1 + 1])))) | ((3042253301 ? (arr_2 [i_0] [i_1 + 1]) : var_16))))) ? ((((min(-1898424272, var_14))) ? (((arr_1 [i_1]) ? (arr_1 [i_0]) : var_7)) : ((((arr_4 [i_0] [i_0] [i_1]) | var_18))))) : ((var_7 ? 32852 : (arr_3 [i_1 - 1] [i_1 - 1])))));
                var_23 = ((((max((arr_3 [i_0] [i_0]), (arr_4 [i_0] [i_1] [i_1 - 1])))) ? (~var_18) : ((var_17 / (arr_4 [i_0] [i_0] [i_1 - 2])))));
            }
        }
    }
    var_24 = ((((max(32866, (max(var_15, var_16))))) ? (min(7092062920315524601, var_18)) : var_16));
    #pragma endscop
}
