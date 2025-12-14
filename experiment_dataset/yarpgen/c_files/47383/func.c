/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47383
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (-274877906944LL)))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])) ? (arr_0 [i_0] [i_0 - 1]) : (arr_0 [i_0] [i_0 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((-274877906959LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))))))) <= (min((((/* implicit */long long int) arr_2 [i_1 - 1] [i_0 + 2])), (arr_3 [i_1 - 1] [i_1 - 1] [i_0 + 2])))));
            var_22 &= ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 - 1]))) & ((+(var_12))))));
            var_23 ^= ((/* implicit */long long int) (short)-25799);
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (arr_3 [i_1 - 1] [i_1 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1]))))))))));
            var_25 *= ((unsigned int) ((((/* implicit */_Bool) ((short) 9223372036854775800LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 20; i_2 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) arr_0 [7ULL] [7ULL])) : (arr_4 [i_0 + 1] [i_2] [i_2])));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (arr_0 [i_2 - 1] [i_0 + 2]) : (arr_0 [i_2 + 1] [i_0 + 1])));
        }
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) arr_5 [i_0]))));
    }
    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_3])))))));
        var_30 = ((/* implicit */signed char) (-((~(min((((/* implicit */long long int) (_Bool)1)), (274877906950LL)))))));
        arr_10 [i_3 + 2] |= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)28), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3])) ? (arr_7 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [i_3 + 1] [i_3] [i_3]))))))), (((((((/* implicit */_Bool) (unsigned char)26)) ? (-5171667694010016836LL) : (((/* implicit */long long int) var_16)))) * (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
        arr_11 [i_3] [i_3] = ((/* implicit */_Bool) arr_2 [i_3] [i_3]);
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((((/* implicit */int) max(((unsigned char)250), (((/* implicit */unsigned char) (signed char)96))))) * (((/* implicit */int) ((short) var_16))))) >> (((((max(((_Bool)1), ((_Bool)1))) ? (((17490250778605614211ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned long long int) ((int) (unsigned char)238))))) - (17079886740035846984ULL))))))));
    }
    for (int i_4 = 1; i_4 < 8; i_4 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (unsigned char)58))));
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((long long int) (+(((((/* implicit */_Bool) arr_7 [i_4] [i_4])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_2 [i_4] [(unsigned char)8]))))))))));
        var_34 *= ((/* implicit */unsigned long long int) ((max((((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3136))) : (var_0))), (((/* implicit */unsigned long long int) var_6)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4])) ? (((((/* implicit */_Bool) (unsigned short)65523)) ? (var_6) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_6 [i_4] [i_4])) * (((/* implicit */int) arr_12 [(short)2])))))))));
        var_35 += ((/* implicit */short) arr_5 [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 8; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)77)))))));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                arr_23 [i_5 + 3] |= ((/* implicit */_Bool) arr_12 [i_5]);
                /* LoopSeq 2 */
                for (signed char i_8 = 2; i_8 < 10; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_5 + 1])))))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)66)) & (((arr_26 [i_7] [i_6] [i_5] [i_6] [i_9]) ? (((/* implicit */int) arr_16 [(unsigned short)5])) : (((/* implicit */int) (_Bool)1))))));
                    }
                    arr_29 [i_5] [i_6] [2ULL] [(unsigned char)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) arr_25 [i_5 + 1] [i_8 + 1] [i_8 - 2] [i_8 + 1])) : (((/* implicit */int) arr_24 [i_5] [8LL] [i_7] [i_8] [i_8 - 2]))));
                    arr_30 [i_5] [i_6] [i_7] [i_7] |= ((/* implicit */signed char) var_16);
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_33 [i_5] [i_6] [i_7] = ((/* implicit */int) (+(var_16)));
                    var_39 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)58355)) ? (((/* implicit */int) arr_16 [i_5 + 3])) : (((/* implicit */int) arr_16 [i_5 + 2]))));
                    var_40 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned short)64462)) * (-1)));
                }
                var_41 |= ((/* implicit */unsigned char) ((long long int) arr_24 [i_6] [i_5 + 3] [i_5 + 2] [i_5 + 3] [i_5]));
                arr_34 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((signed char) arr_22 [i_6] [i_6]));
            }
            var_42 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_5] [i_5 + 1] [i_5])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_4 [i_5 + 1] [i_5 + 2] [i_6])));
        }
        for (short i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
        {
            var_43 = ((/* implicit */long long int) ((18446744073709551596ULL) * (((/* implicit */unsigned long long int) (+(arr_19 [i_5]))))));
            var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((18LL) / (((/* implicit */long long int) (+(var_12)))))))));
            var_45 = ((/* implicit */unsigned long long int) var_16);
        }
        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            var_46 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-15)) && (((/* implicit */_Bool) 2596875480U))));
            var_47 |= ((unsigned short) (short)-32764);
            var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) arr_2 [i_5] [i_12]))));
        }
        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            var_49 ^= ((/* implicit */int) arr_35 [i_5] [i_5]);
            /* LoopSeq 3 */
            for (short i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        {
                            arr_52 [i_5] [i_5] = ((/* implicit */short) ((unsigned short) 16U));
                            var_50 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_5] [i_5] [i_14] [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-18344)) && (((/* implicit */_Bool) var_10)))))) : ((~(18446744073709551612ULL)))));
                            var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) (short)-18354))));
                            var_52 &= ((_Bool) arr_35 [i_14] [i_14]);
                            arr_53 [i_5] [1U] [i_5] [i_5 - 1] [i_5] = ((/* implicit */unsigned int) (short)32765);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_17 = 1; i_17 < 8; i_17 += 3) 
                {
                    var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) (~((+(((/* implicit */int) arr_8 [i_5])))))))));
                    arr_56 [i_5] [i_13] [i_14] [i_17] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-22))));
                }
                for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    var_54 = ((/* implicit */signed char) 5U);
                    var_55 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (signed char)95))))));
                }
                /* LoopSeq 4 */
                for (unsigned short i_19 = 2; i_19 < 7; i_19 += 1) 
                {
                    arr_61 [i_5] [i_13] [i_14] [i_19] = arr_3 [i_5] [i_5 + 2] [i_19 + 1];
                    /* LoopSeq 1 */
                    for (signed char i_20 = 0; i_20 < 11; i_20 += 2) 
                    {
                        arr_64 [i_5] [9ULL] [i_14] [i_14] [i_20] [i_19] [i_14] = ((/* implicit */unsigned long long int) ((_Bool) -1546441789));
                        var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) arr_9 [i_20]))));
                    }
                    var_57 = ((/* implicit */short) (+(((((/* implicit */_Bool) 1555011178)) ? (var_10) : (18446744073709551614ULL)))));
                    var_58 = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_5 - 1])) ? (arr_54 [i_5 + 2]) : (arr_54 [i_5 + 3])));
                }
                for (signed char i_21 = 1; i_21 < 7; i_21 += 3) 
                {
                    var_59 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5 + 3] [i_5 + 3])) ? (arr_17 [i_5] [i_13]) : (((/* implicit */int) arr_2 [i_5 + 2] [i_14]))));
                    var_60 = ((/* implicit */long long int) ((17490250778605614237ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5 - 1])))));
                    var_61 |= ((/* implicit */unsigned int) arr_41 [i_5 - 1]);
                    arr_67 [i_5 + 2] [i_21] [i_14] [i_21] [i_14] [i_14] = ((/* implicit */long long int) 13U);
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) arr_68 [i_22] [i_22] [i_5 + 3] [i_5 + 1] [i_5 + 2]))));
                    var_63 = ((/* implicit */unsigned long long int) max((var_63), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_48 [i_5 - 1] [i_5] [i_22] [i_22])))))));
                    var_64 = ((/* implicit */unsigned long long int) arr_40 [(unsigned char)7]);
                }
                for (unsigned short i_23 = 0; i_23 < 11; i_23 += 3) 
                {
                    var_65 = ((/* implicit */unsigned long long int) ((arr_46 [i_23] [(_Bool)0]) == (((/* implicit */int) arr_9 [i_14]))));
                    var_66 = ((/* implicit */short) ((((/* implicit */_Bool) 15762598695796736ULL)) ? (var_1) : (((/* implicit */unsigned int) arr_36 [i_5] [i_13] [i_14]))));
                    var_67 = ((/* implicit */int) max((var_67), (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32749))) : (var_16))))));
                }
                arr_73 [i_5] [i_13] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)8))));
            }
            for (unsigned short i_24 = 1; i_24 < 9; i_24 += 2) 
            {
                var_68 = ((/* implicit */unsigned char) max((var_68), (((/* implicit */unsigned char) (short)-4240))));
                var_69 = ((/* implicit */unsigned int) min((var_69), (((/* implicit */unsigned int) (((+((-9223372036854775807LL - 1LL)))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42503))))))));
            }
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                var_70 = ((/* implicit */unsigned short) (+(((unsigned long long int) arr_25 [i_5 - 1] [i_5 - 1] [i_25] [i_25]))));
                arr_81 [i_5] [i_13] [i_25] [6LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 432835165U)) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) arr_51 [i_5] [i_13] [i_25] [i_25] [i_5 - 1]))));
            }
            arr_82 [i_13] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_5])) * (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_66 [i_13] [i_13] [i_5] [i_5] [i_5 - 1] [i_5])) : (((/* implicit */int) arr_59 [i_5] [i_5 - 1]))));
            arr_83 [i_5] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3399914778925016917LL)) ? (((/* implicit */long long int) -10)) : (arr_19 [i_5 + 1])));
            var_71 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_5 + 1] [i_5 + 3] [i_5 - 1] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_49 [i_5] [i_5] [i_5 + 2] [i_5] [i_5 + 1])) : (((/* implicit */int) arr_49 [i_5] [i_5] [i_5 + 1] [(_Bool)1] [i_5 + 1]))));
        }
        var_72 = ((/* implicit */unsigned int) min((var_72), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5395921823192881963LL)) ? (((/* implicit */int) arr_2 [i_5 + 1] [i_5 + 2])) : (((/* implicit */int) arr_2 [i_5 + 3] [i_5])))))));
        arr_84 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)237)) ? (2828715711824222037LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)109))))))));
    }
    var_73 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-3399914778925016908LL)))) ? (((/* implicit */unsigned long long int) ((long long int) ((unsigned short) (_Bool)1)))) : (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_7)))))));
}
