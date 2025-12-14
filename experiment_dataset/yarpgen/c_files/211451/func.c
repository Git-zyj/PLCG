/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211451
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_20 = ((/* implicit */long long int) arr_0 [i_0 + 1]);
            /* LoopSeq 4 */
            for (int i_2 = 4; i_2 < 11; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        var_21 *= ((/* implicit */unsigned long long int) (unsigned short)65533);
                        arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_8);
                    }
                    var_22 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) 0U)) : (9223372036854775807LL)));
                }
                var_23 = ((/* implicit */signed char) (_Bool)1);
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (signed char)-90))));
            }
            for (signed char i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [(signed char)1] [i_0 - 1] [i_0])));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    arr_22 [i_0 + 1] = ((/* implicit */signed char) 0LL);
                    arr_23 [i_5] [(short)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_6])) ? (((/* implicit */int) arr_5 [11U] [11U])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_5] [i_5] [i_0] [i_6]))))) : (0LL)));
                }
            }
            for (signed char i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-121))));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_7])) ? (arr_16 [i_0] [12LL] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [8]))))))))));
                var_28 = ((/* implicit */unsigned int) arr_5 [i_0] [i_1]);
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) (signed char)4)) : (arr_29 [i_8] [i_1] [i_8] [i_1])));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        {
                            arr_35 [i_0] [i_1] [10ULL] [i_0] [i_10] [i_10] [i_10] = (unsigned char)0;
                            var_30 = ((/* implicit */unsigned short) 0ULL);
                        }
                    } 
                } 
            }
        }
        var_31 *= ((/* implicit */unsigned long long int) -1526797488);
    }
    for (short i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        var_32 = arr_37 [i_11];
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_36 [i_11] [i_11]))));
    }
    /* vectorizable */
    for (signed char i_12 = 1; i_12 < 21; i_12 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 2) 
        {
            arr_43 [i_12] [i_13] = arr_42 [i_12];
            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) var_2))));
        }
        for (short i_14 = 3; i_14 < 19; i_14 += 3) /* same iter space */
        {
            var_35 = (~(((/* implicit */int) arr_40 [i_14 + 3] [i_14])));
            /* LoopSeq 3 */
            for (signed char i_15 = 2; i_15 < 21; i_15 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-103))));
                arr_50 [i_12] [i_14] [i_14 - 1] [i_15] = ((/* implicit */_Bool) (~(arr_49 [i_12 + 1] [i_12 + 1] [i_12 + 1])));
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_42 [i_14]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))) : (((((/* implicit */_Bool) (unsigned short)18334)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_12] [i_15])))))));
            }
            for (signed char i_16 = 2; i_16 < 21; i_16 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 3) 
                    {
                        var_38 = ((/* implicit */long long int) arr_46 [i_14]);
                        var_39 = (((_Bool)1) ? (((/* implicit */int) (signed char)-112)) : (895016592));
                    }
                    for (short i_19 = 0; i_19 < 22; i_19 += 3) 
                    {
                        var_40 = ((/* implicit */long long int) max((var_40), (((long long int) arr_49 [i_12 - 1] [i_14 - 1] [i_16 - 1]))));
                        var_41 -= ((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */int) (unsigned char)218)) : (arr_49 [i_16 - 1] [i_17] [i_17]));
                    }
                    var_42 ^= ((/* implicit */long long int) arr_46 [i_12 - 1]);
                    var_43 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) (unsigned char)9))));
                    var_44 = ((/* implicit */signed char) arr_55 [i_17] [i_16] [i_14] [i_14] [i_12]);
                    /* LoopSeq 1 */
                    for (signed char i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        arr_63 [i_12] [i_16] [i_14] = ((/* implicit */_Bool) ((unsigned long long int) ((long long int) 3364254659U)));
                        var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_12 + 1])) ? (arr_60 [i_12 - 1]) : (arr_60 [i_12 - 1]))))));
                    }
                }
                arr_64 [i_14] [i_14] [i_14] = ((/* implicit */int) arr_55 [i_12] [(signed char)6] [i_12] [i_12 - 1] [i_12]);
            }
            for (signed char i_21 = 2; i_21 < 21; i_21 += 3) /* same iter space */
            {
                arr_69 [i_12] [i_14] [i_12] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_42 [i_14])) ? (1427224077U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) ((((/* implicit */_Bool) arr_57 [i_21] [i_21] [i_12 + 1] [i_12 + 1])) ? (((((/* implicit */_Bool) (signed char)69)) ? (0) : (((/* implicit */int) (unsigned short)43834)))) : (((/* implicit */int) (_Bool)1)))))));
                var_47 = ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [i_21 + 1] [i_14 + 3] [i_12 + 1])) ? (632114235U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))));
                var_48 = ((/* implicit */unsigned short) (unsigned char)255);
            }
            arr_70 [11LL] [i_14] = var_3;
        }
        for (short i_22 = 3; i_22 < 19; i_22 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_23 = 0; i_23 < 22; i_23 += 3) 
            {
                var_49 = ((/* implicit */long long int) (+(((/* implicit */int) arr_54 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 + 1]))));
                var_50 = ((/* implicit */signed char) ((unsigned long long int) ((int) (_Bool)1)));
            }
            /* LoopSeq 2 */
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
            {
                var_51 ^= ((/* implicit */int) var_7);
                var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */int) arr_36 [i_24] [i_24 - 1])) : (((/* implicit */int) (_Bool)1))));
            }
            for (signed char i_25 = 0; i_25 < 22; i_25 += 2) 
            {
                var_53 = arr_75 [i_22] [i_22] [i_22] [i_22];
                /* LoopSeq 3 */
                for (unsigned int i_26 = 0; i_26 < 22; i_26 += 4) 
                {
                    var_54 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_55 = ((/* implicit */unsigned int) arr_78 [i_22 - 1] [i_22] [i_22 + 1]);
                }
                for (long long int i_27 = 0; i_27 < 22; i_27 += 2) /* same iter space */
                {
                    var_56 = ((/* implicit */int) ((unsigned int) var_14));
                    var_57 *= ((/* implicit */_Bool) ((arr_58 [i_12] [i_22] [i_25] [i_12] [i_22] [i_12] [i_27]) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [(unsigned char)17]))) : (arr_81 [(short)15])));
                    var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) ((_Bool) ((unsigned int) arr_51 [i_12] [i_22] [i_25] [i_27]))))));
                    var_59 = ((/* implicit */_Bool) arr_77 [i_12]);
                }
                for (long long int i_28 = 0; i_28 < 22; i_28 += 2) /* same iter space */
                {
                    var_60 = (_Bool)1;
                    var_61 = ((short) arr_48 [i_22 - 3] [i_12 - 1] [i_12 + 1]);
                }
                arr_86 [i_22] = ((long long int) (_Bool)1);
                arr_87 [i_22] [i_22] [i_25] [i_22] = ((/* implicit */short) (signed char)44);
            }
            /* LoopNest 2 */
            for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
            {
                for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                {
                    {
                        arr_94 [2U] [i_29 - 1] [i_29] [i_29] = ((/* implicit */unsigned short) arr_91 [i_29 - 1] [i_22 + 3]);
                        var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) arr_61 [(signed char)7] [i_12 + 1] [i_12]))));
                        var_63 = ((/* implicit */int) min((var_63), (((/* implicit */int) arr_65 [i_12] [i_22 - 3] [i_29] [6LL]))));
                        arr_95 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_22] [i_12 - 1] [i_12])) ? (arr_89 [i_30] [i_12 - 1] [i_12]) : (((/* implicit */long long int) 0U))));
                    }
                } 
            } 
        }
        var_64 = ((/* implicit */unsigned int) arr_80 [i_12] [i_12]);
        var_65 = ((/* implicit */_Bool) min((var_65), (((/* implicit */_Bool) ((unsigned int) arr_82 [i_12] [i_12 + 1] [i_12 - 1] [i_12] [i_12 - 1])))));
    }
    var_66 = ((/* implicit */unsigned char) max((var_66), (((/* implicit */unsigned char) ((signed char) var_14)))));
    var_67 = ((/* implicit */unsigned int) var_16);
}
