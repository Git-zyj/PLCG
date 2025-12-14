/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (max(var_10, (((~(((33521664 ? 7927 : 852925711))))))));
        arr_4 [i_0] [i_0] = 2147483647;
        arr_5 [i_0] = var_8;
        var_11 = (min((((var_2 && (((var_2 ? 4194304 : var_5)))))), ((var_4 << (min(0, var_0))))));
        var_12 = (((((122 || 63) ? -1261148955 : ((var_7 ? -870749539 : var_4)))) > (((~var_1) ? (!-1241538877) : var_8))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_13 = ((1241538897 && (((var_1 ? var_5 : 1827255155)))));
        var_14 = var_8;
        var_15 += (((126 ? var_3 : 0)));
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_16 = var_3;
        var_17 = var_8;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_18 = ((var_8 ? -var_3 : ((13731 ? var_8 : var_4))));
        arr_13 [i_3] [i_3] = var_3;
        arr_14 [i_3] [i_3] = (0 || 1);
        var_19 = (!32764);
    }
    var_20 = ((~(((209 & var_7) << (var_3 - 857728382)))));
    var_21 &= (max(var_5, var_2));
    var_22 = ((!((var_0 || ((max(-116, var_0)))))));
    #pragma endscop
}
