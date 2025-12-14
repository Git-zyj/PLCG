/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 15));
    var_16 = var_11;
    var_17 = (-1819440959861498143 ? 1 : 0);
    var_18 -= var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 += ((0 << (255 - 228)));
        var_20 |= 62;
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_21 = (((max(50625, (arr_3 [i_1 + 1] [i_1 + 1])))) ? (((arr_3 [i_1 + 1] [i_1 + 3]) - 14911)) : ((((!(arr_3 [i_1 + 2] [i_1 + 3]))))));
        var_22 |= ((!((((arr_2 [i_1]) ? var_0 : -300727830)))));
        var_23 += (((~var_6) ? 50639 : var_4));
        var_24 = (max(var_24, var_10));
    }
    #pragma endscop
}
