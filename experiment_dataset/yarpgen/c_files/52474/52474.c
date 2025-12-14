/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_3;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [5]);
        arr_3 [i_0] = (((((((16 ? 0 : 3179091706)) * (!var_11)))) >= (min(((168192389 ? 18446744073709551615 : 115777015)), (arr_0 [i_0 - 1])))));
    }
    #pragma endscop
}
