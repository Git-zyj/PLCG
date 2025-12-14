/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [5] = (min(26, -1202075212427327009));
        arr_3 [0] [i_0] = (((((-1202075212427327025 <= (arr_0 [i_0 + 2]))))) - (((arr_1 [i_0]) ? (min(1202075212427326996, 0)) : 66)));
        arr_4 [i_0] [i_0] = max((((arr_0 [i_0 - 1]) ? 121 : var_6)), var_6);
        arr_5 [i_0] = ((min((max(var_10, (arr_0 [i_0 + 2]))), 18446744073709551598)));
    }
    var_12 = min(var_7, (min(var_10, (7196226101236970240 - 93))));
    var_13 = ((max(44, var_4)));
    var_14 &= -1202075212427326984;
    #pragma endscop
}
