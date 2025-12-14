/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, ((((((-(arr_0 [0])))) || ((max(var_7, (max(32759, (arr_1 [i_0])))))))))));
        var_18 = (max(var_18, ((((((-(arr_2 [i_0] [i_0])))) != ((((~(arr_1 [i_0]))) + -var_7)))))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((((min(((((arr_5 [8] [8]) >= (arr_0 [i_0])))), ((-(arr_1 [1])))))) || (arr_3 [i_0] [i_0] [12])));
            var_19 = (((min((arr_5 [i_1 - 2] [i_1 + 1]), (arr_1 [i_0]))) / (arr_0 [i_0])));
            var_20 -= ((-((((min(-27110, -1))) ? var_4 : -32759))));
            arr_7 [i_0] [8] &= (max(-32767, 11));
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_21 = max((((~(arr_16 [i_0] [i_0] [i_2 - 1] [i_4] [i_0])))), 2746068620661785228);
                            var_22 -= (((arr_10 [i_4] [i_3] [i_2] [i_0]) ? (max((arr_11 [9]), (arr_5 [i_5] [i_5]))) : ((((arr_8 [i_0] [0]) ? (arr_8 [i_0] [10]) : (arr_8 [i_0] [0]))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_23 = ((((((arr_21 [i_7]) & (((arr_3 [i_7] [i_6] [i_0]) << (arr_11 [i_2])))))) ? 57916 : ((max(255, -32760)))));
                            arr_26 [i_0] = var_12;
                        }
                    }
                }
            }
        }
        var_24 += (min(7619, (((var_14 % var_0) ? (arr_21 [i_0]) : ((-(arr_18 [i_0] [i_0] [i_0])))))));
        var_25 -= (max(32767, 96));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                {
                    var_26 &= (max((max(((var_15 ^ (arr_32 [0] [0]))), (arr_18 [i_10 - 2] [i_10 - 2] [i_9]))), var_7));
                    var_27 = ((57917 || ((max(((max(5406084191295188243, (arr_18 [i_9] [5] [i_11])))), (min((arr_23 [i_9] [i_9]), (arr_32 [i_9] [i_9]))))))));
                    var_28 -= arr_15 [1] [i_11] [i_10] [8] [i_10 + 1] [8] [8];
                }
            }
        }
        var_29 += (arr_37 [i_9] [i_9] [i_9]);
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {
                        arr_48 [i_9] [i_12] [i_13] [i_14] = (((min((arr_27 [i_9] [i_9]), (arr_27 [i_9] [i_9]))) + ((min((arr_43 [i_14] [i_13] [i_12] [i_9]), (arr_43 [i_9] [i_9] [i_9] [i_9]))))));
                        var_30 ^= -5887;
                        var_31 = (max(var_31, ((max((arr_12 [12] [12] [12] [12]), (arr_19 [i_9] [i_9] [i_9] [i_14]))))));
                        var_32 *= (min(11, ((max(32767, (arr_30 [i_13]))))));
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        var_33 *= (arr_29 [8]);
        var_34 = ((max(((max((arr_41 [8] [i_15]), var_15))), 32767)));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 11;i_18 += 1)
                {
                    {
                        var_35 = (min(var_35, ((((2344931312 ^ (arr_43 [i_16] [i_16] [i_18 - 3] [i_16]))) >= ((~(arr_16 [0] [0] [i_18 - 1] [i_16] [0])))))));
                        var_36 += ((~(arr_27 [12] [12])));
                        arr_60 [i_15] [i_16] [12] [i_15] = ((((((arr_33 [i_15] [i_16] [i_15]) != (arr_56 [i_15] [i_16] [i_17] [i_18] [i_16] [i_17])))) & (((arr_56 [i_18 + 1] [i_18] [i_17] [i_15] [i_15] [i_15]) ? 32759 : -5887))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_19 = 3; i_19 < 16;i_19 += 1)
    {
        for (int i_20 = 4; i_20 < 17;i_20 += 1)
        {
            {
                arr_66 [10] [i_20] |= min((arr_64 [i_19 - 2] [i_19 + 1]), (arr_65 [i_20 + 1] [6] [i_20 + 1]));
                arr_67 [12] [0] [12] &= (((((106 ? 1 : 0))) >= (arr_63 [i_20])));
                var_37 += ((((arr_64 [i_19 + 1] [i_19 - 2]) & (arr_63 [i_19 - 2]))));
            }
        }
    }
    #pragma endscop
}
