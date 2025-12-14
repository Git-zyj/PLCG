/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193806
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
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        var_11 += ((/* implicit */unsigned short) ((signed char) ((max((var_7), (((/* implicit */unsigned int) var_4)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        var_12 = var_6;
                        var_13 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61771))) : (-5906823848633915212LL)))) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (var_1))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */long long int) var_9);
                            arr_13 [i_0] [i_0] [(unsigned char)11] [(unsigned char)1] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */unsigned int) ((var_8) / (((/* implicit */int) var_4))))) : (((var_7) / (((/* implicit */unsigned int) var_8))))));
                            var_15 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 4294967278U)) : (5085759273536144531ULL))));
                            var_16 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) var_0)))) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1))))));
                        }
                    }
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_17 = (~(((/* implicit */int) ((((((/* implicit */int) var_4)) + (var_3))) == (min((var_8), (((/* implicit */int) var_6))))))));
                        /* LoopSeq 4 */
                        for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((var_10) < (var_8))))) ? (((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_0)) : (var_1))) : (var_9))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
                            arr_18 [i_0] [(unsigned short)6] [(unsigned short)6] [3ULL] [(signed char)2] [3ULL] = ((/* implicit */short) ((((((/* implicit */_Bool) 2113929216ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (18446744073709551615ULL))) / (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_8) : (var_10)))) : (min((0ULL), (18446744073709551615ULL)))))));
                        }
                        for (long long int i_7 = 2; i_7 < 12; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2113929216ULL)) ? (((/* implicit */int) (unsigned short)4788)) : (((/* implicit */int) (short)192))));
                            var_20 ^= ((/* implicit */short) ((((((var_8) >= (((/* implicit */int) var_4)))) ? (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)250)) <= (((/* implicit */int) (signed char)0))))))) >= (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_0)) % (var_1)))) ? (((/* implicit */int) ((unsigned short) var_0))) : (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_2)))))))));
                            arr_22 [i_7] [i_5] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (var_8))) <= (((var_0) ^ (((/* implicit */int) var_6))))))));
                        }
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [(unsigned char)7] = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_6)) <= (var_8)))));
                            arr_26 [(signed char)2] [i_5] [i_2] [i_1] [(unsigned short)6] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) != (((/* implicit */int) var_4)))) ? (((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (var_10))))));
                            var_21 = ((/* implicit */unsigned int) var_2);
                            var_22 += ((/* implicit */unsigned long long int) ((((var_1) < (((/* implicit */unsigned int) var_0)))) ? (((/* implicit */int) ((unsigned short) 4294967295U))) : (((var_3) / (var_3)))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */short) ((long long int) (!(((_Bool) var_5)))));
                            arr_31 [8ULL] [i_1] [i_2] [i_1] [8ULL] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */int) var_5))))))) ? (min((((((/* implicit */_Bool) (short)496)) ? (((/* implicit */unsigned long long int) 4294967277U)) : (2113929216ULL))), (((/* implicit */unsigned long long int) ((var_0) % (var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) var_6))))))))));
                            arr_32 [(unsigned char)11] [i_1] [(unsigned char)11] [(unsigned char)11] [i_1] [5LL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) var_10)) < (var_1))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_4))))) : (((int) var_2))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))) : (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7))), (((/* implicit */unsigned int) (+(var_0))))))));
                            arr_33 [i_9] [i_1] [i_2] [i_2] [i_1] [(unsigned char)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (var_7))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_8)) : (var_1))) != (((var_1) | (var_1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (var_3)))) || (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (var_9))))))));
                        }
                    }
                    arr_34 [i_0] [(unsigned char)10] = min((((((var_9) | (((/* implicit */unsigned int) var_10)))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) var_6)));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)30701)) - (((/* implicit */int) (short)189))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)15105))) - (-1LL)))))) ? (min((((var_10) + (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (var_8))))) : (((((/* implicit */_Bool) ((signed char) var_7))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (var_10))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)189)) : (((/* implicit */int) (signed char)-107))))))));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (max((var_3), (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_1))))))) / (var_8)));
                        arr_37 [i_2] = ((/* implicit */short) ((long long int) ((((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_5)))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_40 [i_0] [i_1] [i_1] [i_0] [i_0] = ((((((/* implicit */unsigned int) var_3)) | (var_1))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))));
                        var_26 = ((/* implicit */unsigned char) var_10);
                        var_27 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) var_8)) < (var_7))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (var_8))))));
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            var_28 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (var_7))) ? (var_1) : (((/* implicit */unsigned int) ((int) var_9))));
                            var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) && (var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((short) var_8)))));
                            var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            arr_44 [(short)13] [(short)12] [(short)12] [i_2] [i_11] [(short)12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_3))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_0) : (var_10))))));
                        }
                    }
                    for (short i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        arr_49 [i_0] [i_0] [(unsigned short)1] [i_0] [13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (var_0)))) ? (max((((/* implicit */unsigned int) var_8)), (var_9))) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) var_8)))))))));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) & (((int) var_7))))) ? (min(((~(var_3))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (var_0))))) : (var_0)));
                        var_32 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_8) : (var_8))) : (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) var_5)))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */int) var_4)) - (((/* implicit */int) var_5))))))));
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (var_10))) : (((var_3) - (var_8)))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)32767)))))))))));
                    }
                }
            } 
        } 
        arr_50 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) var_3)), (((unsigned int) (signed char)126))));
    }
    for (int i_14 = 0; i_14 < 16; i_14 += 2) 
    {
        arr_53 [(short)5] [(unsigned char)6] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)94)) & (((/* implicit */int) (_Bool)0))));
        arr_54 [11ULL] = ((/* implicit */unsigned short) min((-1901253369), (((/* implicit */int) (_Bool)0))));
        arr_55 [i_14] [i_14] = ((/* implicit */unsigned short) ((((4095) < (((/* implicit */int) (_Bool)1)))) ? (max((min((var_3), (var_0))), (((var_0) << (((((/* implicit */int) var_6)) - (12346))))))) : (((/* implicit */int) var_4))));
        /* LoopSeq 1 */
        for (signed char i_15 = 0; i_15 < 16; i_15 += 4) 
        {
            var_34 = ((/* implicit */long long int) min((((min((((/* implicit */unsigned int) var_4)), (var_1))) / (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) == ((-(var_9))))))));
            var_35 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3764))) * (21LL)))) ? (((((/* implicit */_Bool) 2305843009213693951ULL)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (unsigned short)64896)))) : (((/* implicit */int) min(((unsigned short)7), (((/* implicit */unsigned short) (unsigned char)182)))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-30378)) : (((/* implicit */int) var_2))))) ? (33554432U) : (4261412863U)))));
            var_36 = ((/* implicit */short) min((((((unsigned long long int) var_3)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) == (((/* implicit */int) var_2)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)0))))) : (((((/* implicit */unsigned int) var_3)) + (var_7))))))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        var_37 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (var_8))) - (var_8)));
        var_38 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) var_5)))) == (((var_3) - (var_0)))));
    }
}
