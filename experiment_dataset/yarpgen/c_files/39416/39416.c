/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 9204606441653254136;
    var_19 = (((((-var_16 << (var_16 - 4110198388)))) <= ((-2895145307234581430 ^ (var_2 != -9204606441653254126)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (max(((-(2147483647 + 16467672912266263722))), ((max(1243015784548690982, (min(9204606441653254136, var_0)))))));
        arr_4 [i_0] = (((1979071161443287893 ? -5484174958003503932 : (max(var_6, -1243015784548690982)))));
        var_21 = ((-((13396 ? 18014398509481983 : 9204606441653254125))));
        arr_5 [i_0] = (((3840 && 9204606441653254125) ? ((max(32767, 32764))) : (max(var_1, 69))));
    }
    var_22 = (((20 / ((65535 ? 1243015784548690981 : 1)))));
    #pragma endscop
}
