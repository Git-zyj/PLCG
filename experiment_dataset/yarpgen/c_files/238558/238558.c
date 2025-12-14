/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_7 <= (((225 ? 8191 : 0)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = ((var_0 ? 240 : ((~(arr_3 [i_0])))));
        arr_4 [i_0] [i_0] = var_5;
        var_20 = (arr_2 [2] [2]);
        var_21 = (min(-7954779333675575935, -1169934717859725062));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_22 = 65511;
            arr_7 [i_0] = 64;
        }
        for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_23 = (min(var_23, (arr_0 [i_2])));
            arr_12 [i_0] [10] [i_0] = 244;
        }
        for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_24 += (13099644298666274362 && 14);

                for (int i_5 = 4; i_5 < 11;i_5 += 1)
                {
                    var_25 = (arr_2 [i_0] [i_5 + 1]);
                    var_26 = (min(var_26, -var_10));

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_4] [i_0] [i_6] = 127;
                        var_27 = (((arr_3 [i_5 - 1]) | (arr_3 [i_5 - 1])));
                    }
                    arr_26 [i_0] = (-9223372036854775807 - 1);
                }
                var_28 -= (((((var_12 ? 1 : (arr_16 [2])))) ? (((~(arr_24 [i_0] [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_4])))) : 8166));
            }
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                var_29 = var_10;

                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    var_30 = var_3;
                    var_31 = (min((((arr_14 [7] [i_0]) ? (arr_14 [i_3] [i_0]) : -1169934717859725055)), (~var_3)));

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_32 = 16;
                        var_33 = ((178 ? 26 : 4294967295));
                        var_34 = 12672112788212299688;
                    }
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    arr_38 [i_0] [0] [i_7] [i_10] |= (!11);
                    var_35 ^= (((-79 != 17105119956441515395) != (arr_30 [i_0] [i_0] [i_7] [i_10])));
                    arr_39 [i_0] [1] [8] [10] [i_10 + 1] |= (((!32767) ? (((31 ? (arr_33 [i_0]) : 38704))) : (((arr_36 [9]) ? 1169934717859725046 : 32766))));
                    arr_40 [i_0] [i_3] [i_0] = ((18446744073709551603 & (!9223372036854775807)));
                }
                arr_41 [i_3] [i_3] [i_0] = (((var_8 < 9208476585867497309) ^ (((arr_1 [i_0]) ^ ((1974577679 ? 11799601783776391911 : (-127 - 1)))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_46 [i_0] [i_3] [i_0] [i_3] [5] [i_3 - 2] = (min((arr_28 [11] [i_7 + 2] [2] [i_0]), (((arr_27 [i_3] [i_3 - 1] [i_11]) ? (arr_28 [i_7] [i_7 - 2] [i_7 + 1] [i_7 + 1]) : (arr_27 [5] [i_3 - 1] [5])))));
                            var_36 = (arr_9 [i_0]);
                            arr_47 [i_0] [i_3] [i_3] [i_7] [6] [i_0] = var_6;
                        }
                    }
                }
                arr_48 [i_0] = (((~(arr_34 [i_7] [i_7 + 2] [i_7 - 2] [i_7]))));
            }
            arr_49 [i_0] [i_0] = ((((((arr_8 [i_3] [i_3 - 2]) != (min(19514922, var_4))))) >> (((max((~3363398348664867407), ((63 ? var_12 : 3363398348664867406)))) + 19311))));
            var_37 = 39978;
        }
    }
    #pragma endscop
}
