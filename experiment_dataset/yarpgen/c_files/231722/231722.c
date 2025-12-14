/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = (max(var_17, (((((154 ? 958130859 : var_4)) * var_13)))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_18 = (min(var_18, (((-958130877 ? var_8 : -1046537533)))));
                arr_8 [15] [15] = 202;
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {

                for (int i_4 = 4; i_4 < 17;i_4 += 1)
                {
                    var_19 += (((arr_1 [i_0 + 1] [i_0 + 1]) | var_11));
                    var_20 = ((-5000850702932023694 * (var_10 >= var_11)));
                    var_21 = -41616;
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_22 = (max(var_22, -var_10));
                    var_23 = (min(var_23, 223));
                    var_24 = -17;
                }
                var_25 += (arr_2 [18] [i_1]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_22 [i_0 + 1] [i_0 + 1] [i_3] [i_3] [i_7] [i_0 + 1] = (((var_14 ? 53486 : var_13)) >= 1);
                            var_26 ^= (((arr_11 [i_0 + 1] [i_1] [i_0 + 1] [1]) ? (var_2 && var_14) : 1));
                        }
                    }
                }
            }
            for (int i_8 = 3; i_8 < 20;i_8 += 1)
            {
                var_27 = (((((12486766873814352726 ? var_2 : 1))) ? 1 : ((var_0 ? -9223372036854775787 : 1997289802))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_28 = (-32755 + 224468394);
                            arr_32 [i_0] [i_0 + 1] [i_0 + 1] = var_6;
                        }
                    }
                }
            }
            arr_33 [i_0 + 1] [i_0 + 1] &= (-24828 | 1);
            var_29 -= ((((var_10 ? var_15 : var_4)) % (var_10 - var_6)));
            arr_34 [i_1] = (arr_14 [i_0 + 1] [i_0 + 1] [i_1] [6]);
        }
        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {
            var_30 = -20646;
            var_31 += (var_4 >> var_1);
            var_32 += ((((((arr_7 [i_0] [i_0 + 1]) * 1))) ? var_10 : (arr_31 [i_11 - 2] [i_11 + 1] [i_11 - 1] [18] [i_11 - 2])));
            var_33 -= ((-54473 ? var_13 : 2111997933587297469));
        }
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            var_34 &= ((var_5 ? (((((arr_7 [i_0] [i_12]) && -33)))) : var_9));
            arr_42 [i_0] &= (~var_12);
        }
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 12;i_13 += 1)
    {
        arr_47 [i_13 - 1] = (arr_21 [i_13 - 1] [i_13] [i_13 - 1] [i_13] [i_13 - 1] [i_13]);
        var_35 += (~5325304512893089182);
    }
    var_36 = ((((((var_10 ? 4294967286 : 1)) ^ ((1 ? 958130851 : 62241953)))) % var_16));
    var_37 += max((((~var_0) - ((-16454 ? var_8 : 1284751762)))), ((((var_2 == 170) || (((var_8 ? 148 : var_5)))))));
    var_38 = (min(var_38, (((2303504214776379344 ? -8969118616133328773 : 13)))));
    var_39 |= 18446744073709551613;
    #pragma endscop
}
