/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min((min((0 <= 0), (max(var_8, var_3)))), var_2)))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_4 [3] [i_0] = (min(((max((((-870950735 && (-32767 - 1)))), var_7))), (((var_3 > var_0) ^ 65535))));
        var_11 = var_3;
        var_12 = var_7;
        var_13 = (min(var_13, ((max(var_7, ((-65532 ? (max(2147483647, var_7)) : ((var_4 ? 7 : 206)))))))));
        var_14 = (((~(arr_3 [5]))));
    }
    var_15 ^= var_8;
    #pragma endscop
}
