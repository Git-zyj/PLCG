/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_13 -= (max((max((3159892135 + 3159892162), (max(7054113301239228873, 49905718)))), -var_1));
        var_14 = 1836580143;
        var_15 = (max(var_15, 3226));
        var_16 -= 62310;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_17 = ((max(248, (arr_5 [i_1]))));
            var_18 = 17262525679044040365;
            arr_7 [i_2] [i_2] = ((!(((arr_2 [i_1]) || (var_2 || var_6)))));

            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                var_19 = (min(var_19, ((min(((((42 * (arr_8 [i_1] [i_1] [i_1] [i_1]))) / (arr_9 [i_1] [i_2] [i_3] [i_3]))), (max(var_8, (arr_11 [i_3 + 1] [i_3 + 2] [i_3 - 2] [i_3 - 2]))))))));
                var_20 ^= var_11;
                arr_12 [i_2] [i_2] [i_2] [i_2] = (min(((max(-3168763091342355979, ((max(var_6, (arr_6 [i_2]))))))), (min((arr_5 [i_1]), (min(var_10, 3224))))));
                arr_13 [i_1] [i_2] [i_3] [i_2] = (((((!(arr_9 [i_2] [i_3 - 2] [i_3 + 2] [i_2])))) >> (248 - 221)));
            }
            arr_14 [i_2] = var_2;
        }

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_17 [i_4] [i_4] [i_4] |= ((((!(arr_9 [i_1] [i_4] [i_1] [18])))));
            var_21 = (arr_10 [i_1] [i_4] [i_1] [i_1]);
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            var_22 = var_1;
            var_23 &= 64;
            var_24 ^= var_2;
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            arr_22 [i_6] [i_6] = ((var_11 | (((arr_16 [i_1] [i_6]) ? 0 : var_11))));
            var_25 ^= -246;
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_26 *= ((9223372036854775797 << ((((((var_8 ? -3212 : (!9223372036854775789))) + 3253)) - 41))));
                        arr_30 [i_1] [i_1] [i_7] [i_8] [i_9] = (((((max((arr_10 [i_9] [i_8 - 2] [i_8] [i_8]), (arr_10 [i_8] [i_8 + 2] [i_7] [i_7]))))) * (max(var_4, 20))));
                        var_27 = (min(var_27, ((((arr_9 [i_1] [i_7] [i_8] [0]) ? (arr_26 [i_1] [i_7] [i_8]) : var_8)))));
                        var_28 = (max(var_28, -248));
                        var_29 = ((~(arr_24 [i_8 - 3] [i_7] [i_8])));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_30 = (arr_15 [i_10]);
        var_31 = ((((min(8792, 98))) ? (arr_26 [i_10] [i_10] [i_10]) : (((var_4 > (arr_26 [i_10] [i_10] [i_10]))))));
        var_32 = (max(var_32, ((((((((~1) + 2147483647)) >> (((max(3159892135, 20)) - 3159892135)))) >> (45 - 26))))));

        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            var_33 &= 2146959360;
            arr_36 [i_10] [i_10] [i_10] = -var_0;
            arr_37 [i_11] [i_11] [i_11] = (arr_24 [i_10] [i_10] [i_11]);

            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                var_34 |= 18446744073709551615;
                var_35 = ((-((var_8 * (arr_3 [i_11] [i_12])))));
            }
            for (int i_13 = 2; i_13 < 10;i_13 += 1)
            {
                var_36 = (arr_20 [i_11] [i_11]);
                var_37 += (max((!103), (min(16, var_9))));
                var_38 = 7538565825756230730;
            }
            /* vectorizable */
            for (int i_14 = 4; i_14 < 9;i_14 += 1)
            {
                var_39 *= -2089715818;
                var_40 = (((arr_40 [i_11] [i_11] [i_14]) ? (arr_43 [i_14 - 2] [i_11] [i_10]) : var_3));
                arr_46 [i_10] [i_11] [i_14] [i_11] |= (--31);
                arr_47 [i_10] [i_10] [i_10] = ((!(arr_25 [i_10] [i_11] [i_14])));
            }
        }
        /* vectorizable */
        for (int i_15 = 2; i_15 < 11;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 10;i_17 += 1)
                {
                    {
                        arr_55 [i_10] [i_17] [i_15] [i_17] [i_17] = (1135075161 * 28672);
                        arr_56 [i_10] = (((arr_11 [i_10] [i_15] [i_16] [i_10]) * var_10));
                    }
                }
            }
            var_41 = -1406538189;
        }
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            var_42 = var_6;
            var_43 = (min(var_43, ((((-61 / (max((arr_58 [i_10]), var_4))))))));
        }
        for (int i_19 = 2; i_19 < 10;i_19 += 1)
        {
            var_44 &= ((!(780860420451512871 <= 239)));
            var_45 = (min((max((arr_32 [i_10]), (((arr_50 [i_19]) ? (arr_52 [i_19] [i_10] [i_10]) : var_3)))), (min(var_1, (arr_60 [i_19] [i_19 + 2])))));
            arr_62 [i_19] [i_19] [i_10] = (max((max((arr_44 [i_10] [i_19 - 2]), -266)), (((-(arr_33 [i_10]))))));
        }
    }
    var_46 = ((var_9 << (845685813 - 845685812)));
    #pragma endscop
}
