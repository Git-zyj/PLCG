/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~16445505358368778186);
        var_16 |= (!var_7);
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) <= (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((2440145532 != var_4) ? ((((arr_5 [i_1]) ? (min(var_14, 3503964540)) : (((3503964543 ? 1 : (arr_5 [i_1]))))))) : (min(-6959844609567270064, 791002755))));
        arr_7 [i_1] = ((((3503964558 ? 3503964540 : 1)) ^ ((((arr_5 [i_1]) ? (arr_5 [i_1]) : 152)))));
        var_17 = ((((min((~var_8), (1 | 1)))) ? ((791002755 ? 377103212794109026 : var_4)) : (((511 ? (arr_4 [i_1]) : (arr_4 [i_1]))))));
        var_18 = (max(var_18, var_14));
        var_19 = ((+(((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_5 [i_1])))))));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2 + 1] = (max((arr_5 [1]), var_1));
        var_20 = (max(((((((arr_5 [6]) || 40975096)) ? (arr_4 [6]) : (((var_3 << (3703406819 - 3703406812))))))), (min((var_2 - var_5), (arr_5 [14])))));
        var_21 = ((var_9 ? (((var_10 + 2147483647) >> (arr_8 [i_2 - 1] [i_2 - 1]))) : 1));
        var_22 = (max(791002755, (arr_9 [i_2] [i_2])));
        var_23 = 1;
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_13 [i_3] = ((2047 ? 791002766 : 1));
        arr_14 [14] = (1 < 791002753);
        var_24 = 791002769;
        var_25 = ((var_3 ? var_2 : 16096234797600049913));
        arr_15 [i_3] [i_3] = var_7;
    }
    var_26 &= ((min((max(1, var_2), var_5))));
    #pragma endscop
}
