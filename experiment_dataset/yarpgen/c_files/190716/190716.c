/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((((max(3448227364, 1591938605646022517))) ? (-16854805468063529098 - 2755996335) : (((min(var_4, 16854805468063529099))))));
        var_15 = ((((min(-1, -var_5))) ? -var_8 : (((~((var_6 ? var_8 : 51644)))))));
        var_16 = min(((max(((68169720922112 ? var_0 : var_3)), var_3))), ((-6 ? ((var_11 ? 1591938605646022516 : var_4)) : -1)));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_17 = ((((~(min(18446675903988629497, var_13)))) & ((((((11497 ? var_5 : var_13))) ? (var_13 & var_13) : (var_14 || var_11))))));
        arr_6 [i_1] [i_1] = ((var_9 << ((((var_2 << ((8724355246384702214 ? 1 : var_6)))) - 1154793122))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((min(((6182 ? 8323072 : 5326185897075704681), ((var_7 ? -34 : 2582290960699439477))))));
        arr_11 [i_2] = (max(576460752303423487, var_0));
        var_18 *= ((~(((((var_13 ? var_11 : 6252741975746483163))) ? (~120) : var_4))));
    }
    var_19 = 8914700242917159863;
    var_20 = (~(~var_9));
    var_21 = (min(-var_12, ((var_13 ? var_1 : var_0))));
    var_22 = (((2147483647 & -59) && (((var_13 ? (~var_9) : (min(1591938605646022518, 15864453113010112139)))))));
    #pragma endscop
}
