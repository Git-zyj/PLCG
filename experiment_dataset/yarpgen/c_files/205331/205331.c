/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((var_7 ? ((var_8 ? 15821562813356823721 : (39547 < var_4))) : 222));
    var_16 = (max(222, 15821562813356823713));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (min(var_17, (min(((min((arr_0 [i_0]), -9004013743694538913))), (((arr_0 [i_0]) ? (arr_1 [i_0]) : 1392693803))))));
        arr_2 [1] [i_0] = (((max((arr_1 [i_0]), var_3)) == ((536805376 ? ((var_5 ? 2625181260352727894 : 0)) : (var_9 >= 34)))));
        var_18 ^= var_14;
    }
    #pragma endscop
}
