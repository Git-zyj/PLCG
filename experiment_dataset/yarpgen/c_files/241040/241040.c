/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 24;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] &= ((~(arr_0 [7])));
        var_14 = (min(var_14, ((((min((1 - 18446744073709551601), (((24 % (arr_0 [i_0])))))) % ((((((max(66, 66)))) - -1584049720))))))));
    }
    #pragma endscop
}
