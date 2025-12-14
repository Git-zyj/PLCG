/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((((var_16 >> (var_6 - 39))))), (max(var_1, var_3))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0]) && ((((arr_0 [i_0] [i_0]) >> (var_0 - 8566))))))) != (arr_1 [i_0])));
        arr_3 [i_0] = ((~(!30825)));
        arr_4 [i_0] |= ((var_7 + (11057893100219411405 + 47)));
        arr_5 [12] = var_7;
    }
    #pragma endscop
}
