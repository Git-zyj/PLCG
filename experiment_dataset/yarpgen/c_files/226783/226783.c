/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (120 == 268435448);
    var_18 ^= (max((max(var_3, var_11)), var_3));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_19 = (((((arr_2 [i_0 - 1]) - var_3)) + (arr_2 [i_0 + 1])));
        var_20 = arr_3 [i_0] [i_0];
        arr_4 [i_0 + 1] = (min(var_14, 2497795496105049339));
        var_21 = ((((((arr_2 [i_0 - 1]) << (((min(3684773804, var_9)) - 2436166998))))) ? ((var_9 ? (((1 ? (arr_1 [i_0]) : 1))) : (((arr_0 [i_0 + 1]) | 16772865110118624471)))) : (((((max(2416585879, var_5))) ? (arr_0 [i_0 + 1]) : (arr_3 [i_0 - 1] [i_0]))))));
        arr_5 [i_0 - 1] [i_0 - 1] = var_9;
    }
    var_22 = var_2;
    #pragma endscop
}
