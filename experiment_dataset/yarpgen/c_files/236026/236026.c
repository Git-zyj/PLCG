/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (!var_3);
        var_12 = var_6;
        var_13 = ((-(3159730917 > -1487337115)));
        arr_4 [i_0] = ((-(((arr_3 [i_0] [i_0]) - 4164195223))));
    }
    var_14 = var_7;

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = var_5;
        arr_8 [i_1] = (max((max(var_6, (arr_0 [i_1]))), (((var_0 - (arr_6 [i_1]))))));
    }
    var_15 = (min(var_8, ((((min((-32767 - 1), var_5))) ? var_3 : (max(-1487337115, var_8))))));
    #pragma endscop
}
