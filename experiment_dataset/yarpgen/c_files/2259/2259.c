/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_18 = (min(var_18, (arr_0 [i_0 + 1])));
                arr_8 [i_1] [i_2] = (((((-(arr_1 [i_0 + 4])))) || (((4513942477994939217 ? -1466267860699166719 : 1)))));
                var_19 &= (0 != -var_2);
            }
            var_20 = (((-((~(arr_0 [i_1]))))));
        }
        arr_9 [i_0 + 2] &= ((-(((((var_5 ? 87 : var_15))) - (var_17 + 1122249013323784686)))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_21 ^= var_2;
        arr_12 [i_3] = ((-(min(var_7, ((((arr_10 [i_3]) ? (arr_11 [i_3] [i_3]) : (arr_5 [i_3] [i_3]))))))));

        /* vectorizable */
        for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_22 += (arr_13 [i_5]);
                            arr_21 [i_3] [i_5] [i_5] [i_3] [i_6] = (((arr_20 [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_5] [i_5]) ? 14454344384959993 : (arr_0 [i_4 + 1])));
                            var_23 = (((~-6578577202751889996) ? ((var_0 ^ (arr_4 [i_3] [i_4] [i_5]))) : (arr_0 [i_3])));
                        }
                    }
                }
                var_24 = (max(var_24, var_12));
                var_25 = ((((var_13 ? 0 : var_5)) - var_9));
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        var_26 = ((var_12 == ((((arr_11 [i_4 - 3] [i_4 + 2]) ? (arr_0 [i_8]) : var_17)))));
                        arr_27 [i_3] [i_8] [i_8] [i_3] [i_9] [i_3] = (arr_13 [i_3]);
                        arr_28 [i_9] [i_4] [i_8] [i_9] [i_3] [i_9] &= var_7;
                        arr_29 [i_3] [i_4 + 2] [i_3] = ((16924762912987646187 ? var_7 : (arr_11 [i_3] [i_4])));
                        arr_30 [i_3] [i_9] [i_3] = (~61);
                    }
                }
            }
        }
        for (int i_10 = 3; i_10 < 12;i_10 += 1) /* same iter space */
        {
            var_27 = (arr_1 [i_10]);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 11;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            var_28 &= (((var_4 ? var_7 : (~var_15))));
                            var_29 = var_12;
                            var_30 = (min((((arr_22 [i_3] [i_10 - 3] [i_11] [i_3]) & ((37209 - (arr_0 [i_3]))))), (~-192)));
                            var_31 = (3280607684 + var_10);
                        }
                        for (int i_14 = 2; i_14 < 13;i_14 += 1)
                        {
                            arr_44 [i_14] [i_12] [i_3] [i_10 + 3] [i_3] = var_14;
                            var_32 = 13088987094253078632;
                        }
                        var_33 = (max(var_33, (((-(((arr_34 [i_12]) ? ((var_16 ? var_0 : -5036292779715417003)) : -var_6)))))));
                        var_34 = var_17;
                    }
                }
            }
        }
        for (int i_15 = 3; i_15 < 12;i_15 += 1) /* same iter space */
        {
            var_35 = (max(var_35, (((var_16 * (((arr_43 [i_3] [i_3] [i_3] [i_3] [i_3]) / (((arr_41 [i_15 + 2] [i_15] [i_15 - 1] [i_3] [i_3] [i_3] [i_3]) ? (arr_41 [i_3] [i_3] [i_3] [i_15] [i_15 - 2] [i_15] [i_15]) : var_2)))))))));
            var_36 = ((~(((arr_34 [i_3]) * var_6))));
            arr_48 [i_3] [i_15] [i_3] = ((~(((((413545296 ? (arr_17 [i_3] [i_3] [i_3] [i_15] [i_15 - 2] [i_15]) : var_8)) != (((max((arr_5 [i_3] [i_3]), (arr_1 [i_3]))))))))));
            arr_49 [i_3] [i_15 + 2] = ((6 ? ((((((var_4 ? var_10 : 14094)) > ((((arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? var_13 : (arr_38 [i_3] [i_15 - 2] [i_15 + 2] [i_3])))))))) : (min((((-9223372036854775807 - 1) ? (arr_0 [i_3]) : (arr_17 [i_3] [i_3] [i_15] [i_15 - 1] [i_15 + 3] [i_15]))), var_4))));
        }
    }
    var_37 = var_2;
    var_38 = (!var_11);
    #pragma endscop
}
