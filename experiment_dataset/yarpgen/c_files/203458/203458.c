/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 44227;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_1 [i_0] [7]);
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_20 = (arr_1 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_2] [i_3] = 109;

                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_21 ^= (109 / 44227);
                            var_22 = (min(var_22, 1));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_23 = ((arr_13 [2] [2] [i_3] [5]) ? 67 : (arr_5 [i_1]));
                            arr_21 [i_1] [i_1] [15] [i_4] [i_3] = arr_8 [i_1];
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_24 = (arr_16 [i_1] [i_2] [i_3] [i_4]);
                            var_25 = ((min((44227 % 1), (arr_18 [i_4]))) == (((((2683202410 ? (arr_0 [i_1] [i_2]) : (arr_1 [i_2] [i_3]))) >> (7923 > -63)))));
                            var_26 = (min(8790436727525454937, (arr_13 [i_1] [11] [i_1] [18])));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            var_27 = ((7046423572798576157 ? 45 : 1099511627775));
                            arr_30 [i_1] [i_2] [i_3] [i_4 + 1] [1] = (max((arr_1 [i_1] [i_3]), (arr_0 [i_2] [i_2])));
                            arr_31 [i_1] [i_2] [i_3] [i_2] [i_8] [i_8] |= 65535;
                        }

                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            var_28 = (max(var_28, (arr_20 [i_1] [i_9] [i_4] [i_3] [i_2] [i_1])));
                            var_29 *= (arr_8 [i_4]);
                        }
                        for (int i_10 = 3; i_10 < 20;i_10 += 1)
                        {
                            var_30 = ((0 ? (arr_6 [i_1]) : (((min(-9732, 156))))));
                            var_31 |= (min((((((min(-7046423572798576157, (arr_13 [i_1] [i_1] [14] [13])))) && (arr_26 [i_1] [i_1] [i_1] [i_4] [i_4] [i_4])))), (arr_1 [i_10] [i_10])));
                            arr_36 [i_1] [i_1] [i_1] [i_3] [i_4] [i_10] = (arr_18 [i_1]);
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            arr_39 [i_1] [i_1] [i_3] [i_4] [1] [i_3] = (((arr_6 [i_1]) ? -49 : (arr_7 [i_1])));
                            var_32 = -1151668659065294566;
                            var_33 += (arr_35 [i_1] [i_2] [i_3 - 1] [i_4] [i_11] [i_11] [i_4]);
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_34 = (min(var_34, ((((36457 ? 18446744073709551607 : 1062820272902927659))))));
                        var_35 -= 45;
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        arr_46 [i_1] [i_1] [i_1] [i_3] [i_1] = (((((-1151668659065294566 ? 210 : 1))) ? 30444 : (((((arr_7 [i_1]) >= 1)) ? (arr_10 [i_13] [i_13]) : (max(18446744073709551615, (arr_41 [i_1] [i_2] [i_3] [i_13] [i_1] [i_13])))))));
                        arr_47 [i_1] [10] [i_3] [i_13] = arr_7 [i_1];
                        var_36 = -201674034;
                        var_37 = (arr_16 [i_13] [i_3] [i_1] [i_1]);
                    }
                    arr_48 [i_1] [i_2] [i_3] = (arr_41 [7] [i_2] [i_2] [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
    {
        arr_53 [i_14] = (arr_22 [i_14] [13] [19] [i_14] [i_14] [i_14] [i_14]);

        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            var_38 = (180 <= 5626);
            var_39 = (((((((arr_41 [i_14] [i_14] [i_14] [i_15] [i_15] [i_15]) + 2147483647)) >> (((arr_41 [i_14] [i_14] [i_14] [i_15] [1] [i_15]) + 13208)))) != (arr_56 [i_14] [i_15])));
            arr_57 [i_14] [i_15] = (((arr_33 [i_14] [i_14] [19] [i_15] [i_15] [i_15] [i_15]) ? (((max(21310, ((((arr_29 [12] [12] [i_14] [13]) && -1263343293))))))) : (((1052089136 ? 0 : (arr_55 [i_14] [i_14] [2]))))));
            var_40 = (arr_49 [i_14] [i_15]);
        }
    }
    for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                {
                    arr_66 [i_16] [i_17] [i_18] [1] = -1414;
                    arr_67 [i_16] [i_17] [13] [i_18] = 12964;
                    arr_68 [14] [14] [i_17] [i_18] = (max((arr_38 [i_16] [i_17] [i_16] [i_18] [15] [i_16] [i_16]), 2544549260914688880));
                }
            }
        }
        arr_69 [21] = (arr_55 [i_16] [i_16] [i_16]);
    }
    #pragma endscop
}
