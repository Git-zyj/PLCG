/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += 32767;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (min(var_19, (((!(arr_0 [i_0] [i_0]))))));
        var_20 = (max(var_20, ((max(0, ((-1262699981 ? 2048576014 : 1262699980)))))));
        var_21 = ((((-((var_5 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))))) ? (-2048576014 | -1262699981) : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (max((arr_0 [i_0] [i_0]), 8933344814678454541)))));
    }
    var_22 = (max((--870426699), var_13));
    #pragma endscop
}
