/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = ((-(((arr_1 [2]) + ((-1899368326 ? 114 : (arr_1 [i_0])))))));
        var_18 = (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_19 += (~12);
            var_20 = (min(141, 141));
            var_21 -= ((1152921504606846720 ? (((((arr_2 [i_1] [7]) < var_2)))) : (max((arr_0 [i_0] [i_1]), 33))));
            var_22 = ((-(var_4 < 32767)));
            var_23 = ((-(max((arr_0 [i_0] [i_1]), ((-651750903890765024 / (arr_0 [i_1] [i_0])))))));
        }
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_6 [i_2] |= (((var_12 ? (var_16 != var_16) : -51449)));
        var_24 = min((arr_5 [i_2] [i_2]), (max(((var_14 << (1529406549 - 1529406536))), (arr_4 [i_2] [i_2]))));
        arr_7 [i_2] = ((114 << (min(((var_16 ? (arr_4 [i_2] [i_2]) : 2147483647)), ((((arr_4 [13] [7]) == 51449)))))));
        var_25 = (((((max(3361, 1429657331)) ^ ((63 ? (arr_5 [i_2] [i_2]) : 52540)))) | (((((arr_5 [7] [i_2]) ? 65512 : 32779)) * ((var_5 ? var_13 : var_3))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((~(arr_9 [i_3])));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_26 &= var_12;
            arr_16 [i_3] [i_3] = 188;
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_27 &= ((-28 + 9223372036854775807) << (((-2147483646 > (min(var_16, 127))))));
            arr_20 [i_3] [i_3] = (((((~((var_9 | (arr_10 [22] [i_3])))))) ? (~var_5) : (max((~-2147483646), (arr_9 [i_3])))));
            var_28 = (min(var_28, (-663305646 < 1249350282)));
        }
        var_29 = (min(var_29, 141));
        var_30 *= var_6;
        arr_21 [i_3] [23] = 51449;
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] = (var_4 && -651750903890765024);
        var_31 = (~127);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                {
                    var_32 = (max(var_32, ((((-64 - 24657) == ((var_5 ? (188 > 7711688907114302870) : 97)))))));
                    arr_32 [i_8] = (((((((var_4 == 1457358216) ? ((13374 ? 7286868101614793811 : var_14)) : ((((arr_8 [i_6] [17]) ^ (arr_22 [i_6] [i_7])))))) + 9223372036854775807)) >> ((0 / (arr_31 [i_6] [i_7] [i_8])))));
                    var_33 = ((~(((!var_0) - (max(var_14, (arr_8 [14] [i_7])))))));
                    var_34 *= ((((max(((34918 ? var_5 : (arr_27 [9]))), 65535))) ? ((((((((arr_9 [i_7]) ? 255 : (arr_30 [i_6] [i_7] [i_8])))) && 651750903890765015)))) : (((arr_28 [i_8 + 3] [i_8 - 3] [i_8 - 3]) ? var_14 : (arr_28 [i_8 + 3] [i_8 - 3] [i_8 - 3])))));
                }
            }
        }
    }
    var_35 = (min(158, (((((max(-497209738, var_6))) && (((var_13 ? var_5 : 6071120590176050532))))))));
    #pragma endscop
}
