/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 0;
    var_12 |= var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 ^= -22;
        var_14 = arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_15 ^= (~(min(((max(10396, 63719))), 4294967284)));
        var_16 = var_6;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_17 = (arr_10 [i_2] [i_2]);
        var_18 = ((~(((max((arr_0 [2]), (arr_9 [i_2])))))));
        var_19 = (min((((((var_4 ? (arr_7 [i_2] [i_2]) : -22))) ? var_5 : (arr_4 [i_2]))), ((((min(32767, 208))) ? 208 : 32768))));

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_20 = 4294967295;
            var_21 = var_1;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_22 = (arr_5 [i_2] [i_5]);
                var_23 = (var_10 << ((((arr_16 [i_2] [i_4] [i_5] [i_5]) == 1))));
                var_24 &= var_3;
                var_25 |= 47;
                var_26 = ((1 ? 2820997069 : 10394));
            }
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                var_27 = -115;
                var_28 = var_8;
            }
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                arr_24 [i_2] [i_4] [i_7] = (arr_23 [i_2] [i_4] [i_7]);
                var_29 = 5312122428246936305;
                arr_25 [1] [i_4] [1] [i_7] = (((arr_15 [i_7] [i_4] [1]) ? ((-108 ? var_10 : 0)) : (var_10 - 0)));
                var_30 = (min(var_30, (((!(arr_15 [i_4] [i_7 + 1] [i_7 + 1]))))));
            }
            var_31 = ((!(((24 ? var_2 : (arr_21 [i_2] [i_4]))))));
            var_32 ^= ((var_6 ? (845702243 ^ 3199938194) : (((arr_0 [0]) ? (arr_12 [i_2] [1]) : 0))));

            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                var_33 = var_2;
                var_34 = 1;
                var_35 = ((250 >> ((((~(arr_6 [i_2]))) - 2534684285))));
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_32 [3] [i_2] [i_9] = -1040001590;

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_36 = var_10;
                var_37 *= (((((((arr_27 [i_2] [i_2] [4] [4]) == var_6)))) / ((var_4 ? var_8 : var_6))));
                var_38 = var_6;
            }
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_39 = 1;
                var_40 = (arr_37 [i_2]);
                arr_39 [i_2] [i_11] = ((-3250464487192828854 ? var_2 : (var_9 || var_1)));
                var_41 ^= 3803175235;
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {
                var_42 = (~(~var_0));
                var_43 = (var_9 >> var_9);
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
            {
                var_44 = arr_3 [i_9];
                var_45 = (((arr_28 [i_2] [i_9] [i_13]) / 1));
            }
            arr_46 [i_2] [i_2] [i_9] = (((arr_16 [i_2] [i_2] [9] [i_9]) ? (arr_16 [i_2] [i_2] [i_9] [i_9]) : (arr_16 [i_2] [i_2] [i_9] [i_9])));
            var_46 = (~72057594037927935);
        }
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_47 &= 115;

        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            arr_53 [i_14] [i_15] [i_14] = (max((min((max(var_10, var_3)), 4077528251)), ((((((var_5 >> (32505856 - 32505830)))) ? 140 : var_6)))));
            var_48 = (max(507904, 0));
        }

        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            var_49 = (arr_51 [i_14]);
            arr_56 [i_14] [i_14] = (arr_50 [i_14]);
        }
        var_50 &= var_8;
    }
    #pragma endscop
}
