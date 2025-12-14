/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_6));
    var_14 = (min(var_14, (((-(min(var_5, (var_12 + var_2))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] = 960;
            var_15 = (((var_3 > 0) ? ((((!(arr_2 [i_0] [i_1]))))) : (var_7 / -222239375)));
        }
        var_16 = (max(var_16, var_12));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    var_17 = ((var_0 ? var_7 : var_0));
                    arr_13 [8] [i_4] &= ((!(arr_11 [i_4 - 2] [2] [2] [i_4])));
                }
                var_18 = ((-11 ? (arr_0 [i_3]) : (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_8 - 11);
                            var_19 = (min(var_19, ((((((arr_9 [i_0]) ? (arr_0 [i_0]) : 7)) > (~2147483647))))));
                            var_20 = ((((((arr_6 [i_0] [i_0]) ? var_12 : -1761795529))) ? 33030144 : var_12));
                            arr_20 [i_0] [i_2] [5] [i_3] [i_6 + 1] [i_6] = -8;
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
            {
                var_21 = (max(var_21, 48824));
                var_22 = var_2;
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 2; i_9 < 15;i_9 += 1)
                {
                    arr_28 [i_0] [i_8] = var_6;
                    var_23 = (min(var_23, ((((arr_11 [i_9 - 2] [i_9] [10] [i_9 - 1]) != (arr_17 [i_0] [i_2] [0] [i_9] [i_9 + 1]))))));
                }
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                    {
                        var_24 = (!2140352877227526754);
                        var_25 = var_2;
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                    {
                        var_26 = (0 % var_8);
                        arr_36 [i_12] [i_0] [i_0] [i_0] = var_9;
                        var_27 = 222239375;
                        var_28 |= -445485473;
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_2] [i_8] [2] |= (!var_7);
                        arr_40 [i_2] [10] [i_8] |= -1761795522;
                        var_29 = var_3;
                    }

                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        arr_43 [i_14] [i_0] [i_8] [i_0] [i_0] = ((var_5 ? ((0 ? (arr_1 [i_0] [i_2]) : 2)) : var_8));
                        var_30 ^= (((-(arr_22 [i_0] [i_2] [i_8] [i_10]))) - -31);
                    }
                    arr_44 [i_0] [i_0] [i_0] [i_10] [i_2] [i_10 - 1] = -var_8;
                }
                var_31 |= ((4294967295 > ((((arr_25 [i_0] [4] [i_0]) ? var_5 : 59863)))));
                arr_45 [i_0] [i_2] [i_2] [i_8] = (arr_8 [i_0]);
            }
            arr_46 [i_0] [i_2] = (var_2 == 2147483647);
        }
        for (int i_15 = 1; i_15 < 12;i_15 += 1)
        {
            /* LoopNest 3 */
            for (int i_16 = 3; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 13;i_18 += 1)
                    {
                        {
                            var_32 = (min(var_32, ((((((arr_18 [4] [i_17] [i_16 + 1] [i_15] [4]) & var_0)) & -1589376151)))));
                            arr_58 [i_0] [i_0] [10] [i_0] [i_18] = 201355310;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 15;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 16;i_21 += 1)
                    {
                        {
                            var_33 = ((1761795528 ? 4294967295 : 13934529799430752954));
                            var_34 = (max((-118 & 1331809679), (((min(-222239375, 1437147180))))));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_22 = 0; i_22 < 13;i_22 += 1) /* same iter space */
    {

        for (int i_23 = 0; i_23 < 13;i_23 += 1) /* same iter space */
        {
            var_35 = -1;
            arr_72 [i_22] [i_23] [i_22] = ((var_11 != ((var_10 ? 17497067972606893259 : (arr_30 [i_22] [i_23])))));
        }
        for (int i_24 = 0; i_24 < 13;i_24 += 1) /* same iter space */
        {
            var_36 = (min(var_36, (8064 & var_10)));
            arr_76 [i_22] [i_22] = 10931512459522434063;
            arr_77 [i_24] [i_22] = ((var_5 ? 8069 : var_7));
        }
        for (int i_25 = 0; i_25 < 13;i_25 += 1)
        {
            var_37 = (min(var_37, (~32139)));
            var_38 = (max(var_38, ((((arr_48 [i_22]) / var_5)))));
            var_39 = var_11;
        }
        arr_80 [i_22] = (!1939982280);
    }
    for (int i_26 = 0; i_26 < 13;i_26 += 1) /* same iter space */
    {
        arr_84 [i_26] = (min(var_6, ((var_3 ? (arr_62 [i_26] [i_26] [i_26]) : 1761795526))));
        var_40 = ((!var_1) ? ((var_1 / (var_2 | 2147483645))) : (arr_41 [i_26] [i_26] [i_26] [i_26] [i_26]));
        arr_85 [i_26] = ((~(~var_10)));
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 13;i_27 += 1)
        {
            for (int i_28 = 2; i_28 < 9;i_28 += 1)
            {
                {
                    var_41 = (max(var_41, ((min((min(-99, 3373918452)), (((var_0 <= (arr_21 [i_28 + 1] [i_27])))))))));
                    var_42 ^= var_11;
                    var_43 = var_5;
                }
            }
        }
    }
    var_44 = (min(4294967282, ((min(((var_7 ? 1997147484 : 222239375)), 38676)))));
    #pragma endscop
}
