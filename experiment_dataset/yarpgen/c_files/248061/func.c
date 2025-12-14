/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248061
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_8))));
    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) var_9)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((short) ((_Bool) (+(var_2)))));
        arr_4 [i_0 - 1] [i_0] &= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_16 = ((unsigned char) ((((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1] [i_0]))) > (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0)))))));
    }
    for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [(unsigned short)14])) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (((/* implicit */int) var_5))))))) >= (var_6)));
        arr_9 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-100)) == (((/* implicit */int) (_Bool)0)))))) : ((+(1691234959U))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_7 [i_1])) ^ (((/* implicit */int) var_1)))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_3 = 4; i_3 < 10; i_3 += 3) /* same iter space */
        {
            arr_14 [i_2] [i_3] = ((/* implicit */unsigned char) (((+(var_6))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_3 + 1]), (arr_5 [i_3 - 2])))))));
            var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (_Bool)1))) >= (((/* implicit */int) max((arr_11 [i_2]), (((/* implicit */unsigned char) (signed char)100)))))))), (min((((/* implicit */unsigned int) arr_6 [i_2])), (min((var_4), (((/* implicit */unsigned int) arr_10 [i_2]))))))));
            var_18 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_1 [(signed char)1] [i_3 + 1])))))))));
            arr_15 [i_2] = ((/* implicit */unsigned long long int) ((short) max(((unsigned char)117), ((unsigned char)22))));
        }
        for (unsigned short i_4 = 4; i_4 < 10; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
            {
                arr_21 [i_2] [(short)7] [i_2] = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (17383436912536655200ULL)));
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 10; i_6 += 3) 
                {
                    for (unsigned char i_7 = 3; i_7 < 8; i_7 += 2) 
                    {
                        {
                            var_19 ^= ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_13 [i_2] [i_4 - 4])) >> (((((/* implicit */_Bool) 2218523785U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_23 [i_6])))))));
                            arr_27 [i_2] [i_2] [i_4] [i_5] [i_2] [i_7] = ((/* implicit */signed char) (unsigned char)122);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
            {
                arr_31 [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_4]))) ^ (var_4)))) ? (arr_18 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31)))));
                var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_28 [i_4] [i_4 - 4] [i_8] [i_8])) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
            {
                arr_34 [(unsigned char)4] [i_4 - 4] [(unsigned char)4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_12 [i_4 - 3])) : (min((var_2), (((/* implicit */unsigned long long int) arr_26 [i_2] [i_4] [i_4 - 3] [i_9] [i_9] [i_9])))))) >> (((/* implicit */int) ((signed char) ((unsigned char) (_Bool)1))))));
                /* LoopSeq 2 */
                for (unsigned int i_10 = 3; i_10 < 9; i_10 += 3) 
                {
                    arr_38 [i_2] [i_4] [i_9] [i_10] [i_10 + 2] = (!(((/* implicit */_Bool) ((unsigned long long int) ((arr_19 [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4]))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_11 = 1; i_11 < 10; i_11 += 3) 
                    {
                        arr_43 [i_2] [i_10] [i_9] [i_10] [i_11 + 1] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned int) arr_22 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_9] [i_10 - 3] [i_11 + 1])), ((-(4294967295U))))));
                        arr_44 [i_2] [i_10] [(_Bool)1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_18 [i_11 + 1]) >= (arr_18 [i_11 + 1]))))) > (arr_18 [i_11 - 1])));
                        arr_45 [i_11] [i_4] [i_9] [i_10 + 1] [i_10] = ((/* implicit */unsigned char) (-(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-28134))))));
                        var_21 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_7)))) ? (((((/* implicit */int) arr_28 [i_2] [i_4 - 4] [i_2] [i_2])) ^ (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_33 [i_2] [i_4] [i_9] [i_9])))))) & (((/* implicit */int) ((_Bool) var_7)))));
                    }
                    for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 4) 
                    {
                        arr_48 [i_10] [i_10] [i_10] [i_10] [i_12] = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) arr_0 [i_12] [i_4])) ? (((/* implicit */int) arr_33 [i_2] [i_4 - 1] [i_12 - 1] [i_12])) : (((/* implicit */int) arr_35 [i_2] [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_2])))))))));
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_29 [i_4] [i_4 - 1] [i_4 - 4] [i_4])), (var_8))))));
                        arr_49 [i_10] [i_10] [i_9] [i_10] = ((/* implicit */signed char) ((arr_12 [i_2]) << ((((~(((/* implicit */int) ((((/* implicit */int) arr_28 [i_2] [i_4] [i_4] [7ULL])) < (((/* implicit */int) var_8))))))) + (20)))));
                        arr_50 [i_10] [(unsigned char)0] [i_9] [i_2] [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_2] [i_4] [i_9] [i_9] [i_10 + 1] [i_4]))));
                        arr_51 [i_10] [i_4] [i_9] [i_10] [i_12] [i_12] = max((arr_35 [i_2] [i_12] [i_9] [i_10] [i_10]), (((/* implicit */unsigned short) arr_25 [i_9])));
                    }
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                    {
                        var_23 += ((/* implicit */short) ((arr_53 [i_2] [i_4] [i_2] [i_4] [0ULL]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4 - 2]))))))));
                        arr_55 [i_10] = ((/* implicit */_Bool) arr_39 [i_2] [i_2] [i_2] [i_10] [i_2]);
                    }
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
                    {
                        arr_59 [i_2] [(_Bool)1] [i_2] [i_10] [i_10] [i_4] [i_9] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) arr_16 [(signed char)3] [i_14])))));
                        arr_60 [i_10] [i_4 - 2] [i_9] [i_10] [i_14] = ((/* implicit */unsigned short) arr_57 [i_2] [(unsigned short)5] [i_9] [i_10] [i_14] [i_14]);
                    }
                }
                for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (min((((/* implicit */unsigned int) arr_6 [1ULL])), ((-(((((/* implicit */_Bool) arr_18 [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4]))) : (var_0)))))))));
                    arr_65 [i_2] [i_4] [i_9] [i_15] = ((/* implicit */signed char) max((((/* implicit */int) (short)-3715)), (((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) (unsigned char)25))))));
                    arr_66 [4ULL] [i_4 - 4] [4ULL] [i_15] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) arr_37 [(signed char)3] [i_9] [i_2])))), (((/* implicit */int) arr_36 [i_2] [i_9] [i_2] [i_9] [i_15]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_2] [i_4] [i_9] [i_15]))) : (min((((/* implicit */unsigned long long int) arr_46 [i_4] [i_2])), (arr_0 [i_2] [i_4]))));
                }
            }
            /* LoopSeq 1 */
            for (signed char i_16 = 2; i_16 < 9; i_16 += 3) 
            {
                arr_69 [i_2] [i_4] [i_16] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_4 - 1] [i_4 - 4])) ? (arr_1 [i_4 - 4] [i_4 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_16] [i_4 - 2]) >= (arr_1 [i_4 - 4] [i_4 - 2])))))));
                arr_70 [i_2] [i_2] [i_16] [i_16] = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) ((arr_53 [i_16] [(unsigned short)10] [i_2] [i_2] [i_2]) ^ (arr_26 [i_16 - 2] [i_16] [i_4 - 1] [i_4 + 1] [(signed char)5] [i_2])))), (max((((/* implicit */unsigned long long int) arr_25 [7ULL])), (arr_30 [i_2] [(signed char)9])))))));
                /* LoopSeq 4 */
                for (unsigned short i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    arr_74 [i_2] [i_4 - 3] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-115)) != (((/* implicit */int) arr_22 [i_17] [i_16] [(signed char)3] [i_4] [i_2] [(signed char)3])))) ? ((+(((((/* implicit */_Bool) arr_64 [i_2] [i_2] [i_4 - 4] [i_16 - 1] [i_2] [i_17])) ? (((/* implicit */int) arr_10 [i_4 - 2])) : (((/* implicit */int) (_Bool)1)))))) : (min(((~(((/* implicit */int) arr_40 [i_2] [i_4] [i_16 + 2] [i_16 + 2] [i_2])))), (((/* implicit */int) arr_25 [i_2]))))));
                    var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_13 [i_4 - 2] [i_4 - 3]))))));
                    arr_75 [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned int) arr_64 [i_16] [i_16 - 1] [i_16] [i_16] [i_16 + 2] [i_16 + 2]);
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_78 [(unsigned char)7] [(unsigned char)7] [i_4] [i_18] [i_18] [i_18] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_61 [i_2] [i_2] [i_2]))));
                    arr_79 [i_18] [i_4 - 2] [i_16] [i_4 - 3] [i_18] = ((unsigned long long int) max((arr_63 [i_4] [i_4] [9ULL] [i_4] [i_4 - 2]), (((/* implicit */unsigned long long int) max((arr_53 [i_18] [i_16 + 2] [i_18] [i_4 - 4] [i_2]), (((/* implicit */unsigned int) arr_71 [i_18] [i_4] [i_16 - 2] [i_2])))))));
                }
                /* vectorizable */
                for (unsigned char i_19 = 0; i_19 < 11; i_19 += 3) 
                {
                    arr_84 [i_2] [(unsigned char)0] [(_Bool)1] [i_19] [(signed char)1] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_72 [i_16]))))));
                    arr_85 [i_2] [i_19] [i_16 + 1] [i_16] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_2] [i_4] [i_16 - 2] [i_19] [(short)1])) - (((/* implicit */int) arr_42 [i_2]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_4])))))));
                    var_26 = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_63 [i_2] [i_4] [i_16 - 1] [i_4] [i_4 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_52 [i_19] [i_19])) / (((/* implicit */int) (_Bool)1))))) : (arr_73 [i_19] [i_16] [i_4] [i_2])));
                    var_28 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_28 [i_2] [i_4 - 2] [i_16] [i_19])) ? (((/* implicit */int) arr_36 [i_2] [i_4] [i_2] [i_4 - 2] [i_2])) : (((/* implicit */int) arr_11 [i_2]))))));
                }
                for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    var_29 += ((/* implicit */unsigned int) ((unsigned short) (-(min((((/* implicit */unsigned int) arr_17 [i_2])), (var_0))))));
                    arr_88 [i_20] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_77 [i_20] [i_4 - 2] [i_4 + 1] [i_20])) != (((/* implicit */int) arr_77 [i_20] [i_4 - 1] [i_4 + 1] [i_20]))))));
                }
            }
            /* LoopNest 3 */
            for (unsigned char i_21 = 1; i_21 < 8; i_21 += 3) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 3) 
                {
                    for (unsigned char i_23 = 4; i_23 < 10; i_23 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5293))) + (arr_1 [i_4 - 4] [i_4 - 4])))) ? ((+(((/* implicit */int) arr_86 [(_Bool)1] [i_21 - 1] [i_21 + 1] [i_21])))) : (min(((-(((/* implicit */int) (short)-28719)))), (((/* implicit */int) (unsigned char)40))))));
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_47 [i_4 - 4] [i_4 + 1] [(short)0] [i_23] [i_2] [i_23 - 1]))) && (((/* implicit */_Bool) ((min((16971107832172255647ULL), (((/* implicit */unsigned long long int) arr_40 [i_2] [i_4 - 3] [i_21] [i_22] [i_2])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_64 [i_2] [i_2] [i_21 - 1] [i_22] [i_23] [i_22])) : (((/* implicit */int) var_13)))))))))))));
                            arr_98 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned short) (((+(833684086U))) / (((/* implicit */unsigned int) (~(((/* implicit */int) arr_47 [i_2] [i_4] [i_4] [i_22] [i_22] [i_23 - 2])))))));
                            arr_99 [i_22] [i_22] [i_21 + 2] [i_4] [i_22] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_33 [i_4 - 3] [i_4] [i_4 - 3] [i_4 - 3])) | (((/* implicit */int) arr_33 [i_4 - 4] [i_4] [i_4] [i_4 - 2])))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_24 = 0; i_24 < 11; i_24 += 3) 
            {
                arr_103 [i_24] [i_24] [i_24] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_4])) ? (((/* implicit */int) arr_77 [i_4 - 1] [i_4] [i_24] [i_24])) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4294967288U))) : (min((((/* implicit */unsigned int) var_11)), (arr_73 [(_Bool)0] [(_Bool)0] [(_Bool)0] [i_2])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_24] [i_24] [i_24] [i_4] [i_4] [i_2] [(signed char)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_13 [i_2] [i_2]), (((/* implicit */unsigned short) var_5)))))) : (max((var_0), (((/* implicit */unsigned int) arr_37 [i_2] [i_4 - 1] [i_24]))))))));
                arr_104 [i_2] [i_4] [i_24] [i_24] = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_101 [i_4] [i_4 - 3])))));
                arr_105 [i_24] [i_24] = ((/* implicit */unsigned long long int) arr_28 [i_2] [i_2] [i_4] [(unsigned char)3]);
                arr_106 [i_2] [i_24] [i_4 - 4] = ((/* implicit */unsigned int) arr_63 [i_2] [i_2] [i_4 + 1] [i_4] [i_4]);
            }
        }
        /* vectorizable */
        for (unsigned short i_25 = 4; i_25 < 10; i_25 += 3) /* same iter space */
        {
            arr_109 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_102 [i_2] [i_2])) ? (arr_102 [i_2] [i_2]) : (arr_102 [i_2] [i_2])));
            arr_110 [i_2] [i_25] [i_25] = ((/* implicit */unsigned char) ((unsigned short) arr_61 [i_2] [i_25] [i_25 - 3]));
        }
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_52 [i_2] [i_2]), (arr_52 [i_2] [i_2])))))))));
    }
}
