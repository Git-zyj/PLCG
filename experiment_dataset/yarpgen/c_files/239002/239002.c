/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((-7677544301554247574 > (~63283))) ? 2514869768253036319 : (~0));
        var_18 = (max(var_18, ((6853771295218856611 ? 4294967287 : ((-var_14 ? 11592972778490695005 : -22886))))));
        arr_3 [i_0] = (((7 ^ var_11) * (63283 / 8350795072819758104)));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = (-1 + -var_0);
        var_19 = ((((!var_7) <= 8393212600817882435)));
        var_20 = (((!(((42418 ? var_17 : 16170))))));
    }
    var_21 = max((max((max(var_17, var_5)), 17003419437839887566)), var_17);
    var_22 = (max((((32 ? 23123 : 22893))), ((var_12 ? 41194 : 6853771295218856600))));
    var_23 |= 154;
    #pragma endscop
}
