/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_4 % -53);
    var_17 = (((--52) ? var_9 : ((53 ? 57 : ((min(14285, 32)))))));
    var_18 += ((((((77 ? 53 : var_8)))) ? (((64338 ? (1929313992 == -43) : ((8 ? 41 : var_14))))) : (!var_11)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = ((!((((arr_0 [i_0]) << 3)))));
        var_20 = 1053578692;
    }
    #pragma endscop
}
