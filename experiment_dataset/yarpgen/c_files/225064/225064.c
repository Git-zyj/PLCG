/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [12] [8] = -0;
        var_12 &= ((!((min(-var_8, -var_4)))));
        arr_5 [i_0] = ((((((min(65529, (arr_0 [i_0])))) ? (-9223372036854775807 - 1) : -63))) ? 1 : -1241701780);
        arr_6 [i_0] = 2;
    }
    var_13 = var_4;
    var_14 *= (var_9 == 3549371313);
    #pragma endscop
}
