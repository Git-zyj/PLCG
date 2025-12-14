/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192471
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] = var_8;
                    arr_9 [i_0] [i_1 - 1] [i_1] = ((/* implicit */long long int) var_2);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) var_10);
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            arr_15 [(_Bool)1] = ((/* implicit */int) arr_13 [i_4]);
            arr_16 [i_3] [i_3] [i_4] = ((/* implicit */long long int) var_4);
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_11 [i_3] [i_5 - 1])))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                arr_25 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((unsigned short) (+(arr_20 [i_3] [i_3] [i_6]))));
                var_18 ^= ((/* implicit */short) arr_24 [i_5 - 1] [i_5 - 1]);
            }
            for (short i_7 = 3; i_7 < 23; i_7 += 2) 
            {
                var_19 -= ((unsigned short) (!(((/* implicit */_Bool) arr_13 [i_5 - 1]))));
                var_20 = ((/* implicit */int) (-(arr_20 [i_5] [i_5 - 1] [i_5 - 1])));
                /* LoopSeq 1 */
                for (short i_8 = 1; i_8 < 23; i_8 += 2) 
                {
                    arr_30 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_5);
                    arr_31 [i_7] [i_7] [(signed char)2] [i_7] [i_5] [i_3] = ((/* implicit */unsigned long long int) arr_26 [i_3] [i_3] [(signed char)7]);
                    arr_32 [i_7] = ((/* implicit */long long int) var_2);
                    var_21 = ((/* implicit */unsigned long long int) ((unsigned short) (~(arr_26 [i_3] [i_5 - 1] [i_5 - 1]))));
                }
                var_22 = ((/* implicit */unsigned long long int) arr_23 [i_3] [i_3] [5LL] [5LL]);
                var_23 = ((/* implicit */int) arr_22 [i_5] [i_5] [i_3]);
            }
        }
        for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_42 [i_3] [i_3] [i_3] [i_3] [i_3] [i_12] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_12 - 1] [i_9]))));
                            var_24 &= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(arr_23 [i_3] [i_3] [i_3] [i_3]))))));
                        }
                    } 
                } 
            } 
            arr_43 [i_3] [i_3] [i_9] = ((/* implicit */unsigned int) ((int) arr_22 [i_3] [i_9] [i_3]));
            /* LoopSeq 1 */
            for (signed char i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                arr_47 [i_3] [i_9] [i_9] = (+(((/* implicit */int) arr_46 [i_3] [i_9] [21])));
                arr_48 [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) (~(var_7))));
            }
        }
        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 2) 
        {
            arr_51 [(_Bool)1] [i_14] = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_3] [i_14] [i_3]))))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_11 [i_3] [i_14]))));
            arr_52 [i_3] [(unsigned short)18] [i_3] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_14))))));
        }
        arr_53 [i_3] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 14; i_15 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 14; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 2; i_17 < 11; i_17 += 2) 
            {
                {
                    var_26 -= ((/* implicit */_Bool) var_11);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        arr_64 [i_15] [i_16] [i_15] [i_17] [i_18] = ((/* implicit */unsigned char) (+(arr_21 [i_17 + 3] [i_17 - 1] [i_17 + 2] [i_17 - 1])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned int) arr_10 [i_15]);
                            var_28 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_44 [i_15] [i_15] [i_15]))))));
                            var_29 = ((/* implicit */unsigned long long int) arr_17 [i_17] [i_17 - 1] [i_17 + 1]);
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_20 = 3; i_20 < 12; i_20 += 2) 
                        {
                            arr_71 [i_15] [i_20] [i_15] [i_18] [i_20 - 3] = ((/* implicit */unsigned long long int) arr_14 [i_15] [i_17] [i_20]);
                            arr_72 [i_17 + 2] [i_18] [i_20] = arr_41 [i_15] [i_15] [i_15] [i_15] [i_15];
                            arr_73 [i_15] [i_16] [i_15] [i_20] [i_20 + 1] = (!((!(((/* implicit */_Bool) arr_61 [i_15] [(signed char)10] [i_15])))));
                            arr_74 [i_15] [(unsigned short)0] [(unsigned short)0] [i_15] [i_20] &= ((/* implicit */int) arr_24 [4] [i_16]);
                        }
                        for (unsigned long long int i_21 = 2; i_21 < 13; i_21 += 2) /* same iter space */
                        {
                            var_30 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
                            arr_79 [i_15] [i_15] [i_17 - 1] [i_16] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) var_2);
                            arr_80 [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                            arr_81 [i_15] [i_16] [i_17] = ((/* implicit */short) arr_36 [i_17]);
                        }
                        for (unsigned long long int i_22 = 2; i_22 < 13; i_22 += 2) /* same iter space */
                        {
                            arr_85 [i_15] [i_15] [i_15] = ((/* implicit */int) arr_11 [i_15] [i_15]);
                            var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_69 [6U] [i_17 + 2] [i_17 + 2]))));
                            arr_86 [i_15] [i_15] [(_Bool)1] [i_15] [i_15] [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_23 = 1; i_23 < 12; i_23 += 2) 
                        {
                            arr_89 [i_15] [(signed char)9] [i_17] [i_23] [(signed char)0] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_82 [i_15] [i_15] [i_15] [i_17] [i_18] [i_23] [i_23 + 2]))))));
                            arr_90 [i_15] [i_23] [i_17] [i_18] [i_17] = ((/* implicit */long long int) arr_44 [i_17] [i_17] [i_17]);
                        }
                        for (unsigned long long int i_24 = 4; i_24 < 12; i_24 += 2) 
                        {
                            var_32 -= ((/* implicit */unsigned short) arr_46 [i_15] [i_15] [i_24]);
                            arr_93 [i_15] [i_16] [i_17] [i_18] [i_24 + 1] = ((/* implicit */short) (-(((/* implicit */int) arr_41 [i_24 - 1] [i_18] [i_15] [i_16] [i_15]))));
                        }
                        arr_94 [i_18] [i_16] [i_16] [i_15] [i_15] [i_15] = arr_27 [i_15] [i_15];
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        arr_98 [i_25] [i_15] [i_25] [i_15] [i_15] = ((/* implicit */long long int) (~(arr_24 [i_17] [i_17 + 2])));
                        /* LoopSeq 2 */
                        for (unsigned int i_26 = 4; i_26 < 13; i_26 += 2) 
                        {
                            arr_101 [i_25] [i_25] [i_17] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_13))));
                            arr_102 [i_25] [i_16] [i_17] [i_16] [i_26] = ((/* implicit */unsigned short) (!(arr_17 [i_15] [i_16] [i_17 + 3])));
                        }
                        for (int i_27 = 0; i_27 < 14; i_27 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned char) (~(arr_37 [i_17] [i_17] [i_17 + 2] [i_17 + 1])));
                            var_34 -= ((/* implicit */_Bool) ((signed char) arr_78 [6U] [i_17 + 1] [i_17 + 1] [6U] [i_15]));
                        }
                    }
                    var_35 = ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
                }
            } 
        } 
        arr_105 [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_75 [i_15] [i_15]))));
        arr_106 [i_15] = ((/* implicit */long long int) (+((+(arr_24 [i_15] [i_15])))));
        var_36 = ((/* implicit */unsigned short) (!(arr_62 [i_15])));
        var_37 = ((/* implicit */short) (!(arr_19 [i_15])));
    }
}
