/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_10 = (6525 < 7);
        var_11 = (((((32736 ? 2485196067 : -6050682023730156008))) ? (arr_1 [i_0]) : ((max(1809771229, 1809771234)))));
        arr_3 [i_0] = ((((((arr_2 [i_0 + 1]) ? (min(var_5, 1)) : var_9))) == (0 % -898612422)));
        arr_4 [0] &= ((max(((var_8 && (arr_2 [i_0]))), ((2600945716 && (arr_2 [i_0 + 1]))))));
    }
    var_12 = (((((((!80) || (1 ^ var_5))))) % ((var_9 ? (min(6665582407560326930, 57220)) : var_7))));
    #pragma endscop
}
