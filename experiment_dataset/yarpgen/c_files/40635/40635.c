/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (min((max((4294967295 > 33983), var_11)), (max(33983, 4294967295))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_14 = (--12559);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = ((~(~var_3)));
                                var_15 &= (!52979);
                                var_16 = (min(222927762, 12582));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_17 = (28 > 1);
                            var_18 = (min(var_18, (((12582 ? 4398046511103 : 0)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_19 = (--91);
                            var_20 = var_3;
                            var_21 = (max(((max((arr_31 [i_10 - 3] [i_10] [i_7] [i_10 - 1] [i_10]), 1))), (~31552)));
                            var_22 = (((((2010195714 ? 20174 : -1710127827))) || ((var_0 >= (arr_23 [i_8] [i_8 - 2])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_23 = (~1);
                                var_24 = ((((((1439478382 > 42302) ^ var_10))) ? ((~((((arr_23 [i_7] [i_7]) >= var_9))))) : ((-(((arr_6 [i_7] [i_8]) ? var_5 : var_3))))));
                                var_25 = (min(((max((arr_21 [i_7] [i_7]), (arr_39 [i_7] [i_7] [i_11] [i_12] [i_13])))), (max((31 | -20169), ((max((arr_27 [i_7] [i_8] [i_7]), (arr_5 [i_7] [i_11]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 1; i_14 < 13;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 12;i_16 += 1)
            {
                {
                    var_26 = (~2251799813685247);
                    arr_48 [i_15] [i_15] = ((((!(arr_0 [i_14]))) ? (arr_9 [i_15] [i_15] [i_15]) : ((((!(arr_11 [i_14] [i_14] [i_14] [i_15] [19])))))));
                    var_27 = (((((arr_43 [i_15 + 1]) + (arr_44 [i_14] [i_15 - 1] [i_15]))) + (((+((var_2 ? (arr_16 [i_15]) : (arr_17 [1] [i_15] [i_14]))))))));
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 12;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 13;i_18 += 1)
                        {
                            {
                                var_28 = (min(var_28, (((-(arr_19 [i_16] [i_16] [i_17]))))));
                                var_29 = (max(var_29, ((max((var_10 || var_4), 222927762)))));
                                arr_54 [i_14] [i_15 + 1] [i_15] [13] [i_15] [i_15 + 1] = ((~((max((arr_16 [i_15]), 5329)))));
                            }
                        }
                    }
                    arr_55 [i_14] [i_16] [i_14] &= (min((arr_50 [i_14] [i_16] [i_14] [i_15] [i_15] [i_16]), ((-5371077649586105304 ? 154 : 17094888591029336824))));
                }
            }
        }
    }
    #pragma endscop
}
