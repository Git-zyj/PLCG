/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [6] = var_11;

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_20 = ((((((max(var_0, 65535)) & ((var_6 >> (var_10 - 58924)))))) | (min(((2016 % (arr_0 [i_2] [i_1]))), 2991308620))));
                        var_21 = 6582596190181613945;
                    }
                }
            }
            arr_11 [i_0] = var_10;
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_20 [i_4] [i_4] [i_6] = (((arr_3 [15] [8]) < (arr_6 [i_0] [i_0] [14] [19])));
                        arr_21 [12] [i_4] [i_5] [i_6] = (arr_7 [16] [i_4] [i_4] [i_0]);
                    }
                }
            }
            var_22 *= var_7;
        }

        for (int i_7 = 4; i_7 < 20;i_7 += 1)
        {
            var_23 = (arr_1 [21] [i_0]);

            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                arr_26 [i_0] [9] [i_0] = 3804888674;
                var_24 = 65530;
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_38 [i_9] [i_7] [i_9] [i_7] = 32512;
                            arr_39 [i_0] [i_9] [i_9] [i_10] [i_11] = 4294967265;
                        }
                    }
                }
                var_25 = (arr_5 [i_0] [i_7] [i_9]);
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            var_26 ^= (arr_16 [i_12] [i_0] [i_0] [2]);
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 20;i_15 += 1)
                    {
                        {
                            var_27 = 2991308620;
                            arr_50 [i_12] [i_0] [0] [6] = (((var_5 < 1303658676) == var_9));
                            arr_51 [1] [i_12] [i_12] [1] [i_15] [1] = (((arr_44 [i_0] [i_13] [i_15]) ^ 12628802558606385633));
                            var_28 = 9223372036854775783;
                            arr_52 [4] [4] [i_13 + 2] [4] [16] [i_13 + 1] [i_12] = (3007624188 - var_2);
                        }
                    }
                }
            }
            arr_53 [i_12] = ((58504 + (arr_45 [1] [21] [i_12] [i_12] [i_0] [0])));

            for (int i_16 = 4; i_16 < 21;i_16 += 1)
            {

                for (int i_17 = 1; i_17 < 21;i_17 += 1)
                {
                    var_29 = arr_8 [i_17] [i_16] [i_12];
                    var_30 = var_17;
                }
                var_31 = (min(var_31, (arr_54 [i_0] [i_12] [i_12])));
                arr_58 [i_0] [i_12] [1] = arr_7 [14] [19] [19] [1];
                arr_59 [i_0] [i_0] [i_12] [i_12] = 2016;
            }
        }
        var_32 = (min((((7117893971404761084 >= 137352538) - (23003 - 0))), 4294967295));
    }
    /* vectorizable */
    for (int i_18 = 2; i_18 < 19;i_18 += 1)
    {
        var_33 = ((61440 << ((((var_0 | (arr_45 [i_18] [i_18] [i_18] [10] [5] [0]))) - 2617244651))));
        var_34 = (arr_7 [i_18] [i_18] [i_18] [i_18]);
    }
    var_35 *= (max((2816165930 + 7398218484120767899), (min(var_18, 0))));
    #pragma endscop
}
