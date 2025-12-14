/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249292
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
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)248)) >= (((/* implicit */int) (unsigned char)56))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_2 [(short)3] = ((((/* implicit */_Bool) 2207122937551837766LL)) ? (-639238743) : (((/* implicit */int) (signed char)-27)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_5))));
                var_16 *= ((/* implicit */unsigned long long int) var_8);
            }
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)24)))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_7 [i_3] [i_3] [i_1] [i_0]))));
                    arr_13 [i_0] [(short)12] [i_3] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)39502))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (signed char)2))));
                        var_20 = arr_12 [i_0 + 1] [i_0 + 3];
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(((/* implicit */int) (signed char)27)))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(((((/* implicit */int) arr_1 [i_3] [i_1])) >> (((((/* implicit */int) (short)32767)) - (32762))))))))));
                    }
                    var_23 = ((/* implicit */unsigned short) (short)32767);
                }
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_14 [i_0] [i_0] [(unsigned short)4] [i_1]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        arr_27 [i_1] [16ULL] [16ULL] [i_1] [i_1] &= ((/* implicit */unsigned short) ((arr_8 [i_0] [i_8] [i_3] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [7] [i_1] [i_3] [i_1])))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (+(((/* implicit */int) (unsigned char)255)))))));
                        arr_28 [i_1] [i_0] [i_3] [i_0] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_8])) || (((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) -659367578)) ? (((/* implicit */int) (unsigned short)48457)) : (((/* implicit */int) (unsigned short)65516))));
                        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_13))));
                    }
                }
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 884302347)), (((((/* implicit */_Bool) 15679798643915195201ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17262783104853424443ULL))))))));
                var_29 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-75))));
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0] [i_3])))));
                var_31 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_15 [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_5))))) : (min((2207122937551837766LL), (((/* implicit */long long int) (short)-32767))))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_11 = 2; i_11 < 15; i_11 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_11 + 2])) ? (((/* implicit */int) arr_10 [i_0 + 2] [i_11 + 2])) : (((/* implicit */int) (unsigned short)19))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-15367)))))));
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) (unsigned char)200)) >> (((((/* implicit */int) (unsigned char)37)) - (31))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 + 3] [i_0]))))))))));
                        var_35 = ((/* implicit */unsigned short) (signed char)69);
                    }
                }
                for (short i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) <= (-4163998649987641511LL))) ? ((-(((/* implicit */int) arr_25 [i_0 - 1] [i_1] [i_11] [i_14] [(unsigned short)6] [(unsigned short)6])))) : (((var_7) ? (((/* implicit */int) arr_7 [i_14] [i_11] [17ULL] [17ULL])) : (((/* implicit */int) (unsigned short)41620)))))))));
                    var_37 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 5824842774826275998LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2006031641380644065ULL)));
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 1; i_15 < 14; i_15 += 2) 
                    {
                        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32766)) || (((/* implicit */_Bool) -4163998649987641511LL)))))));
                        arr_46 [i_1] [i_1] [i_11] [i_14] [i_15] &= ((/* implicit */int) ((((/* implicit */int) ((var_8) && (((/* implicit */_Bool) var_0))))) >= (((/* implicit */int) arr_9 [i_0] [i_0] [i_11 + 3] [i_14]))));
                    }
                    for (int i_16 = 2; i_16 < 15; i_16 += 3) 
                    {
                        var_39 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_35 [i_0 - 1] [i_0 - 1] [i_0] [(_Bool)1] [i_16] [i_0 - 1])))))));
                        var_40 += ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_11] [i_16 + 2] [i_16] [i_14] [i_11] [i_0] [i_0])) ? (((((/* implicit */int) (signed char)53)) & (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] [(unsigned short)16])))) : (((/* implicit */int) arr_47 [i_0 + 1] [i_0 + 3] [i_0 + 3]))));
                        arr_49 [i_16] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)1))));
                    }
                }
                var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_4 [(unsigned short)7] [i_1] [i_11 - 2])))) ? (((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)167)))) : ((-(((/* implicit */int) (signed char)52)))))))));
            }
            /* vectorizable */
            for (unsigned short i_17 = 3; i_17 < 16; i_17 += 1) 
            {
                var_42 = ((/* implicit */unsigned short) var_2);
                var_43 = ((/* implicit */short) ((((/* implicit */long long int) 525581235U)) != (473241911297245988LL)));
                var_44 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 1606776247)))) || (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_21 [i_17] [i_17] [i_17 + 2] [i_17 + 1] [i_17 - 3])) : (2147483647))))));
                var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48281)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((arr_33 [i_0] [i_0]) & (-1606776257))))));
            }
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_18 = 0; i_18 < 18; i_18 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_20 = 0; i_20 < 18; i_20 += 1) 
                {
                    var_46 ^= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)25858)) : (((/* implicit */int) (_Bool)1))));
                    arr_60 [(signed char)9] [(signed char)9] [i_19] [(signed char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_31 [i_0 + 2] [i_0 + 3] [i_0] [i_19] [i_0] [i_0 + 3] [i_0 + 2]))));
                }
                for (int i_21 = 2; i_21 < 17; i_21 += 2) 
                {
                    arr_64 [i_0 - 1] [i_19] [(unsigned short)3] [i_19] [(unsigned short)3] [i_21] = (~(((/* implicit */int) var_0)));
                    /* LoopSeq 4 */
                    for (signed char i_22 = 1; i_22 < 16; i_22 += 3) 
                    {
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_18] [i_19])) ? (arr_15 [i_22 + 2] [i_19] [i_0 + 3]) : (arr_15 [i_18] [i_19] [i_21 - 1])));
                        var_48 |= ((/* implicit */unsigned int) var_4);
                    }
                    for (unsigned short i_23 = 0; i_23 < 18; i_23 += 1) 
                    {
                        var_49 = ((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (arr_42 [i_18] [i_0])))));
                        var_50 = ((/* implicit */unsigned short) (short)-13);
                    }
                    for (short i_24 = 2; i_24 < 17; i_24 += 3) 
                    {
                        var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)52)))))));
                        arr_74 [i_24] [i_19] [i_19] [i_19] [i_0] = ((/* implicit */short) (signed char)45);
                        var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_18] [i_0])) & (((/* implicit */int) (_Bool)1)))) <= ((-(((/* implicit */int) (unsigned short)47112)))))))));
                    }
                    for (short i_25 = 0; i_25 < 18; i_25 += 2) 
                    {
                        var_53 -= ((/* implicit */unsigned short) (~(arr_42 [i_18] [i_21 - 1])));
                        arr_77 [(short)4] [i_18] [i_19] [i_19] [i_25] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_56 [i_0 - 1] [i_18] [i_21 - 2] [i_18]))));
                    }
                    var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) ((arr_40 [i_21 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 3]) - (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))))));
                }
                arr_78 [i_18] [i_19] [i_18] = ((/* implicit */signed char) var_13);
                arr_79 [i_0] [i_19] [i_0] = ((/* implicit */short) arr_53 [i_18] [i_0]);
            }
            var_55 = ((/* implicit */signed char) var_0);
            var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))));
            var_57 = ((/* implicit */short) (signed char)45);
        }
        for (signed char i_26 = 0; i_26 < 18; i_26 += 3) 
        {
            var_58 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((int) var_13))))) ? (222172520U) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (var_8)))))))));
            arr_82 [i_26] [i_26] = ((/* implicit */short) (~((+(((((/* implicit */_Bool) arr_71 [i_0] [(signed char)17] [i_0] [i_0] [i_26])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_40 [i_0] [i_26] [i_26] [i_26])))))));
        }
        for (unsigned long long int i_27 = 0; i_27 < 18; i_27 += 3) 
        {
            var_59 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0 + 3] [i_0 + 3] [(unsigned char)4] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_51 [i_0] [i_0] [i_0])), (arr_41 [i_27] [i_0] [i_0])))))))) : (max((((/* implicit */unsigned long long int) var_13)), (((unsigned long long int) (short)20754))))));
            /* LoopSeq 1 */
            for (int i_28 = 2; i_28 < 16; i_28 += 3) 
            {
                var_60 = ((/* implicit */unsigned long long int) max((var_60), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((-1708057654) != (((((/* implicit */int) (short)-3048)) / (-1530665554)))))))))));
                arr_87 [i_28] [i_28] [17] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)32767)) ? (446363287555684381ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (arr_5 [(_Bool)1]))))));
            }
        }
    }
    var_61 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) (short)24924)), (4294967295U)))));
}
