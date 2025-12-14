/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (var_11 % (max(((121 ? 1983878463 : 44)), var_3)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = ((max((min((arr_0 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = (((~-2666184443494109745) ? (max((~-6277383971544302344), -6277383971544302344)) : (((((min(135, -7479156017921232322)) > 1170362734))))));
    }
    #pragma endscop
}
