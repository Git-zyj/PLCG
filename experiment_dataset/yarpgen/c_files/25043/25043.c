/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max(var_19, ((min(var_12, var_9))))), (((var_1 >> (-var_12 + 37))))));
    var_21 ^= var_2;
    var_22 *= var_11;
    var_23 = (min((max(-var_1, (64 - var_15))), (-24902 != var_5)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = (min(417888817869069252, (max((((~(arr_3 [i_0] [i_0])))), var_11))));
        arr_5 [i_0] = -59606763;
    }
    #pragma endscop
}
