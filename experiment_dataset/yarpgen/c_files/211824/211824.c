/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_0]);
            var_21 *= (arr_4 [i_0]);
        }
        arr_6 [i_0] [i_0] = (!(((((min(var_9, -8931))) ? (((0 ? 104 : 65514))) : ((16734619945571657647 ? -71 : (arr_3 [i_0] [i_0])))))));
    }
    var_22 = (max(var_22, 18446744073709551611));
    #pragma endscop
}
