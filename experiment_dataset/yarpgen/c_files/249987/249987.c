/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 += 15849;
                                arr_12 [i_0] [i_1 - 2] [i_2 + 1] [i_3] [i_4] = -479499550;
                                var_21 = (((arr_6 [i_0] [i_1 - 2] [i_2 + 3] [i_0]) & (((!(arr_6 [i_0] [i_1 + 1] [i_2 + 1] [i_4]))))));
                            }
                        }
                    }
                    arr_13 [i_2] = ((-1073741823 ? (((arr_10 [i_1 - 1] [i_2 + 3] [10] [i_1] [i_0]) ? (min(var_8, var_14)) : (((var_11 ? var_10 : (arr_6 [i_1] [i_2] [13] [i_0])))))) : (((max(var_19, var_18))))));
                    arr_14 [i_0] = (arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_22 = arr_0 [i_6];
                                var_23 = (((~(2821897492 <= 10))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                arr_28 [13] [13] = 246;
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_24 ^= (((((-(!3221225472)))) ? (min(var_7, (((~(arr_0 [i_7])))))) : (arr_27 [i_7 - 1] [i_9 + 1])));
                            var_25 &= ((((!((((arr_26 [14] [i_8]) ? 254 : (arr_0 [i_10])))))) ? -6 : ((38664 << (244 - 243)))));
                        }
                    }
                }
                var_26 = (min(var_26, var_14));
                var_27 = ((((var_9 | 210) & (3059306540 | var_1))));
                arr_34 [6] [17] [i_7 + 1] = (((((-(~0)))) ? ((((var_16 % (arr_32 [i_7] [i_7 + 1]))))) : ((max((arr_33 [i_7 - 4] [i_8] [i_7 - 3] [i_7 - 1]), (arr_33 [i_7 - 4] [i_7] [4] [i_7 - 2]))))));
            }
        }
    }
    var_28 &= ((((!(((var_10 ? 1 : 234))))) ? var_2 : (((!(var_0 / 25771))))));
    var_29 = (min(var_29, (((-9613577729123908957 ? (!var_1) : var_18)))));

    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
    {
        arr_37 [i_11] = (arr_5 [18]);
        var_30 ^= ((((-var_5 ? var_6 : (~-7043533942858357704)))) ? (((arr_29 [i_11] [i_11]) ? 2514673665 : ((((12177879662994887572 <= (arr_32 [i_11] [i_11]))))))) : (~var_7));
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
    {
        var_31 += ((((((arr_22 [2] [i_12]) % (arr_9 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [21])))) ? -var_7 : (((var_15 < var_7) / -7043533942858357703))));
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 7;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                {
                    arr_47 [9] [9] = (max(234, 84));
                    var_32 = (max((arr_29 [i_12] [i_12]), (((arr_21 [i_13 + 2] [i_13] [i_13 + 2] [i_13 + 1] [i_13]) ? (arr_21 [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_13 + 1] [i_13 - 3]) : (arr_17 [i_13 + 2] [i_13] [i_13 + 2] [i_13 + 1] [i_13 + 2] [16])))));
                }
            }
        }
        arr_48 [i_12] [i_12] = ((~((~(arr_43 [i_12] [i_12])))));
    }
    for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 0;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    {
                        var_33 = (min((arr_51 [i_15] [i_15]), (max(7043533942858357719, -6432))));
                        var_34 = (min(-var_19, ((-(((arr_24 [i_17]) ? -113 : (arr_16 [2] [i_16] [i_17 + 1] [i_18])))))));
                    }
                }
            }
        }
        var_35 = ((((var_19 ? (((var_19 >= (arr_21 [i_15] [i_15] [i_15] [i_15] [i_15])))) : (max(60, (arr_0 [i_15])))))) ? (arr_42 [i_15]) : (min(var_15, ((var_1 ? 36 : var_1)))));
    }
    #pragma endscop
}
