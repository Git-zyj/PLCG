/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237504
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
    var_15 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1990892620U)))) ? ((-(((/* implicit */int) (unsigned char)86)))) : (((((/* implicit */int) (unsigned short)4845)) >> (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 4; i_2 < 10; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_1] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)57905)) ? (((/* implicit */int) (short)-12)) : (((/* implicit */int) (signed char)79))))), (max((1709707058U), (((/* implicit */unsigned int) 226870789))))))) ? (min((11611104236976466741ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned short)36936))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((508018232) == (((var_10) / (915976719)))))))));
                                var_16 += ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15872))))) * (((/* implicit */int) var_4))))));
                                arr_13 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)86)))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned char)192))))) : ((~(((/* implicit */int) arr_0 [i_0 - 1])))))))));
                                var_17 = ((((/* implicit */_Bool) (unsigned short)58168)) ? ((((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (((/* implicit */int) (unsigned short)24819)) : ((+(((/* implicit */int) (short)-9)))))) : ((+(((/* implicit */int) (unsigned char)222)))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] |= ((/* implicit */int) arr_0 [i_1]);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_2 [i_0 - 1] [i_1] [i_5])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_5]))))))) ^ ((-(((((/* implicit */_Bool) (unsigned short)58168)) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) arr_0 [i_5]))))))));
                    var_18 |= min((((-1204654564385289952LL) - (((/* implicit */long long int) 266579034)))), (((/* implicit */long long int) (_Bool)0)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */int) arr_8 [i_0 + 1]);
                        /* LoopSeq 4 */
                        for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? ((~(-1914834038))) : ((-(((/* implicit */int) var_1))))))) ? ((+(arr_19 [i_0] [i_1] [i_0 - 1] [i_6] [i_7]))) : ((~(((((/* implicit */_Bool) (unsigned char)173)) ? (-4096) : (1914834055)))))));
                            var_21 = ((/* implicit */unsigned char) (((~(arr_24 [i_0] [i_0 + 2] [i_0 + 2] [i_6] [i_0 + 2] [i_1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)235)) && (((/* implicit */_Bool) (unsigned short)58163))))))));
                            arr_26 [i_6] [i_1] [i_0] [i_1] [i_0 - 1] [i_0 + 1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) & (((/* implicit */int) (short)0))));
                            var_22 = ((/* implicit */int) min((var_22), ((((~((-(((/* implicit */int) (_Bool)0)))))) - (((/* implicit */int) (unsigned char)174))))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            arr_30 [i_6] [i_5] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1709707054U)) ? (((7703812573912143588ULL) * (((/* implicit */unsigned long long int) arr_21 [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_10)))) ? (arr_1 [i_0 - 1]) : (arr_19 [i_6] [i_6] [i_0 - 1] [i_6] [i_0])));
                            arr_31 [i_0] [7ULL] [i_0 + 2] [i_0] [i_0 + 1] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_5] [i_6]))));
                        }
                        for (int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_24 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 10742931499797408021ULL))))))))));
                            var_25 |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_17 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1]) <= (((/* implicit */int) var_2)))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(17165520733762537181ULL)))) ? ((~(arr_17 [i_0 - 1] [i_0 - 1] [i_6] [i_9]))) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-9440)) >= (((/* implicit */int) (unsigned short)51845))))) : (((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6] [i_9] [i_6]))));
                            var_27 |= ((/* implicit */short) min((((/* implicit */int) arr_29 [(_Bool)1])), (((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0] [i_0 + 1])) ? (var_12) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 - 1]))))));
                        }
                        for (short i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            arr_37 [i_0 + 2] [i_0 + 2] [i_6] [i_6] [i_0 + 2] [i_10] [i_6] = ((/* implicit */unsigned long long int) var_10);
                            arr_38 [i_6] [i_6] [i_5] [i_0] [i_6] = ((/* implicit */short) (((!(((/* implicit */_Bool) 0LL)))) || (((/* implicit */_Bool) (+(arr_24 [9U] [9U] [i_5] [i_5] [i_6] [i_10]))))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-9)) - (-508018233)));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((((/* implicit */_Bool) -5164920004665407106LL)) ? (((((/* implicit */int) var_3)) & (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_0 [4LL])) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) arr_39 [i_0] [i_0] [i_5]))))))));
                    }
                }
                arr_42 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) (unsigned char)255);
                /* LoopSeq 4 */
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    var_29 += ((/* implicit */unsigned short) (((((-(((/* implicit */int) (short)18503)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)58168)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42))) : (18014398375264256LL)));
                    var_31 = ((/* implicit */_Bool) 508018255);
                    var_32 = ((/* implicit */int) max((var_32), ((~(((/* implicit */int) (!(arr_4 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2]))))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])) ? (2147483647) : (((/* implicit */int) (_Bool)1))))) ? (max((arr_34 [i_0] [i_0] [i_0] [i_1] [i_13]), (10742931499797408027ULL))) : (((/* implicit */unsigned long long int) 3548738794U))))) ? ((-(((/* implicit */int) (unsigned short)24954)))) : (((((/* implicit */int) (unsigned char)209)) ^ (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        for (unsigned short i_15 = 1; i_15 < 10; i_15 += 3) 
                        {
                            {
                                arr_52 [i_14] [i_1] [i_13] [i_0] [i_15] [i_13] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)40558)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 221152475U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133))) : (0U)))) : (288228177128456192LL)));
                                arr_53 [i_14] [i_1] [i_13] [i_14] [i_14] [i_1] [6] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)59381)))) ? (min((100663296U), (((/* implicit */unsigned int) (short)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1628009716)) || (((/* implicit */_Bool) (signed char)-108))))))));
                                arr_54 [i_14] [i_15] [i_14] [i_0] [i_13] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_8 [i_15 + 1])) | (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 9; i_16 += 1) 
                    {
                        for (int i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */short) arr_2 [i_0] [i_0] [i_0]);
                                var_35 ^= ((/* implicit */unsigned short) (-(min(((-(3906866549U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) -1445944817)) >= (3548738794U))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    var_36 = (!(((/* implicit */_Bool) (-((-(18446744073709551612ULL)))))));
                    var_37 = (+(((/* implicit */int) (!(((/* implicit */_Bool) -273571652))))));
                }
                /* vectorizable */
                for (long long int i_19 = 2; i_19 < 7; i_19 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_20 = 0; i_20 < 11; i_20 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_57 [i_19] [i_1] [i_19])) ? (((/* implicit */int) arr_58 [i_0] [i_0] [i_19] [i_20] [i_0])) : (arr_44 [i_20] [i_0] [i_0] [i_0])))));
                        var_39 ^= ((/* implicit */_Bool) arr_55 [i_19 + 4] [i_1] [i_19] [8U] [i_0] [i_19 - 2]);
                        arr_69 [10ULL] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((288228177128456192LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133)))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_40 -= (+(((/* implicit */int) (short)504)));
                        var_41 = ((/* implicit */unsigned char) (-(144110790029344768ULL)));
                        arr_74 [i_0] [i_1] [i_19] [i_21] = ((((/* implicit */int) arr_51 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_19 - 2])) / (((/* implicit */int) var_4)));
                        /* LoopSeq 1 */
                        for (long long int i_22 = 3; i_22 < 9; i_22 += 3) 
                        {
                            arr_79 [i_22] [i_21] [i_21] [i_19] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [(signed char)6] [i_1])) ? (((/* implicit */int) arr_28 [6] [i_22 - 3])) : (((/* implicit */int) arr_28 [10U] [i_19 + 1]))));
                            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) (+(arr_68 [i_0 + 1] [i_1] [i_19 - 2] [i_21] [i_19 - 2] [i_1])))) || ((!(((/* implicit */_Bool) var_4)))))))));
                            var_43 |= ((((/* implicit */int) (unsigned char)118)) & ((~(((/* implicit */int) (short)7383)))));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)47518)) % (((/* implicit */int) (_Bool)1))));
                            var_45 = ((/* implicit */int) var_1);
                        }
                        var_46 = ((/* implicit */int) max((var_46), ((-(((/* implicit */int) arr_59 [(unsigned short)2] [(unsigned short)2] [i_19] [i_21] [10ULL] [i_19 + 3]))))));
                    }
                    arr_80 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned short)35357))))) ? (((/* implicit */int) arr_61 [i_19 + 2] [i_1] [i_1] [i_0 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_19] [i_0 + 1])))))));
                    var_47 |= ((/* implicit */unsigned short) (~(12506016505275530107ULL)));
                }
                arr_81 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (unsigned short)24954)) : (742465927)));
            }
        } 
    } 
}
