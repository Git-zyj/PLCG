/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((var_17 ? 3940269606 : 4532645357272578602))));
        arr_3 [i_0] = (252 || 14055);
        var_18 = (max((max(6310053334796577169, (1 || var_2))), (((206 ? var_1 : (arr_0 [i_0]))))));
        var_19 = (min(var_19, var_7));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_20 = (min(15514, 229));
                var_21 = (min(-var_16, ((((max(var_9, var_14))) ? var_17 : (21 + var_0)))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_14 [i_1] [i_1] [i_1] = var_3;
                arr_15 [i_2] [i_2] [i_1] [i_1] = (49 || 1427926214);
                var_22 = (22614 || 229);
            }
            arr_16 [i_1] [i_2] [i_2] = (+(((arr_8 [i_1] [i_2]) ? var_12 : ((-2623 / (arr_8 [i_1] [i_2]))))));
            arr_17 [i_1] [i_2] [i_1] = (arr_1 [i_2]);
        }
        for (int i_5 = 4; i_5 < 8;i_5 += 1)
        {
            var_23 = (min(var_23, (((207 ? -5270475144568724293 : 1)))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_26 [i_1] [i_1] [i_5 - 1] [i_6] [i_7] = (((max(1, (((arr_12 [i_1]) ? var_13 : 1)))) == ((((var_4 ? var_15 : (arr_12 [i_5]))) * ((min(var_10, (arr_7 [i_1] [1] [i_1]))))))));
                        arr_27 [i_1] [i_5] [i_5] [i_1] [i_6] [5] = arr_20 [i_1];
                        var_24 = (arr_18 [i_6] [i_5]);
                        arr_28 [i_7] [i_1] [7] [i_1] [i_6] [i_1] = ((+(max((arr_12 [i_7]), (min(2156945193365342738, -4923924166412764705))))));
                    }
                }
            }
            var_25 = (-5270475144568724307 + 18);
            arr_29 [i_1] [i_5] [i_5 - 4] = var_9;
        }

        /* vectorizable */
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            var_26 = (min(var_26, (((var_4 ? (arr_4 [i_8] [i_8 - 1]) : 32242)))));
            var_27 -= ((-4278 ? var_15 : (arr_11 [2])));
        }
        /* vectorizable */
        for (int i_9 = 4; i_9 < 8;i_9 += 1)
        {
            var_28 = var_12;
            arr_38 [i_1] = var_12;
            var_29 *= ((-(arr_36 [i_1] [i_9] [i_9 + 2])));
            arr_39 [5] [i_1] = ((var_10 ? var_17 : 7));
        }
        var_30 ^= 644054441;
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
    {
        arr_43 [i_10] [i_10] = ((~(arr_40 [i_10])));
        arr_44 [i_10] = (min((((-(arr_25 [i_10] [i_10] [i_10])))), var_15));
        var_31 = (max(var_31, (arr_12 [i_10])));
        var_32 = 1816634635922854304;
    }
    var_33 = (max(var_33, ((((~1402569934) ? (max(-var_13, (-5739096989524770644 + 5270475144568724317))) : 50)))));
    var_34 = var_7;
    var_35 &= ((var_13 ? var_15 : var_7));

    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {

        for (int i_12 = 3; i_12 < 15;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 4; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 16;i_14 += 1)
                {
                    {
                        var_36 = (max((min((arr_45 [2]), var_1)), 0));
                        var_37 &= var_2;

                        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                        {
                            arr_58 [i_15] = max(204, ((min((arr_56 [i_11] [i_11] [i_11] [i_11] [i_11]), (arr_56 [i_11] [i_12 + 3] [i_11] [i_14] [i_15])))));
                            var_38 = ((!(((-(arr_52 [i_11] [i_11] [i_11] [i_11] [i_11]))))));
                            var_39 = (arr_49 [i_11]);
                        }
                        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                        {
                            arr_61 [1] [7] [i_13] [i_14 - 2] [i_16] = ((max(-66, (~23552))) < ((max((arr_54 [i_12 - 3] [i_12] [i_12] [i_13]), (arr_54 [i_12 + 1] [18] [i_12] [i_12])))));
                            var_40 = ((-(((~198) ? 7654496382800979431 : 1))));
                            var_41 = (!3474160907);
                        }
                        arr_62 [i_11] [i_11] [i_11] [i_11] = (max(1816634635922854303, 16630109437786697290));
                        arr_63 [i_13 - 3] [i_13 + 2] = ((var_15 ? var_17 : (arr_55 [17] [i_13 + 1] [i_13] [i_13] [i_12] [i_12])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 0;i_18 += 1)
                {
                    {
                        arr_71 [i_11] [i_11] [i_12] [i_17] [i_18] [i_18] = min(59186, 175);
                        var_42 = ((~((var_16 ? ((max((arr_49 [i_17]), var_8))) : (!46119)))));
                        arr_72 [i_11] [i_12] [i_17] [i_17] [i_17] [i_18 + 1] = ((!(((~(var_1 <= var_2))))));
                    }
                }
            }
            var_43 += (max(var_15, (max(var_16, (arr_55 [i_11] [i_12] [i_11] [i_11] [i_12] [i_12 + 4])))));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 19;i_20 += 1)
                {
                    {
                        var_44 = ((!(arr_70 [i_11] [14] [i_19] [i_12 + 3])));
                        arr_79 [i_20] [i_19] [i_19] [i_19] [1] = (max(((((arr_68 [i_12 - 2] [i_12 + 2] [i_12 + 2]) ? (arr_68 [i_12 + 2] [i_12 - 3] [i_12 + 4]) : -266242695))), (((((127 ? var_1 : (arr_66 [i_11] [i_12] [i_19] [i_20])))) ? (arr_53 [i_12 - 1] [i_12 + 1] [i_12 - 3] [4]) : var_10))));
                        arr_80 [i_11] [i_11] [i_19] [i_11] = (min(0, 1555927368));
                    }
                }
            }
        }
        for (int i_21 = 1; i_21 < 18;i_21 += 1)
        {
            var_45 = ((!(127 >= var_4)));
            arr_85 [2] [2] = var_13;
            arr_86 [i_11] [i_21] = (arr_46 [i_21 - 1]);
        }
        arr_87 [i_11] = ((((((arr_67 [i_11] [i_11] [i_11] [i_11] [i_11]) ? 126 : (arr_67 [i_11] [i_11] [i_11] [9] [i_11])))) / var_6));
        var_46 += ((5270475144568724313 ? 7543 : 211));
        arr_88 [i_11] = (arr_74 [14]);
    }
    #pragma endscop
}
