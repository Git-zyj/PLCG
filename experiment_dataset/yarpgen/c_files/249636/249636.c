/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (min(((18446744073709551613 ? -7358551297830338048 : -1144834570929000598)), (((!-121) | ((8896035376946434143 - (arr_1 [i_0] [i_0])))))));
        var_18 += var_2;
    }
    var_19 = var_14;
    #pragma endscop
}
