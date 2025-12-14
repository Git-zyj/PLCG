/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_16 ^= ((-15997 ? (min(((13478 ? -694215059535093415 : 7436447750369318877)), ((min(15, var_6))))) : 11810));
        var_17 &= (max(15218, 31));
        arr_2 [i_0] = -15;
        var_18 = (min(var_18, ((((1 + 32256) >= ((4 ? var_10 : 1)))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_5 [1] = (var_10 ^ ((~((15218 ? 10043886527473668688 : 53714)))));
        var_19 += (((6857650644198409228 + 0) ? 0 : ((var_7 ? 32256 : 600854796))));
        arr_6 [i_1] = ((~(((!(2407972764 ^ var_13))))));
        arr_7 [i_1] = ((0 ? 15 : 22));
    }
    var_20 = 614978526;
    #pragma endscop
}
