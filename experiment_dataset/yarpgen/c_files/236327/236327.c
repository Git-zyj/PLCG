/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((-((((max(var_8, -853676668))) ? var_14 : ((9119 ? 4919 : var_3)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 ^= (((((var_7 ? 86 : var_4))) ? var_11 : 4931));
        var_17 = ((((16865594767057863158 ? (arr_1 [i_0]) : (arr_1 [i_0]))) != ((13 ? -75 : var_4))));
        var_18 *= ((7787 << (-2092089919 + 2092089930)));
    }
    var_19 = (((((1581149306651688457 ? ((-92 ? 1581149306651688458 : 2092089919)) : (((54934 ? 40982 : 3485388780090989807)))))) ? 17130433605328122305 : (((((1 / 4480150716736342991) == 1749242817))))));
    #pragma endscop
}
