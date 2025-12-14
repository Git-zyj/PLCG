/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31516
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
    var_20 = ((/* implicit */unsigned short) (unsigned char)96);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [(short)10] [i_1 + 1] [i_0] [(short)10] |= ((/* implicit */long long int) var_6);
                    var_21 *= ((/* implicit */unsigned long long int) arr_5 [18U] [0U]);
                    arr_9 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)96)), ((unsigned short)8191)));
                                var_23 = (-(((/* implicit */int) max((var_16), (arr_12 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_3] [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 0LL)) ? (-1054485808) : (((/* implicit */int) (unsigned short)19114))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_25 += ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)8191))));
        /* LoopSeq 2 */
        for (long long int i_6 = 4; i_6 < 23; i_6 += 2) 
        {
            var_26 = ((/* implicit */unsigned short) 641259393U);
            arr_20 [i_5] [i_5] = ((/* implicit */short) (-(((18446744073709551604ULL) + (((/* implicit */unsigned long long int) arr_17 [i_5]))))));
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                var_27 *= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-17)) - (((/* implicit */int) (unsigned char)19))));
                var_28 -= ((/* implicit */int) ((short) (unsigned short)30712));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        {
                            var_29 *= ((/* implicit */unsigned int) min((arr_27 [i_6] [i_6 - 3] [i_6] [i_6 - 3] [i_6]), (arr_27 [i_6] [i_6 + 2] [i_6] [i_6 + 1] [0])));
                            var_30 *= ((/* implicit */_Bool) arr_17 [i_5]);
                            var_31 -= ((/* implicit */signed char) var_7);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 2; i_11 < 24; i_11 += 3) 
                {
                    for (short i_12 = 1; i_12 < 24; i_12 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_15))) >= (-6LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_11 - 2] [i_12 + 1] [i_12] [i_12])) && (((/* implicit */_Bool) 0ULL)))))) : (18446744073709551604ULL))))));
                            var_33 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) && ((!(((/* implicit */_Bool) (signed char)40)))))))) / (min(((-(-8472745999412664804LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_14 = 1; i_14 < 24; i_14 += 1) 
                {
                    for (int i_15 = 3; i_15 < 23; i_15 += 3) 
                    {
                        {
                            arr_47 [i_5] [i_6 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (8472745999412664804LL)));
                            var_34 = ((/* implicit */unsigned short) ((int) arr_38 [i_14] [i_5] [i_13]));
                            var_35 = ((/* implicit */unsigned int) arr_23 [i_5] [i_15 + 2] [i_15]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_16 = 3; i_16 < 22; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 4) 
                    {
                        {
                            arr_52 [i_5] [i_6] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)244)) ? (-2034983272) : (((/* implicit */int) arr_21 [i_6 + 1] [i_6 - 3] [i_6] [i_6 + 2]))));
                            var_36 &= ((/* implicit */short) ((1528377906U) >> (((((/* implicit */int) (signed char)-8)) + (39)))));
                        }
                    } 
                } 
                arr_53 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_6 - 3] [i_6] [i_5] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6 + 2] [i_6 - 1] [i_5] [i_13]))) : (641259393U)));
            }
        }
        for (unsigned short i_18 = 3; i_18 < 23; i_18 += 4) 
        {
            var_37 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(15923911583414080678ULL)))) ? (((((/* implicit */_Bool) -128272485)) ? (var_10) : (((/* implicit */unsigned long long int) arr_31 [i_5] [i_18] [i_18 + 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-27631)) ^ (((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 2 */
            for (unsigned short i_19 = 2; i_19 < 23; i_19 += 2) 
            {
                var_38 = ((/* implicit */int) var_9);
                var_39 -= ((/* implicit */unsigned long long int) (_Bool)1);
                arr_60 [i_19] [i_19] [i_19] [i_5] &= ((/* implicit */_Bool) ((unsigned int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) * (2944915739U))), ((-(641259393U))))));
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 25; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */_Bool) ((unsigned short) min((0LL), (((/* implicit */long long int) (short)3375)))));
                            var_41 = ((/* implicit */long long int) (-(15923911583414080648ULL)));
                            arr_66 [i_5] [i_18] [i_5] [i_20] [21U] = ((/* implicit */unsigned short) 2522832490295470968ULL);
                        }
                    } 
                } 
                var_42 = ((((/* implicit */_Bool) ((short) 1673039547U))) ? (((/* implicit */int) ((((/* implicit */int) arr_51 [i_5] [i_18] [i_18 + 1] [i_19 + 1] [i_19 - 1])) >= (((/* implicit */int) arr_51 [i_5] [i_5] [i_18 + 2] [i_19] [i_19 - 2]))))) : (((/* implicit */int) ((((int) 15923911583414080648ULL)) < ((-(arr_61 [i_5] [i_5])))))));
            }
            for (short i_22 = 0; i_22 < 25; i_22 += 4) 
            {
                var_43 = ((/* implicit */long long int) (((+(((unsigned int) (short)-22461)))) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                arr_69 [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
            }
        }
        var_44 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_37 [i_5] [i_5] [i_5])), (var_10))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned long long int) (unsigned short)30733)))))));
        /* LoopNest 3 */
        for (int i_23 = 4; i_23 < 23; i_23 += 4) 
        {
            for (short i_24 = 3; i_24 < 23; i_24 += 1) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        arr_79 [i_23] [i_23] [i_23] [i_23] [i_23 - 2] [i_5] = ((/* implicit */unsigned short) ((((int) var_0)) != (((/* implicit */int) (unsigned char)255))));
                        arr_80 [i_5] [i_23] [i_24] [i_25] &= ((/* implicit */signed char) max((-2715664845868737810LL), (((/* implicit */long long int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (unsigned char i_26 = 0; i_26 < 25; i_26 += 3) 
                        {
                            var_45 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_54 [i_24 + 2] [i_5])) < (((/* implicit */int) arr_54 [i_25] [i_5])))))) | (((((/* implicit */_Bool) (unsigned char)87)) ? (min((((/* implicit */long long int) (-2147483647 - 1))), (2715664845868737800LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_23 - 2] [i_24] [i_24 + 1] [(_Bool)1])))))));
                            arr_83 [i_5] [(signed char)16] [i_24] [i_25] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-55))) >= (-2715664845868737810LL)));
                            var_46 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) / (var_5))), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (signed char)0))))), ((short)18511))))));
                            arr_84 [i_5] [i_5] [i_5] [i_5] [i_26] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_82 [i_25] [i_26] [i_5] [i_25] [i_5] [i_23 - 2] [i_5])) >= (((/* implicit */int) var_15)))))));
                        }
                        var_47 *= ((/* implicit */unsigned short) (-(arr_15 [i_23 + 1] [i_23 + 1])));
                    }
                } 
            } 
        } 
        var_48 *= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_63 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_73 [i_5] [22] [22] [i_5])) : (((/* implicit */int) arr_73 [i_5] [(unsigned short)14] [i_5] [i_5])))));
    }
    var_49 = ((/* implicit */short) var_2);
    var_50 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (unsigned char i_27 = 0; i_27 < 19; i_27 += 1) 
    {
        for (unsigned long long int i_28 = 1; i_28 < 16; i_28 += 3) 
        {
            for (int i_29 = 2; i_29 < 16; i_29 += 1) 
            {
                {
                    var_51 = ((/* implicit */unsigned short) ((int) ((unsigned long long int) -1532097339)));
                    /* LoopNest 2 */
                    for (unsigned char i_30 = 0; i_30 < 19; i_30 += 1) 
                    {
                        for (unsigned long long int i_31 = 3; i_31 < 15; i_31 += 4) 
                        {
                            {
                                arr_98 [(unsigned short)1] [i_28] [i_29] [i_30] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)201))))));
                                var_52 += ((/* implicit */unsigned int) (short)-3266);
                                arr_99 [i_28] = ((/* implicit */int) max((min((var_1), (((/* implicit */long long int) arr_44 [i_31] [i_31] [i_31 - 2] [i_31 - 2] [i_31])))), (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    var_53 = ((/* implicit */signed char) min((((/* implicit */long long int) max((var_15), (var_15)))), (((((-666287909174897403LL) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)0))))));
                    arr_100 [i_27] [i_28 - 1] [i_28] = ((/* implicit */short) -946170819);
                }
            } 
        } 
    } 
}
