/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((25966 ? (max((min(-3541840153403578289, 1939956720)), ((((arr_1 [i_0] [i_0]) ? 1552003285 : 168))))) : ((((((var_17 ? (arr_0 [i_0]) : 8616624262080787380))) ? -1939956721 : (min(var_17, var_0)))))));
        arr_3 [i_0] = (((var_7 && 12085583587789262198) & (~946482985)));
        arr_4 [i_0] [i_0] = ((!(!var_9)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_19 -= (~9830119811628764245);
        var_20 = ((~(~-3922221908174582861)));
    }
    var_21 = var_0;
    var_22 = ((var_9 ? (((((var_14 << (var_5 - 34)))) ? var_2 : var_17)) : (((~(!var_10))))));
    #pragma endscop
}
