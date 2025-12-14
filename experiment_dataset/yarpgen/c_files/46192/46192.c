/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((((!(11536648108580565787 > var_8)))));
    var_14 |= (!var_0);
    var_15 = var_7;
    var_16 = (~var_10);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = 255;
        var_18 = (min(var_18, var_9));
        arr_2 [5] [5] = ((4398046511103 ? ((-(arr_1 [i_0] [i_0]))) : ((~(arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = 4;
        var_19 = (15 % -29400);
    }
    #pragma endscop
}
