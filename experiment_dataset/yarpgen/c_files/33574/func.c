/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33574
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
    var_15 = ((/* implicit */unsigned int) var_14);
    var_16 += var_12;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_0 [i_0] [i_0]))));
        var_18 = ((/* implicit */signed char) var_13);
        var_19 |= ((/* implicit */unsigned long long int) var_9);
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) var_11);
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                var_21 |= ((/* implicit */unsigned short) var_4);
                var_22 = ((/* implicit */short) var_1);
                var_23 |= ((/* implicit */signed char) var_2);
                var_24 = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0]);
            }
            for (signed char i_3 = 4; i_3 < 10; i_3 += 2) 
            {
                var_25 = ((/* implicit */signed char) arr_2 [i_3] [(unsigned short)0] [i_3]);
                var_26 = ((/* implicit */unsigned int) arr_6 [i_1]);
                var_27 += ((/* implicit */unsigned char) arr_10 [i_0]);
            }
            var_28 += ((/* implicit */signed char) var_2);
            var_29 = ((/* implicit */_Bool) var_10);
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_4 = 2; i_4 < 9; i_4 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */short) arr_8 [i_4] [i_1] [9U]);
                var_31 = ((/* implicit */long long int) var_2);
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    var_32 = ((/* implicit */signed char) arr_5 [(signed char)0] [i_4] [i_5]);
                    var_33 += ((/* implicit */short) var_14);
                    var_34 += ((/* implicit */unsigned int) var_8);
                }
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    var_35 += var_14;
                    arr_19 [i_0] [i_0] [i_1] [(_Bool)1] [i_6] [i_6] = ((/* implicit */long long int) var_7);
                    var_36 = ((/* implicit */signed char) arr_3 [0U]);
                    var_37 = ((/* implicit */short) var_7);
                }
            }
            /* vectorizable */
            for (short i_7 = 2; i_7 < 9; i_7 += 1) /* same iter space */
            {
                var_38 = ((/* implicit */signed char) arr_5 [i_1] [i_1] [i_7]);
                var_39 = ((/* implicit */unsigned int) arr_16 [i_7] [i_7] [i_1] [i_0]);
                arr_23 [i_7] = ((/* implicit */long long int) arr_10 [i_0]);
                var_40 = arr_18 [i_0] [i_0] [i_1] [i_7];
            }
            for (short i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_41 = ((/* implicit */short) var_8);
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        var_42 += ((/* implicit */long long int) var_8);
                        var_43 = arr_15 [i_1] [i_8];
                    }
                    var_44 = ((/* implicit */int) var_13);
                    var_45 = ((/* implicit */short) var_9);
                    var_46 = ((/* implicit */signed char) var_3);
                }
                /* LoopSeq 3 */
                for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
                {
                    var_47 = ((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_8] [i_11]);
                    var_48 += ((/* implicit */unsigned int) var_0);
                    var_49 = arr_22 [i_0] [i_1] [(signed char)6] [i_11];
                    var_50 = ((/* implicit */_Bool) max((var_50), (var_8)));
                }
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
                {
                    var_51 = arr_1 [i_0];
                    var_52 += ((/* implicit */unsigned int) var_12);
                }
                for (unsigned short i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
                {
                    var_53 += ((/* implicit */short) arr_9 [i_0]);
                    var_54 |= ((/* implicit */signed char) var_7);
                    arr_41 [i_13] [(short)6] [1] [1] [1] = ((/* implicit */signed char) var_0);
                    var_55 = ((/* implicit */short) arr_16 [i_0] [i_0] [(signed char)3] [i_0]);
                }
                /* LoopSeq 1 */
                for (int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    var_56 = ((/* implicit */signed char) arr_33 [(signed char)4] [i_14]);
                    var_57 += ((/* implicit */signed char) arr_2 [i_0] [i_8] [i_14]);
                    var_58 = ((/* implicit */short) arr_36 [i_0] [(unsigned short)1] [i_8] [i_14] [i_1]);
                    var_59 = ((/* implicit */short) max((var_59), (((/* implicit */short) var_13))));
                    var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) var_13))));
                }
            }
        }
        /* vectorizable */
        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                var_61 = ((/* implicit */short) max((var_61), (((/* implicit */short) var_4))));
                /* LoopSeq 1 */
                for (unsigned char i_17 = 1; i_17 < 8; i_17 += 2) 
                {
                    var_62 = ((/* implicit */long long int) arr_39 [i_0] [i_15]);
                    var_63 = ((/* implicit */unsigned char) var_7);
                    var_64 = ((/* implicit */unsigned long long int) var_3);
                }
                var_65 |= ((/* implicit */signed char) var_1);
                /* LoopNest 2 */
                for (short i_18 = 3; i_18 < 10; i_18 += 2) 
                {
                    for (long long int i_19 = 1; i_19 < 10; i_19 += 2) 
                    {
                        {
                            var_66 = ((/* implicit */unsigned char) arr_3 [i_0]);
                            var_67 += ((/* implicit */short) arr_37 [i_0] [i_0] [i_18 + 1] [i_0]);
                            var_68 = ((/* implicit */unsigned long long int) arr_38 [i_0] [i_0] [i_16] [i_18] [i_19]);
                            var_69 = ((/* implicit */signed char) arr_34 [i_0] [i_15] [i_16] [i_18] [i_19 - 1] [i_16]);
                            arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] |= ((/* implicit */long long int) var_8);
                        }
                    } 
                } 
            }
            var_70 = ((/* implicit */short) var_4);
            var_71 = ((/* implicit */unsigned char) var_11);
        }
        for (unsigned short i_20 = 0; i_20 < 11; i_20 += 2) /* same iter space */
        {
            var_72 = ((/* implicit */signed char) arr_54 [i_0] [i_20] [2U] [i_20] [i_20]);
            var_73 = ((/* implicit */signed char) max((var_73), (((/* implicit */signed char) arr_54 [i_0] [i_20] [i_20] [i_20] [i_20]))));
            var_74 = ((/* implicit */signed char) var_10);
            var_75 = ((/* implicit */unsigned short) arr_5 [i_0] [i_20] [(unsigned char)0]);
        }
        arr_60 [i_0] [i_0] = ((/* implicit */signed char) var_11);
    }
    for (long long int i_21 = 0; i_21 < 11; i_21 += 2) /* same iter space */
    {
        var_76 += ((/* implicit */unsigned int) var_3);
        var_77 = ((/* implicit */short) var_12);
        var_78 = ((/* implicit */unsigned int) var_3);
    }
}
