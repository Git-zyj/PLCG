/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((((min((2147481600 - var_5), ((max(var_1, (arr_1 [i_0 + 1] [i_0]))))))) ? var_5 : (min((((var_4 ? (arr_1 [i_0] [i_0]) : -2147481600))), (min(var_0, var_10))))));
                var_14 = (arr_1 [i_0 + 1] [i_0]);
            }
        }
    }
    var_15 = ((((((var_12 ? 2147481583 : 10031)))) / (min((min(var_4, 2147481595)), var_1))));
    var_16 -= var_4;
    var_17 = var_10;
    #pragma endscop
}
