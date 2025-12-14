/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((min((((255 / 30127665) | (arr_5 [i_1 - 1] [i_1 - 1] [i_0 - 2]))), (((arr_2 [i_0 + 1] [17]) * (max(var_3, (arr_4 [i_0] [i_0] [i_1]))))))))));
                var_15 = (3469097993 ? (min(((var_5 ? 31985 : var_2)), ((max(52177, (arr_5 [i_0] [i_1] [i_0])))))) : (((((1000 ? var_1 : var_8))) ? (((157 > (arr_1 [i_0])))) : (arr_2 [i_1 - 1] [i_1]))));
            }
        }
    }
    var_16 = (((~18446744073709551615) - (max(var_10, var_6))));
    var_17 = (min(var_17, (var_5 != var_9)));
    #pragma endscop
}
