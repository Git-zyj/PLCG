/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_17 = (~152);
        var_18 = (!var_1);
        arr_3 [i_0 + 3] = (((((152 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0])))) ? var_14 : (arr_2 [i_0 + 1])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_19 = (((((150 ? 7073896749061260847 : var_9))) ? ((max(16176, 105))) : -1698566631));
        arr_7 [i_1] = ((~(111 | 255)));
    }
    var_20 = (max(var_20, (((((1698566630 ? (-8722 >= 153) : 113)) < -1698566631)))));

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_21 = arr_8 [i_2];
        var_22 = ((-700103314 ? -119 : (max(-67108864, 0))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_12 [i_3] = 4294967295;
        var_23 |= 700103315;
        var_24 = (min(var_24, ((((55061 + 91) ? 2908404118732689972 : (118 | 1))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_25 = ((!((38058 || (arr_14 [i_4] [i_4])))));
        arr_15 [i_4] = ((-36 ? (arr_14 [4] [4]) : 16993506311668174967));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = 15;
        arr_19 [i_5] = ((~(((arr_17 [i_5]) | (-1101881521 ^ 0)))));
        arr_20 [i_5] = (arr_16 [i_5] [i_5]);
    }
    var_26 = ((var_8 ? ((((var_10 ? 164 : -8323479335702672148)))) : ((var_3 ? var_10 : var_3))));
    var_27 ^= (max(17655650309567338689, (((var_8 << (((var_11 * var_9) - 5213693543504887959)))))));
    #pragma endscop
}
