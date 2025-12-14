/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_19 = (min(((var_14 ? 10329918876736335043 : var_1)), 2251799812636672));
        var_20 = ((113 ? 2251799812636686 : 28346));
        var_21 = ((((((~var_14) ? (((arr_2 [i_0] [i_0]) ? 43716 : var_12)) : var_9))) ? 37189 : 4033));
        var_22 = (max(var_22, (((((min(var_4, (arr_0 [i_0 - 2] [i_0 - 1])))) * (((((var_12 ? var_3 : var_13))) ? (((arr_1 [13]) ? 10691362217121056294 : var_0)) : (~var_14))))))));
    }
    var_23 -= var_17;
    var_24 = ((((var_6 ? var_4 : (var_14 * var_15))) >= ((((((min(37189, var_0))) >= -var_0))))));

    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_25 = (min(var_25, ((((((((((var_1 != (arr_5 [i_1])))) * (~var_9))) + 2147483647)) >> (((!(-32767 - 1)))))))));
        var_26 = (min((((((var_9 >> (var_17 + 13287)))) ? -3856001261 : var_9)), ((-(-4029 * 1543351679)))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_27 = (arr_5 [i_2]);

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_28 = ((32711 ? -2848910484690098601 : -2251799812636672));
            var_29 = (min(var_29, var_13));
        }
        var_30 = (max(var_30, (((1 & (((!4005257522) % ((max((arr_7 [i_2]), (arr_8 [i_2] [i_2] [i_2])))))))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_31 += ((((var_4 | (((2251799812636671 ? var_18 : -661710591)))))) ? (!var_15) : ((+((((-32767 - 1) >= 21833))))));
        var_32 = (((arr_5 [i_4]) ? (min((var_3 | -109230106), ((var_4 ? 185076439343452856 : var_2)))) : (((((var_14 ? 1 : var_17)))))));
        var_33 = (((((~2251799812636664) ? (max(var_2, var_17)) : var_1)) | 40487));
    }
    var_34 = ((((((var_16 / var_12) ? -var_5 : 1))) ? var_1 : 168));
    #pragma endscop
}
