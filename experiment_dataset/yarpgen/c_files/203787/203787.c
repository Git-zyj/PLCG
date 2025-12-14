/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (((((((12078962840553828274 ? -1813066074 : (arr_5 [i_2] [i_2] [i_1 - 3] [i_0]))) & ((((var_13 == (arr_4 [i_1] [i_2])))))))) ? ((max((max(var_0, var_3)), (var_14 == 65535)))) : (min(150, var_10))));
                    arr_9 [i_0] = var_15;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_16 = ((var_9 ? -1039661798877457455 : ((min(6, -764155029)))));
        arr_12 [i_3] = ((((min(255, 65535))) ? (-23034 / var_11) : (((((8926698424979219578 ? 3 : var_9)) > ((var_2 / (arr_11 [i_3]))))))));
        arr_13 [i_3] = ((var_11 ? (((~2047) ? ((41682 >> (var_10 - 13779866963990112166))) : var_5)) : ((~(arr_11 [i_3])))));
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        arr_16 [i_4] = ((!(arr_14 [i_4])));
        var_17 = var_0;
        arr_17 [i_4] = (((((arr_2 [i_4]) - (min(105, var_11)))) ^ 127));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_18 = (((((~(min(13921801131123503577, var_14))))) ? (((-var_15 == (max((arr_2 [i_5]), 41683))))) : ((max(((!(arr_7 [i_5] [i_5] [i_5]))), (arr_4 [i_5] [i_5]))))));
        arr_20 [i_5] = -var_12;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_19 = var_2;
        arr_25 [i_6] [i_6] = (3851786755 | -32752);
    }
    var_20 = (max(var_20, (((!((((!var_15) ? ((3471823248 ? var_14 : 12295265744959699610)) : ((var_10 ? 35888059530608640 : var_14))))))))));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 8;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 9;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 8;i_10 += 1)
                    {
                        {
                            arr_36 [i_10] [i_8] [i_8] [i_8] [i_8] [i_7] = ((min(3814153083, var_1)));
                            arr_37 [i_8] [i_8] = ((max(((2485 ? -18007 : 3530812265), (42502 && 35464)))));
                            var_21 ^= (((arr_6 [i_10] [i_9] [i_8] [i_7]) ? (arr_7 [8] [i_9] [8]) : (max((((var_11 ? (arr_21 [i_7]) : 28821))), (arr_28 [i_7 + 1] [i_7])))));
                            var_22 = (max(var_22, (((18410856014178942976 == (((-((0 ? var_9 : 42485))))))))));
                        }
                    }
                }
                arr_38 [i_8] = 65535;

                for (int i_11 = 2; i_11 < 8;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
                    {
                        var_23 = (arr_41 [i_7] [i_8] [i_11]);
                        arr_44 [i_7] [i_8] [i_8] [i_8] = (arr_15 [i_11] [i_8]);
                    }
                    for (int i_13 = 1; i_13 < 10;i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_8] [i_11] [i_8] = ((8 | (max(18410856014178942971, (arr_41 [i_7] [i_7] [i_11 + 2])))));
                        var_24 = (max(var_24, var_14));
                    }
                    var_25 = (min(var_25, 8911179311560755451));
                    var_26 = ((~(max((arr_26 [i_8 - 1] [i_7 + 1]), (arr_26 [i_8 - 4] [i_7 - 1])))));
                    arr_48 [i_7] [i_8] [i_11 - 2] [i_11] = ((((max((~32768), 764155030))) ? 7442195343131513280 : (((3764285017 ? 29543 : 36721)))));
                }
            }
        }
    }

    for (int i_14 = 1; i_14 < 21;i_14 += 1)
    {
        var_27 = (min(var_27, 17));

        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            var_28 = (((var_1 ? 764155031 : (arr_50 [i_14]))));
            var_29 = (max((((arr_11 [i_14 - 1]) / (arr_49 [i_14]))), 35888059530608645));
            var_30 = ((-((-(~4426744058249755034)))));
        }
    }
    #pragma endscop
}
