/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((98 ^ -521948647853483087) ? -115 : ((var_13 << (var_13 - 3586038552))))) < var_5));
    var_17 = var_10;
    var_18 = var_6;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_19 = (((!65535) ? (((max((var_11 > var_14), var_3)))) : (arr_2 [i_0] [i_0])));
        arr_3 [i_0] = var_12;
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] = ((((arr_6 [i_1 - 3] [i_1 + 2]) ? (arr_6 [i_1 + 3] [i_1 - 1]) : -97)) >= (arr_6 [i_1 - 3] [i_1 - 3]));
        var_20 = (((max(var_1, var_1))) ? 139 : ((((var_4 <= 1) < (arr_6 [i_1] [i_1 + 3])))));
        arr_9 [i_1 - 2] [i_1] = (arr_6 [i_1] [i_1]);
    }
    #pragma endscop
}
