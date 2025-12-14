/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-var_1 >= (((((111 ? -496644111 : 128))) ? var_14 : ((145 >> (4053115635 - 4053115616)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (min(var_19, (((137 ? (~0) : 40)))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_20 = (max(var_20, ((((-32767 - 1) ? -11 : 7881299347898368)))));
            arr_6 [i_0] [i_0] [i_1] = (((120 - 49774) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        var_21 = ((!(!-31577)));
                        var_22 -= var_8;
                    }
                }
            }
            arr_12 [i_1] = -72;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_4] [i_0] = ((!(arr_2 [i_4] [4])));
            arr_16 [i_4] = 391107675;
            arr_17 [i_0] [7] [i_4] = ((var_5 ? ((var_3 ? var_16 : 15771)) : (var_6 & var_7)));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 4; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_23 = (3378669227 >= var_10);
                            arr_27 [i_0] [i_0] [i_6] [i_7] [i_8] = 26723;
                        }
                    }
                }
            }
            var_24 = (min(var_24, (((481756965 ? var_17 : (arr_14 [i_0] [0]))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        arr_33 [i_0] [i_5] [i_9] [i_5] [i_10] = ((8351202638051896350 ? 4648902125734171057 : 15360));
                        var_25 = ((((20 ? 3563680149393912594 : 18)) | (14287 | -18)));
                        var_26 = (max(var_26, (1 >= 2866978084)));
                    }
                }
            }
            var_27 = (((((30 ? (arr_2 [0] [8]) : (arr_28 [i_0])))) ? ((0 ? var_11 : var_17)) : (-24433 != 12420320708150593990)));
            arr_34 [i_0] = (((arr_13 [i_0] [i_5] [i_5]) ? (arr_13 [4] [i_5] [i_5]) : 2735));
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            var_28 = var_13;

            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                arr_40 [8] [i_11] [i_12] = ((-((-1809180323 ? 2243331957 : var_16))));
                var_29 = ((((var_5 ? 4003362317 : 225)) > 65535));
                arr_41 [i_0] [i_0] [i_11] [i_12] = (((~15763) % -4095));
            }
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                var_30 = (9 > 134184960);
                arr_44 [i_13] [i_13] = ((134184960 ? 2 : 485311630));
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 10;i_15 += 1)
                {
                    {

                        for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
                        {
                            var_31 = (min(var_31, (arr_36 [i_16] [1] [1])));
                            arr_51 [i_14] [i_11] [i_14] [i_15] [i_11] = (((var_5 & var_5) == 221653066));
                            var_32 = (((~64960) ? var_10 : (249 || var_4)));
                        }
                        for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
                        {
                            arr_54 [i_17] [i_14] [i_14] [6] [i_17] [i_11] = 28142;
                            var_33 = (-28143 ? -234959457 : 0);
                            var_34 = -28142;
                            arr_55 [i_17] [i_14] [4] [i_14] [i_14] [i_0] = -28143;
                        }
                        var_35 = (min(var_35, (!-23016)));
                    }
                }
            }
        }
        var_36 = 253;
        arr_56 [i_0] [i_0] = var_15;
        var_37 = ((!(arr_45 [i_0] [i_0] [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_18 = 1; i_18 < 9;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            {
                var_38 = (max(var_38, var_14));
                arr_63 [i_18 + 1] [1] = -2761690317;
            }
        }
    }
    var_39 = -var_10;
    #pragma endscop
}
