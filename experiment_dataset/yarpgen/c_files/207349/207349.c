/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_1 & var_7);
    var_19 ^= var_7;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (((!var_10) ? 8813 : (max(350612036, var_0))));
        arr_2 [i_0] = ((var_12 ? (arr_0 [1] [0]) : 0));
        var_21 = (max(var_21, (((((min(((var_0 ? 10389 : 23)), ((((arr_0 [0] [0]) == (arr_0 [0] [i_0]))))))) || (arr_1 [i_0] [i_0]))))));
        var_22 = (min((max(-1970257699, 54)), 154));
        arr_3 [i_0] [i_0] = 2027361284;
    }
    #pragma endscop
}
