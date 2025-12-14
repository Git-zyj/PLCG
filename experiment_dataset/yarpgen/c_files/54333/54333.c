/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = ((!(18446744073709551615 != 1965148876)));
        var_21 += ((11 ? -11 : 11));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = (((arr_0 [i_1] [i_1]) ^ (7 > 20)));
        arr_7 [i_1] [i_1] = (arr_0 [3] [i_1]);
        var_23 = max((max((min(-10, (arr_5 [i_1] [i_1]))), (arr_4 [i_1]))), (28 >= 1));
        var_24 ^= (((50526 / var_6) && (((arr_2 [i_1] [i_1]) >= (arr_5 [i_1] [i_1])))));
    }
    var_25 -= (!var_11);
    #pragma endscop
}
