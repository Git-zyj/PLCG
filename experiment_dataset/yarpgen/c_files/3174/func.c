/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3174
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_11 *= ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) 474504788)) == (14LL))))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_12 = ((min((((/* implicit */unsigned long long int) min((474504788), (((/* implicit */int) var_1))))), (min((var_9), (((/* implicit */unsigned long long int) 3407791597U)))))) <= (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)43)) <= (((/* implicit */int) var_6)))))))));
            arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((max((((/* implicit */long long int) (signed char)-54)), ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) >> ((((+(((/* implicit */int) var_8)))) + (73)))));
        }
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        var_13 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_9 [17LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0))) ^ (((((/* implicit */_Bool) var_1)) ? (arr_11 [i_4]) : (var_7))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_3])))));
                        arr_15 [i_1] [i_3] [i_4] [i_4] [i_4] [i_5 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_3)))))) * ((~(var_10)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_5 + 1]))))) : (((((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (arr_3 [i_5 + 1] [i_1])))));
                        var_14 *= ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) var_8)), (var_3)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_22 [i_1] [i_7] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((474504788) + (((/* implicit */int) (signed char)-56)))) >> (((min((var_7), (((/* implicit */unsigned int) arr_12 [i_3])))) - (1300326950U)))))));
                        var_15 *= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_6] [i_3] [i_6] [i_6] [i_3])) << (((var_0) - (1173561938U)))))) ^ ((~(arr_3 [i_3] [i_3]))))) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30)))));
                        arr_23 [i_1] [i_7] [i_7] = ((/* implicit */unsigned long long int) (((~(var_10))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [(short)0])))));
                        var_16 = ((/* implicit */unsigned long long int) arr_9 [i_7]);
                    }
                } 
            } 
            arr_24 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_13 [i_1] [i_3] [i_3] [i_1] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1]))) - (var_5)))) : (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_19 [i_1] [i_3] [i_3] [i_1] [i_3])), (var_8)))))));
        }
        for (int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_17 *= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_13 [i_1] [i_8] [i_9 + 3] [i_9 - 1] [i_10])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) + (2147483647))) << (((min((((/* implicit */unsigned long long int) ((var_10) ^ (var_7)))), (((((/* implicit */_Bool) -474504788)) ? (18446744073709551615ULL) : (var_9))))) - (1298590743ULL)))));
                        arr_33 [i_1] [i_1] [11LL] [i_10] [i_9 - 1] = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(var_10)))), (((((/* implicit */_Bool) arr_16 [i_9 - 2] [i_9 + 2] [i_9 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_9 + 2] [i_9] [i_9] [i_10]))) : (var_3)))));
                        /* LoopSeq 2 */
                        for (int i_11 = 4; i_11 < 18; i_11 += 2) /* same iter space */
                        {
                            var_18 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)13)) ? (var_3) : (var_5))) | (((/* implicit */long long int) ((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117)))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) / (var_9)))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))), (var_9))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_10)))) ? ((+(((/* implicit */int) (unsigned short)14644)))) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_6)))))) : (((var_10) ^ (var_0)))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 4; i_12 < 18; i_12 += 2) /* same iter space */
                        {
                            var_20 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_0)) : (var_5)))));
                            arr_38 [i_1] [i_8] [i_8] [i_10] [(unsigned short)11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_12 - 3])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_6 [i_8] [i_10])))) ? (-474504759) : (((/* implicit */int) var_1))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_6))));
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) < (15184631017773240362ULL))))) < (min((var_7), (((/* implicit */unsigned int) arr_26 [i_1] [i_1])))))))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(var_9))), (((/* implicit */unsigned long long int) min((-1LL), (((/* implicit */long long int) var_1)))))))) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) arr_31 [i_8] [i_8] [i_1] [i_1]))));
            arr_39 [i_1] = ((/* implicit */unsigned char) var_4);
        }
        /* LoopNest 2 */
        for (signed char i_13 = 1; i_13 < 20; i_13 += 2) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_15 = 2; i_15 < 19; i_15 += 2) /* same iter space */
                    {
                        arr_47 [i_14] [i_13] [i_13] [i_14] = ((((((/* implicit */long long int) ((/* implicit */int) (short)9498))) / (var_4))) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_0)) : (var_3))));
                        var_26 += ((/* implicit */signed char) ((((/* implicit */int) var_2)) << (((/* implicit */int) var_6))));
                    }
                    for (unsigned short i_16 = 2; i_16 < 19; i_16 += 2) /* same iter space */
                    {
                        var_27 -= ((/* implicit */signed char) 15184631017773240362ULL);
                        var_28 |= ((/* implicit */_Bool) var_0);
                    }
                    var_29 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_7) << (((var_4) + (3712049129586850760LL)))))) ? (((((/* implicit */_Bool) (short)-27736)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_1] [i_13] [i_13 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) var_10))));
                    var_30 = ((/* implicit */unsigned char) ((max(((+(var_9))), (((/* implicit */unsigned long long int) var_3)))) << (((((/* implicit */_Bool) ((arr_7 [i_13 + 1] [i_13]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9498))) : (var_7)))) ? ((-(((/* implicit */int) (signed char)-50)))) : (((((/* implicit */_Bool) (unsigned short)40914)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_21 [i_14]))))))));
                    var_31 = ((((/* implicit */long long int) max((var_7), (var_7)))) & ((~(var_4))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_17 = 1; i_17 < 20; i_17 += 2) 
        {
            for (long long int i_18 = 1; i_18 < 21; i_18 += 2) 
            {
                {
                    var_32 = ((/* implicit */_Bool) ((var_5) / (max((((/* implicit */long long int) arr_37 [i_1] [(unsigned char)1] [18LL] [(unsigned char)19] [(unsigned short)17])), (var_3)))));
                    /* LoopNest 2 */
                    for (long long int i_19 = 2; i_19 < 20; i_19 += 1) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                arr_60 [i_1] [i_18] [i_18] [i_19] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_16 [i_1] [i_17 + 2] [i_18 - 1])) ? (max((arr_49 [i_1] [i_17 + 1] [i_18 - 1] [i_19] [i_1] [i_20]), (((/* implicit */long long int) var_2)))) : (-8679723703351221992LL))), (((/* implicit */long long int) arr_57 [i_17] [i_17] [i_17 + 1] [i_18] [i_17]))));
                                var_33 += (~(min((((/* implicit */long long int) min((var_7), (var_0)))), (var_3))));
                                var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_19 [i_19] [i_19] [i_19] [i_19 - 1] [i_19 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_18] [i_17] [i_19 - 2] [i_17 - 1] [i_17]))) : (arr_6 [i_17 + 2] [i_18 - 1])))) ? (((((/* implicit */_Bool) 3262113055936311253ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_4))) : (((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_19 + 2] [i_19 + 2] [i_19 + 2] [i_19 - 2] [i_19]))) / (var_3)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_61 [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (short)-27743)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_10)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (var_4)))) : (((((/* implicit */unsigned long long int) var_4)) | (var_9)))))));
        arr_62 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1]))))) <= (((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1] [i_1] [i_1])))))));
    }
    /* LoopNest 3 */
    for (long long int i_21 = 2; i_21 < 14; i_21 += 3) 
    {
        for (unsigned char i_22 = 0; i_22 < 15; i_22 += 2) 
        {
            for (unsigned long long int i_23 = 1; i_23 < 13; i_23 += 2) 
            {
                {
                    arr_71 [i_23] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >> (((((/* implicit */int) var_2)) - (21060)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_24 = 0; i_24 < 15; i_24 += 2) 
                    {
                        for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(var_4)))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-9499)))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_19 [i_21 + 1] [i_22] [i_23 + 2] [i_24] [i_25])) : (-474504789)))))) : (min((((/* implicit */long long int) var_6)), (((arr_25 [i_24] [i_23 + 2] [(unsigned char)13]) ? (((/* implicit */long long int) var_10)) : (var_3)))))));
                                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) ^ (var_9)))))))));
                                arr_78 [5ULL] [i_23] [i_25] = ((/* implicit */long long int) (-(2006581476U)));
                                arr_79 [i_21] [i_25] [i_25] [i_23] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_21 - 2] [i_21 - 2])) % (((/* implicit */int) arr_72 [i_21 + 1] [i_21] [i_23 - 1] [i_23 + 2] [i_23 - 1] [i_23]))))) ? (((((arr_36 [i_22]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) >> (((((((/* implicit */_Bool) var_8)) ? (var_3) : (var_5))) - (2031150450098162554LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))))));
                            }
                        } 
                    } 
                    arr_80 [i_23] [i_23] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_67 [i_23] [i_23 + 1] [i_23 - 1]))))) ? (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) var_0))));
                }
            } 
        } 
    } 
}
