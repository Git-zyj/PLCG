/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 -= 65535;
                var_15 = (min(var_15, (arr_4 [i_0] [i_1] [i_0])));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_16 = (min(var_16, (arr_8 [4] [4])));

                        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            var_17 = ((15685677065036081283 && (~15685677065036081283)));
                            arr_12 [i_0] [i_3] [i_2] [i_3] |= ((((min(-1926355275, -1))) ? -3961906452889413509 : (((724917056 % (arr_7 [i_4 + 1] [i_1] [i_2] [i_0]))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_18 = var_12;
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 2147483646;
                            var_19 = (max(var_19, (arr_2 [i_0])));
                            arr_16 [i_2] [i_3] [i_0] = 3570050240;
                        }
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_6] = arr_9 [i_1] [i_1] [i_2] [i_6] [i_0];
                        var_20 = 1;

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            var_21 = (min(var_21, var_8));
                            arr_22 [i_0] [i_6] [i_2] [i_1] [i_0] = (+-103);
                            var_22 = var_13;
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_0] = (-6640511257675072316 <= -2147483646);
                            var_23 |= (1 <= 0);
                            var_24 ^= (min((((!(((arr_24 [i_0] [i_1] [i_2] [i_2] [i_6] [i_2]) || 252))))), (max((arr_5 [i_6] [9] [i_1]), (arr_5 [i_0] [i_0] [i_0])))));
                            arr_26 [i_0] [i_0] = ((!(-7064442626014702654 == 1)));
                            var_25 = ((-1 >= ((-(min(0, 31))))));
                        }
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            var_26 = (min(var_26, (arr_7 [i_0] [i_1] [i_2] [i_6])));
                            var_27 = (((((-1 ? 2761067008673470333 : 635902862))) ? -1926355275 : ((8527516700128521293 ? -1572229162129772757 : (arr_20 [i_9] [i_0] [i_9] [i_9] [i_9 - 1])))));
                            var_28 = (((!19423) ? (1 == var_9) : (((!((((arr_27 [i_6] [i_0] [i_6] [i_6]) ? (arr_18 [i_1] [i_2] [i_6] [i_0]) : (arr_6 [i_9 - 1] [i_6] [i_2])))))))));
                            arr_29 [i_0] [i_1] [i_0] [i_6] [i_9 + 2] = (max((((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_2 [i_2]))), ((min((arr_11 [i_0] [i_6] [i_2] [i_6] [i_9] [i_2] [i_6]), (arr_11 [0] [i_0] [i_1] [i_2] [1] [i_9] [i_9]))))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            arr_32 [i_0] [i_0] [0] [i_6] [i_10] = (1 >= 4461281929149844992);
                            var_29 = (0 || 17);
                        }
                        var_30 = (min(var_30, (((((!((min((arr_2 [i_0]), var_3))))) || (-127 || var_5))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_31 = (((var_2 <= -1) ? var_2 : (((arr_8 [i_0] [i_1]) ? var_0 : 8527516700128521313))));
                        var_32 = ((~(arr_35 [i_0] [i_0] [i_1] [i_0])));
                        var_33 = (var_7 >= (arr_18 [i_0] [i_0] [i_0] [i_0]));
                        var_34 = arr_33 [i_11] [i_2] [i_1] [i_1] [1] [i_0];
                        arr_36 [1] [i_2] [i_2] [i_2] [10] [1] |= (arr_9 [i_11] [1] [i_2] [i_1] [i_0]);
                    }
                    arr_37 [i_0] [i_0] [2] |= (arr_24 [i_0] [i_0] [i_1] [9] [i_2] [i_2]);
                    var_35 ^= ((((max((~var_12), var_4))) <= -25));
                    arr_38 [i_0] = var_7;
                }
                for (int i_12 = 3; i_12 < 11;i_12 += 1)
                {
                    arr_42 [i_0] [i_0] [4] = ((~(arr_33 [i_0] [i_1] [i_12 - 2] [9] [i_0] [4])));
                    var_36 = var_9;
                    arr_43 [i_0] [1] [i_12 - 3] [i_1] = (~var_1);
                }
                arr_44 [i_0] [i_0] = ((((min((arr_11 [i_0] [i_1] [i_0] [i_0] [3] [i_0] [i_1]), var_8))) - ((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 77)))));
            }
        }
    }

    /* vectorizable */
    for (int i_13 = 1; i_13 < 10;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    {
                        arr_57 [i_13] = ((-(arr_53 [i_13 + 1] [i_13 - 1] [i_13 + 1] [8] [i_13 + 2] [i_13 + 2])));
                        var_37 = (min(var_37, ((((arr_2 [i_13 + 2]) + (arr_0 [i_15 + 1]))))));
                    }
                }
            }
        }
        arr_58 [i_13] = (arr_39 [1] [2] [i_13]);
        var_38 = ((arr_9 [i_13] [i_13] [i_13] [i_13] [i_13 - 1]) >= (!14922912247511257580));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        var_39 = ((0 ? 1 : 1257605631966954749));
        var_40 = (((arr_14 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) ? ((-1 ? -5226938684599511242 : var_1)) : var_5));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 12;i_20 += 1)
                {
                    {
                        arr_67 [i_19] [i_18] [i_17] = var_9;
                        arr_68 [i_17] [1] |= (arr_52 [i_17]);
                        var_41 = 1;
                    }
                }
            }
        }
        var_42 = (((arr_10 [i_17] [i_17] [i_17] [i_17]) ? (arr_10 [i_17] [i_17] [i_17] [i_17]) : 1));
    }
    var_43 = (min(var_43, ((min(-22117, ((15162653945717133558 ? ((var_10 ? -1 : 1)) : 29704)))))));
    #pragma endscop
}
