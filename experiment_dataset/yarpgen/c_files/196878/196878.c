/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_19 = (((var_4 | var_2) << (((arr_0 [i_0]) - 18781))));
        arr_2 [i_0] [i_0] = ((32768 ? 25301 : -101));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((((var_0 ? 2903544172922938034 : var_7) / (((var_11 ? 3136896733 : var_9))))));
        var_20 = (max(var_20, var_13));
        arr_6 [i_1] = (((((-(arr_3 [i_1 - 3] [i_1])))) ? 30057 : 102));
        var_21 *= ((min(((24392 ? 1158070562 : 1158070545)), (arr_1 [9]))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_22 += ((((((0 ? var_15 : -107))) == 2773866878)));
            var_23 = ((((((12421525537611387502 >> (-25096 + 25157))) >> (2432429542320178550 - 2432429542320178509))) == var_5));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_24 |= 524287;
            var_25 = 524278;
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_26 = 17939;
            var_27 |= (((((arr_1 [i_1 - 2]) ? (arr_1 [i_1 + 1]) : var_13)) & ((min((arr_14 [i_1 - 1]), (arr_14 [i_1 - 2]))))));
            arr_15 [i_1] [i_1] = ((((((arr_7 [i_1 + 1]) / (arr_10 [i_1 + 1])))) ? ((((~var_1) ? (~var_8) : 19))) : (max(((((var_6 + 9223372036854775807) >> (25279 - 25261)))), ((32596 ? var_1 : var_0))))));
            var_28 = (min(var_12, 2132648110269258751));
        }
    }
    for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_29 = 3849949320;

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_31 [i_5] [i_8] [7] [i_5] [i_5] = var_5;
                            arr_32 [12] [i_6] [15] [i_8] [15] [21] = var_12;
                        }
                        var_30 ^= 12421525537611387513;
                        var_31 -= 0;
                    }
                }
            }
            var_32 ^= max(var_7, var_11);
        }
        arr_33 [17] [i_5] = ((var_5 | ((((min(-203471974, (arr_20 [i_5] [5] [i_5])))) ? 9816892940430777132 : 87133836742563181))));
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 21;i_10 += 1) /* same iter space */
    {
        var_33 |= (((-1336109837 + 2147483647) << (4709638889373925849 - 4709638889373925849)));
        arr_36 [1] = ((var_8 * (13348985168444444734 * var_9)));

        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {
            arr_39 [i_10] [i_10] [i_10] = ((((((arr_18 [i_11] [11] [6]) & var_0))) ? ((1984 ? var_0 : 762055417)) : (var_0 << 0)));
            var_34 = var_5;
            var_35 = (((~2432429542320178550) ? var_11 : 227));
            arr_40 [1] [0] = 1;
            arr_41 [i_10] = ((var_3 + (arr_26 [i_11] [i_11] [i_11 + 1])));
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                {
                    arr_47 [19] = 0;
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_36 = (min(var_36, (1 * var_4)));
                                var_37 = var_12;
                            }
                        }
                    }
                    arr_52 [i_10] = (((534522275128011514 << var_18) >> (33675 - 33637)));
                    var_38 += ((21313 || ((255 == (arr_25 [15] [i_12])))));
                    var_39 = (min(var_39, (var_9 <= 65511)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 20;i_17 += 1)
            {
                {
                    var_40 = (min(var_40, (((var_3 - (arr_50 [1] [i_10] [i_10] [i_10] [i_16] [i_17]))))));
                    var_41 = var_14;
                }
            }
        }
    }
    var_42 = var_16;
    var_43 = (((((var_3 & var_9) ? (var_16 | 0) : var_5)) | (var_2 <= var_8)));
    var_44 = (max(var_44, ((((min(-101, 3532911892)) - 76)))));
    var_45 = var_14;
    #pragma endscop
}
