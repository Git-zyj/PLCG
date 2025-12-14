/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = var_4;
        var_19 = -621969342;
    }
    var_20 -= (((((621969369 == 18446744073709551615) != var_14)) ? var_3 : var_9));

    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        var_21 = (min((var_1 || 2803), (621969357 || var_12)));
        var_22 = -2792;
        var_23 = (((0 ? 9 : 8742584901151261240)));
        var_24 = (min(var_24, (((!((((((-621969378 ? var_16 : 1))) ? (15210161930734922928 > 1574870116227910877) : (var_8 / var_17)))))))));
        var_25 = 17952352047687152918;
    }
    #pragma endscop
}
