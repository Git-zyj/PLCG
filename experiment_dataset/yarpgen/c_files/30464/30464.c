/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((1306 & 1306) ? var_2 : (((~var_9) & (var_0 | var_6)))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_14 = ((((min((33981 + 31565), (72 + 64249)))) < (min((var_0 == var_5), ((var_8 ? var_8 : var_3))))));
        var_15 = (min((~var_3), -var_1));
        var_16 = ((((!(var_10 < 1306))) ? (((~var_5) ^ (var_3 | var_0))) : (((((var_7 || var_6) || (((111 ? 111 : 5240567184628658632)))))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_17 = ((var_9 - (((-(var_5 != var_11))))));
        var_18 |= ((1286 ? 1949804599086262605 : 252));
    }
    #pragma endscop
}
