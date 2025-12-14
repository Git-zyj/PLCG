/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [12] = ((arr_1 [i_0] [i_0]) ? ((var_3 ? 18672 : (arr_1 [i_0] [i_0]))) : (!147170100256225827));
        arr_5 [i_0] = ((((((arr_1 [12] [i_0]) ? var_0 : (arr_1 [i_0] [i_0])))) ? (((min(5, -15)))) : (min(18446744073709551615, 2147483641))));
    }
    var_10 = (min(var_10, var_3));
    var_11 = (min(4465, 61071));
    var_12 -= (!var_4);
    #pragma endscop
}
