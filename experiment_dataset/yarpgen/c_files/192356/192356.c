/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_17 = (min(var_17, ((((arr_0 [10] [0]) >> ((((((arr_0 [i_0] [i_0]) | (arr_1 [1]))) >= ((~(arr_1 [17])))))))))));
    }
    var_18 = ((((max(var_5, var_2)))) ? ((var_10 ? var_13 : ((18446744073709551599 ? 0 : 427479459)))) : var_1);
    #pragma endscop
}
