/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = (max(15, (max(((30 ? var_7 : 226)), (((225 ? 4 : 40)))))));
        arr_2 [i_0] = 2147483630;
        arr_3 [i_0] = (((((29 ? 4290539927 : 225))) ? 122 : ((20 ? (((3 ? 0 : 252))) : 3873140111755528194))));
    }
    var_12 = (min(var_12, -20));
    var_13 = (max((((((-40 ? 225 : var_10))) ? var_0 : (((551762819 ? 4290539903 : 96))))), 4294967295));
    var_14 -= var_8;
    #pragma endscop
}
