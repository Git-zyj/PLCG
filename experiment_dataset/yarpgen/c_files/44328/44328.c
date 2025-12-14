/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = min((((~var_10) ? (((arr_0 [i_0]) ? 32393 : var_8)) : -33142)), (~33123));
        var_20 = 33150;
        var_21 = 248;
    }
    var_22 = (min(((min((!8), (max(var_4, -5826369125843642524))))), (max(2251799813685248, (((var_11 ? 32412 : 8521385354411566739)))))));

    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_1] = (24232 ^ 1);
            var_23 &= ((var_3 ? 33121 : 2130881908773177030));
            arr_9 [i_1] = (((arr_7 [i_2 + 2] [i_2 + 2] [i_2 - 2]) / (((arr_7 [i_2 + 2] [i_2 + 1] [i_2 - 2]) / var_6))));
            var_24 -= 13154;
        }
        arr_10 [i_1] = 1064561953;
        var_25 = (min(var_25, ((!(((var_13 ? (arr_1 [i_1] [i_1]) : var_3)))))));
        arr_11 [i_1] = ((13160 >> (((max((((33123 >> (var_13 - 4169630435343534356)))), (((arr_7 [3] [3] [i_1]) ? 16949999333032707293 : (arr_1 [i_1] [i_1]))))) - 16949999333032707272))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_26 = (max(var_26, -13155));
        arr_14 [i_3] = var_16;
        var_27 = ((~((127 ? var_8 : (arr_3 [5] [i_3])))));
        var_28 = 1;
    }
    var_29 = -13155;
    #pragma endscop
}
