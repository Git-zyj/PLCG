/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = 2305772640469516288;
        arr_2 [i_0] = ((((((arr_1 [i_0]) != (arr_1 [i_0]))))) == var_4);
        arr_3 [i_0] = ((121 | ((((((max(112, 156)))) >= 910103966)))));
        var_20 = (arr_0 [i_0]);
    }
    var_21 *= var_11;
    var_22 = (min(var_22, ((var_2 ? (((!((max(var_12, var_11)))))) : ((var_11 * (var_7 >= var_6)))))));
    #pragma endscop
}
