/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 ^= ((((min((arr_1 [i_0]), (!var_10)))) ? ((min(1, -59))) : ((max((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((((~(min(51766, 13946800256540030934)))) <= (arr_2 [i_0])));
    }
    var_17 = (min(var_17, (((~((min(-13730, -63))))))));
    #pragma endscop
}
