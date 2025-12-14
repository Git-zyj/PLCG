/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_7;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_11 = (min(var_11, ((max(var_6, (13950444311509614009 & var_0))))));
            var_12 = (((min(((min((-9223372036854775807 - 1), 3751146773))), ((var_7 ? var_9 : var_2)))) < 1));
            var_13 += (6891711712108921355 / var_1);
        }
        arr_6 [i_0] [i_0] = var_9;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (min(((((min(var_7, var_8))) ? (((1 ? 512126422 : var_2))) : (min(3986150386655515525, -3525962015370554624)))), 59));
        arr_10 [i_2] [i_2] = var_6;
        var_14 = min(var_5, var_2);
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            var_15 = (max(var_15, (((var_8 ? var_6 : 3299087375289607611)))));
            var_16 = (max(var_16, 536854528));
            arr_16 [i_3] [i_3] = (3412574721 | var_9);
        }
        var_17 = (0 / 24);
        arr_17 [i_3] |= ((max(2, var_3)));
    }

    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_18 = min((max(1855396308, ((var_0 ? var_9 : var_2)))), (min(var_1, (max(var_1, 255)))));
        arr_20 [i_5] [i_5] = (min(var_8, 1));
        arr_21 [i_5] = (max((2418921017 / var_3), var_4));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = ((var_4 ? 1 : ((6891711712108921355 ? 908261395 : var_9))));
        arr_25 [i_6] = 1;
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] = var_3;
        arr_30 [i_7 - 1] = (min(((min(var_0, var_5))), var_4));
    }
    var_19 ^= (((((1 ? 11555032361600630260 : (max(2184484948603401480, var_0))))) ? ((min(1, 6451502699781406473))) : (min(var_8, var_9))));
    #pragma endscop
}
