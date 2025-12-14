/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_17, (1 * 1)));
    var_19 = (((((1 | 1) ? 7607700892508131391 : (212 || 27216))) == 1));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        var_20 = (max(var_20, ((((arr_0 [4] [i_0]) ? 27230 : ((1 ? -66 : 1)))))));
        var_21 += (arr_1 [8]);
        var_22 = (arr_0 [i_0] [5]);
        var_23 = ((((((arr_1 [i_0]) != 66))) * (-63 / 16542)));
        var_24 &= (arr_0 [5] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        var_25 = 1;
        var_26 = (((((38320 ? (arr_4 [24] [i_1]) : (arr_3 [i_1] [i_1])))) ? ((22 ? 1 : 255)) : (7655012162465801501 == 15977)));
        arr_5 [i_1] = (((arr_3 [i_1] [i_1 - 4]) / (arr_4 [i_1] [i_1])));
        arr_6 [i_1] = (-3937270766411745117 > 1);
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_27 = ((((((arr_4 [i_2 - 1] [i_2]) ? (arr_2 [i_2]) : (arr_7 [5])))) ? (((255 ? (arr_7 [i_3]) : (arr_8 [i_2 - 1] [i_3])))) : (((arr_10 [i_2] [19] [i_3]) / 2097113655))));
            var_28 -= (arr_8 [i_2] [i_2 - 2]);
        }
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            arr_13 [i_2] = (arr_11 [i_2 + 1] [i_2 + 1] [i_4]);
            var_29 = (((((1 ? (arr_7 [5]) : (arr_4 [i_2] [i_2]))) * ((((arr_3 [i_2] [i_4]) ? 1 : (arr_7 [i_4])))))) / (arr_2 [i_2]));
        }
        arr_14 [i_2] = (arr_4 [i_2 - 2] [i_2]);
        arr_15 [i_2] = (min((arr_7 [i_2]), 10237));
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        arr_18 [0] [i_5 - 2] = (max(((-15977 ? (5501762822423006777 * 8988765757167499483) : (arr_17 [i_5 + 1] [i_5]))), (1 / 1)));
        arr_19 [i_5] = 1;
    }
    #pragma endscop
}
