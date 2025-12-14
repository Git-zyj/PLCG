/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (-(arr_1 [i_0 - 1]));
        var_18 = (((24576 ? var_17 : 40959)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = (~var_9);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    {
                        var_19 = (min(var_19, var_13));
                        var_20 -= (((var_5 > var_15) ? 24559 : ((576425567931334656 ? (arr_4 [i_1]) : 24576))));
                        var_21 = (!24576);
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        var_22 = (max((min((-1975309779 | 24564), ((40976 ? var_2 : 1)))), (max((~3762865771558659363), (!var_13)))));

        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    {
                        arr_24 [i_5] [i_6] [i_5 - 2] [i_5] = ((min((arr_9 [i_5 - 1] [i_6 + 4] [i_6 - 3] [i_8 - 2]), var_9)));
                        arr_25 [i_5] [i_5] [i_6] [i_8] = ((~((var_12 ? var_4 : (40976 > 1080863910568919040)))));
                        var_23 = (min(((61975 ? ((((arr_4 [i_5]) ? 27407 : var_13))) : (((arr_1 [14]) * 1)))), (24576 / 996637478)));
                        var_24 |= (((min((~5760184229292968782), 1)) > ((max(((max(60935, 24576))), var_17)))));
                    }
                }
            }
            var_25 &= 0;
            arr_26 [i_6] [i_6] = ((((((60914 ? 27407 : 810193470)))) ? (((((27418 ? 60914 : var_6))) ? -13541 : -1394799505)) : (((24564 ? (arr_7 [i_5 + 1] [5] [19]) : 6144)))));
            var_26 = (min(var_26, ((((+-2147483620) + ((((min(4135953266, var_4))) ? (max(-810193471, 48285)) : 196)))))));
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_30 [i_5 + 1] [i_9] = (!128);

            /* vectorizable */
            for (int i_10 = 3; i_10 < 10;i_10 += 1) /* same iter space */
            {
                var_27 = (((((195 ? 4621 : 12))) ? (!112) : (arr_9 [i_10] [i_10 - 2] [i_5 - 1] [i_5 - 1])));
                var_28 |= ((((arr_6 [i_5]) ? var_8 : 24595)) | (arr_17 [i_5 - 2] [i_10 + 2]));
                var_29 = -13;
            }
            for (int i_11 = 3; i_11 < 10;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_30 = (min(103, ((((max(8, 10782318384340257553)) <= ((max(108, 1048575))))))));
                            var_31 = (((((~(arr_34 [i_5 + 1] [i_5 - 1] [i_5 - 2])))) ? ((((((max((arr_12 [12] [14] [4] [5] [i_5]), var_11))) <= (arr_20 [i_5] [i_9] [10]))))) : -var_9));
                            var_32 &= (max((~144), (max(var_13, 24576))));
                        }
                    }
                }
                arr_42 [i_5] [i_9] [i_9] = (min((((max(0, 4934886119248252181)) >> (((max(-9223372036854775797, var_4)) - 136)))), (((min((arr_17 [i_5] [i_11]), -178227380))))));
            }
            /* vectorizable */
            for (int i_14 = 3; i_14 < 10;i_14 += 1) /* same iter space */
            {
                var_33 = (((arr_14 [i_5 + 1]) == ((37367 ? -1931731106 : 37367))));
                /* LoopNest 2 */
                for (int i_15 = 4; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            var_34 = (30427 | -1048576);
                            var_35 = (-var_17 ? -9 : ((var_16 ? (-2147483647 - 1) : (arr_7 [i_5 - 1] [20] [i_16]))));
                        }
                    }
                }
            }
            var_36 |= (min((min(167, var_1)), (((-8479 - (arr_15 [i_5 - 1]))))));
        }
    }
    var_37 |= ((-(max(1675061295, 4))));
    var_38 += var_2;
    var_39 = (max((((max(704762556311549862, -45260235)) + var_2)), (min((max(var_7, 810193449)), (((490612433 ? 0 : 84)))))));
    #pragma endscop
}
