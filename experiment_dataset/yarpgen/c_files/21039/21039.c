/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_8, -2085907094711146018))) && ((-5122916047608691652 != (max(var_18, -5122916047608691632))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_21 = var_1;
            var_22 ^= -21594;
            arr_7 [i_0] [i_0] [i_0] = -5122916047608691652;
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_23 -= ((!(1 || 5122916047608691632)));
            var_24 = (((~var_15) ? var_8 : ((-10991 ? -5122916047608691651 : 5122916047608691650))));
            var_25 = (((arr_4 [i_0]) ? 2085907094711146018 : -636918876));
            var_26 = (((arr_3 [i_2] [i_2]) && 32762));
        }
        var_27 = 2085907094711146007;
    }
    var_28 = (((((-(11944 % var_10)))) ? ((((min(0, 1018788590505968648))) ? 1761720835113030495 : ((max(var_5, var_14))))) : var_16));
    #pragma endscop
}
