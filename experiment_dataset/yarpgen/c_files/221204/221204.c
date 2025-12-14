/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] &= (max(-var_5, ((((arr_0 [i_0 - 2] [i_0 + 1]) >= 3)))));
        arr_3 [i_0] [i_0 - 4] = ((((var_5 <= (var_11 == -4))) ? (max(-11, (arr_0 [i_0 + 1] [10]))) : (!20609)));
        arr_4 [i_0] = ((-(max(var_11, 5481042206141276052))));
        var_16 = -var_9;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_17 = ((+((var_8 ? (20609 ^ 13003736783690596311) : (var_4 % -4)))));
        arr_7 [i_1] = (arr_6 [i_1] [6]);

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_1] [i_1] [i_2 - 1] = ((!((((arr_6 [i_1] [i_1]) - (min(var_0, var_4)))))));
            var_18 &= ((((((var_2 ? var_5 : var_13)) ^ (var_7 - 48))) ^ ((max((!8221520430656622500), (!207))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_19 &= var_3;
                            var_20 = (~((-(~var_2))));
                        }
                    }
                }
            }

            for (int i_6 = 4; i_6 < 21;i_6 += 1)
            {
                arr_19 [i_1] = (+-0);
                var_21 = (arr_12 [i_1] [i_2] [i_1]);
                arr_20 [i_1] [6] = ((+(((arr_12 [i_1] [i_2 - 2] [i_6]) & (-1 >= var_6)))));
                var_22 ^= (((min(3571734967, 20609))));
                var_23 = ((!((((((arr_8 [i_1] [i_1] [i_6]) - var_5)) & var_8)))));
            }
        }
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            var_24 = (max(var_24, (((((5922639788886014977 ? var_9 : -1791405140)) << (12477974553925196923 - 12477974553925196905))))));
            var_25 |= var_14;
            var_26 -= (max(174, 213));
        }
    }
    for (int i_8 = 1; i_8 < 14;i_8 += 1)
    {
        var_27 = ((((max(((240 ? var_3 : 0)), -5874279269480500462))) ? ((~(arr_8 [i_8 - 1] [i_8 - 1] [i_8 - 1]))) : ((((max(-20616, (arr_13 [2] [i_8] [i_8] [i_8])))) ? (~var_5) : (min(var_13, 13933250118031651311))))));
        var_28 = ((!((min((((arr_8 [i_8] [i_8] [i_8]) % 10253)), (-3715578859949156215 > -10253))))));
        var_29 = ((!((((~3251862789) >> (((arr_5 [i_8 - 1]) - 498384443)))))));
        var_30 = var_1;
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_31 *= (arr_29 [i_9] [i_9]);
        var_32 += (((-var_1 == (var_2 - var_3))));
        var_33 = min(2387902236354912230, (((~(!-32762)))));
    }
    var_34 = (~184);

    for (int i_10 = 1; i_10 < 17;i_10 += 1)
    {
        var_35 = (((-1160604535 | 14680064) ? ((max(199, 174))) : ((((arr_6 [i_10] [i_10]) <= (!-7452306964156713019))))));
        var_36 = (-7452306964156713019 ^ var_4);
        var_37 = (arr_9 [i_10] [i_10 + 2] [i_10 + 1]);
    }
    var_38 = ((228 && (((-(3251862789 ^ var_6))))));
    #pragma endscop
}
