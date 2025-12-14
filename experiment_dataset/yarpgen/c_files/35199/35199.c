/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((min(4517, var_15))) ? -0 : ((max(var_5, -448771252))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = (((max((arr_2 [i_0 - 1]), var_1)) * ((((arr_2 [i_0]) & (arr_2 [i_0 + 1]))))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_18 = (((3799790429 ? 3799790425 : 418326000562529484)));
                            var_19 = (var_13 ? (!3799790429) : 2874944478);
                        }
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-((((-9223372036854775807 - 1) < var_2)))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_5] = (16040234026613774143 ? 3 : 3226691921);
                            var_20 = (arr_4 [i_0] [i_0 - 1]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_6] [i_6] [i_6] [i_0 + 1] = (((arr_12 [i_0] [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 2]) ? (arr_9 [i_1 + 1]) : (arr_7 [i_2 - 1])));
                            var_21 = 48;
                            arr_25 [i_0 - 1] [i_0 - 1] [i_2] [i_6] [i_6] = (~250);
                            var_22 = ((~(arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_2 - 3])));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_23 = ((((((arr_6 [i_2] [i_1 + 1]) ? (((var_3 ? -5535 : (arr_19 [i_2] [i_7] [i_2 - 3] [i_3] [i_7])))) : (arr_12 [i_2 + 2] [i_1 - 1] [i_2] [i_0 - 1] [i_7])))) ? (arr_8 [i_2] [i_1] [i_2]) : 15872));
                            var_24 = (min(var_24, 5877241036149608576));
                        }
                    }
                }
            }
            var_25 -= ((((((~2519453808) >> (((max(var_15, var_2)) - 3905861141))))) ? (max(((89 ^ (arr_6 [i_0 - 2] [i_1]))), 65519)) : ((((arr_0 [i_0] [i_0]) | (arr_22 [i_0 + 1] [i_1] [i_1] [i_0] [i_1]))))));
            var_26 = (((max(var_2, (min(var_4, (arr_17 [6] [i_0] [i_0] [i_1 - 1] [i_1 + 1] [6]))))) - (arr_13 [i_0] [i_1] [i_0 - 1] [i_0 - 1] [i_1 + 1])));
            var_27 = (arr_5 [i_1] [i_0] [i_0]);
        }
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            var_28 = 0;
            arr_30 [i_8] [i_8] = (arr_28 [i_8] [i_8 + 2] [i_8]);
            arr_31 [i_8] = ((((max((3 && 833918337636459380), (min((arr_26 [i_0 + 1] [i_0] [i_8]), (arr_8 [i_0 + 1] [i_8 - 1] [i_8]))))))) / var_16);
            arr_32 [i_0 + 1] [i_8] [i_8 + 2] = ((((max(15872, -1))) ? (arr_22 [i_0] [i_0] [i_0] [i_0] [i_8]) : (((arr_18 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2]) | (min(0, 8423079757165509040))))));
        }
        for (int i_9 = 1; i_9 < 7;i_9 += 1)
        {
            var_29 = (arr_27 [i_0 - 2] [i_9 + 1] [i_9 + 3] [i_9 + 1] [i_9]);
            arr_36 [i_0] [i_9] = ((~(max((15114 || 49664), ((var_7 << (var_4 + 2072828574618417228)))))));
            var_30 = (arr_13 [i_0 - 2] [i_9] [i_9] [i_9] [i_9]);
            var_31 = (arr_23 [i_0 + 1] [i_0] [i_0] [i_9] [0]);
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            arr_40 [i_10] = 8423079757165509040;
            var_32 *= (((((-(0 | var_1)))) ? (arr_20 [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) : 13034133544399214896));
        }
        var_33 = ((-var_7 ? var_3 : (((((1 ? (arr_28 [6] [i_0 - 2] [i_0]) : var_9))) ? (arr_28 [0] [i_0 - 2] [i_0 - 2]) : 2132138482))));
        arr_41 [i_0] = ((-(arr_19 [i_0] [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 2])));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_44 [1] |= (((var_5 || ((((arr_43 [i_11]) | var_8))))) ? (((0 ? 4 : 7390))) : (arr_43 [i_11]));
        var_34 = -1;
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        var_35 = (arr_46 [i_12] [i_12]);
        arr_48 [i_12] = (((((+(min((arr_45 [i_12] [i_12]), (arr_47 [i_12])))))) ? (arr_46 [i_12] [i_12]) : -var_2));
    }
    var_36 = var_8;
    #pragma endscop
}
