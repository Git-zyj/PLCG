/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? ((min((arr_1 [i_0]), (arr_1 [i_0])))) : (((var_1 == (var_1 || var_3))))));
        arr_3 [12] [i_0] = (min(var_4, var_4));

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = var_8;
            var_10 = ((var_9 ? ((((arr_5 [i_1] [i_1] [i_0]) < var_9))) : ((min((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_1] [i_0] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_0] [i_3] [i_0] = var_4;
                var_11 = var_0;
                var_12 = (max(var_12, (((((min((arr_4 [i_0] [i_2] [i_0]), (arr_8 [i_0])))) ? var_7 : (52082 >> 1))))));
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
            {
                var_13 = (arr_15 [i_4] [i_0]);
                var_14 |= ((((min((min((arr_8 [i_0]), (arr_7 [i_0] [i_2]))), var_3))) ? (arr_16 [i_2] [i_2] [i_0]) : (((min((arr_5 [i_0] [i_2] [i_4]), var_5))))));
                var_15 = var_1;
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                arr_21 [i_0] [i_0] [i_0] = (((min((arr_7 [i_2] [i_2]), var_1)) == (min((arr_11 [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_5])))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_16 = (arr_10 [i_0] [i_0] [i_5] [i_0]);
                    var_17 = (max(var_17, (((var_9 == ((var_2 ? (arr_22 [i_0] [i_2] [i_5] [i_2] [12]) : (arr_25 [i_0] [i_2] [i_0] [i_0]))))))));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_7] [i_8] = var_6;
                            arr_31 [i_0] [i_0] [i_5] [i_0] [12] = min(var_5, (min((((arr_15 [i_0] [i_2]) ? (arr_0 [i_0]) : var_9)), (((var_8 && (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            var_18 += var_7;
                            var_19 &= (arr_11 [i_8] [i_5] [i_0]);
                            arr_32 [i_0] [i_0] [i_8] = (max((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))), (var_4 != var_9)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_39 [i_0] [i_2] [i_9] [i_0] = (arr_8 [i_9 - 3]);
                        arr_40 [i_0] [i_0] [i_9] [i_0] = (arr_19 [i_9 - 1] [i_0] [i_9 + 3]);
                        arr_41 [i_0] [i_9 - 1] [3] [i_0] = max(20, 41429);
                        var_20 += ((((min((arr_20 [i_2]), ((min(var_6, var_9)))))) == ((var_8 + (var_3 + var_9)))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_21 = (min((((((min(var_3, var_2))) || var_9))), var_1));
                            var_22 += max((var_8 / var_4), (arr_23 [14] [6] [i_2] [i_12] [i_12] [i_12]));
                            arr_48 [i_0] [i_2] [i_2] [i_2] [i_0] [i_12] [i_0] |= min(var_1, (((((min(var_7, (arr_35 [i_2])))) ? var_5 : ((((arr_35 [i_2]) || var_1)))))));
                            var_23 = ((((min((arr_43 [i_0] [i_0] [i_11] [i_12]), ((min(var_3, (arr_1 [i_0]))))))) ? ((var_8 ? (arr_42 [i_0] [i_2] [i_0]) : ((min(var_2, var_5))))) : (arr_22 [i_13] [i_2] [i_2] [i_0] [i_2])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
        {
            var_24 = var_6;
            var_25 = (max(var_25, ((((arr_23 [i_0] [i_14] [i_14] [i_0] [i_14] [i_0]) ? (arr_23 [i_0] [i_14] [i_14] [i_0] [i_0] [i_0]) : (arr_44 [i_0] [i_0] [i_0] [i_0] [i_14] [i_14]))))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
        {
            arr_54 [i_15] |= (arr_7 [i_0] [i_15]);
            var_26 = (arr_8 [i_0]);
        }
        var_27 ^= var_7;
    }
    var_28 = var_3;
    var_29 &= var_6;
    var_30 = var_5;
    var_31 = (min(var_31, ((min((((var_1 ^ var_5) || ((min(var_9, var_5))))), (((min(var_9, var_4)) != var_4)))))));
    #pragma endscop
}
