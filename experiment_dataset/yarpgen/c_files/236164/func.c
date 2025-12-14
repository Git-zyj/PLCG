/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236164
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_20 = min((((/* implicit */long long int) (-(-539384409)))), (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_2 [i_0 + 2]) : (var_19))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)153))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_2] [i_1] [i_1] [i_2] [i_3 - 2] = ((/* implicit */_Bool) max((arr_7 [i_2]), (((/* implicit */unsigned short) (short)-31114))));
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_18)))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 9; i_4 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) 15U);
                        var_22 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 + 1] [i_0])) ? (arr_10 [i_0] [i_1] [9LL] [i_4] [i_4 - 2]) : (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (var_5) : (var_16)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)145)) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2])))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_0] [i_0] [(signed char)4] [i_2] [i_2] [(unsigned short)5]))))), (min((((/* implicit */unsigned long long int) 4294967275U)), (468131182607407022ULL)))))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_2] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */int) 2064048227U);
                        var_23 = ((/* implicit */_Bool) ((int) var_16));
                        /* LoopSeq 2 */
                        for (int i_6 = 2; i_6 < 7; i_6 += 2) 
                        {
                            var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)15237)), (4294967279U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -7)) || ((!(((/* implicit */_Bool) (unsigned char)43))))))) : (((/* implicit */int) arr_7 [i_6]))));
                            arr_24 [i_2] [i_2] [i_0] |= ((/* implicit */long long int) ((unsigned short) max((((((/* implicit */_Bool) arr_21 [i_6] [6] [i_5] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [(short)5] [i_2])) : (((/* implicit */int) var_6)))), (((/* implicit */int) (short)-30806)))));
                            arr_25 [i_6] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_0 + 1])))) ? (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)9217)) || (((/* implicit */_Bool) var_19))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
                            var_25 -= ((/* implicit */int) arr_12 [i_5 - 1] [i_0 + 1] [i_6 + 3]);
                            arr_26 [i_6 - 2] [i_5] [i_6] [i_1] [i_0 - 1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) ((int) (unsigned short)56323))) ? (((/* implicit */int) arr_8 [i_6] [i_2] [i_1] [i_6])) : (((/* implicit */int) (unsigned short)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_16 [i_0])) : (var_2)))) && (((/* implicit */_Bool) 16U)))))));
                        }
                        for (signed char i_7 = 3; i_7 < 9; i_7 += 4) 
                        {
                            var_26 = ((/* implicit */short) min((1), (((/* implicit */int) (unsigned char)2))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9202)) ? ((~(var_16))) : (((int) var_9))))) ? ((((!(((/* implicit */_Bool) (short)-32763)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)253)) | (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (unsigned short)56356)) ? (arr_5 [i_5] [i_5] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_29 [i_0] [i_1] [i_2] [i_2] [i_5] [i_7 - 1])))))))));
                            var_28 = ((/* implicit */unsigned char) ((short) ((((13U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4834))))) >> (((((((/* implicit */_Bool) (unsigned char)0)) ? (arr_10 [i_7] [i_5] [(signed char)1] [i_1] [i_0]) : (((/* implicit */int) var_3)))) - (74))))));
                        }
                    }
                    for (unsigned short i_8 = 2; i_8 < 9; i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_14))))));
                        var_29 -= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) arr_4 [i_0 + 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_10)))) && (((/* implicit */_Bool) var_3))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                        {
                            arr_37 [i_2] [i_2] = ((/* implicit */_Bool) var_8);
                            arr_38 [i_0] [i_0] [i_2] [i_2] [i_2] [i_8] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_8 - 2] [i_1] [i_0])) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_2])) >= (var_15)))))) | ((-(((int) (short)32759))))));
                            arr_39 [i_0] [i_1] [i_2] [i_8 - 2] [i_2] = ((/* implicit */short) min((max((min((var_11), (((/* implicit */long long int) arr_27 [i_1] [(unsigned char)8] [i_8])))), (((/* implicit */long long int) (signed char)-109)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) 536808334)) && (((/* implicit */_Bool) (unsigned short)47347))))) : (arr_31 [i_8 + 1] [i_8 + 1] [i_0 - 1] [i_8] [i_9]))))));
                            arr_40 [i_8 - 2] [i_1] [i_1] [i_8] [i_9] [i_1] [i_2] = ((/* implicit */short) max((((468131182607407038ULL) | (((/* implicit */unsigned long long int) 9223372036854775806LL)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_0 - 1] [i_8 - 1] [i_8] [i_8 + 1] [i_8 - 2] [i_8])))))));
                            arr_41 [(unsigned short)4] [i_2] [i_2] [i_2] = arr_36 [i_0 + 2] [(short)3] [i_0 + 1] [i_8 + 1] [i_8 - 1];
                        }
                        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
                        {
                            arr_44 [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_35 [i_0]))));
                            var_30 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_1] [i_2] [i_8 - 2] [i_10]))) : (max((((long long int) var_12)), (((/* implicit */long long int) ((short) 468131182607407022ULL)))))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            arr_48 [i_0] [i_2] [i_2] [i_8 - 1] [i_11] = var_0;
                            arr_49 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)18168)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_0 + 1] [i_1] [i_2] [i_2] [i_11])))));
                            var_31 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17052))) : (4203077956U)));
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_52 [i_2] = ((/* implicit */_Bool) (+(((long long int) (short)-3763))));
                            arr_53 [i_0 - 1] [3ULL] [i_8 + 1] [i_2] [i_12] [i_12 - 1] [i_8 + 1] = ((/* implicit */long long int) min(((~(((/* implicit */int) ((signed char) arr_29 [(unsigned short)0] [i_0] [i_1] [i_2] [i_8 - 2] [i_12 - 1]))))), (var_5)));
                        }
                        arr_54 [i_2] [i_1] [i_2] [i_2] [i_8 - 1] [i_1] = ((/* implicit */signed char) (((~((~(842684259904598817LL))))) | (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_6 [i_2])) : (var_15)))))));
                    }
                }
            } 
        } 
    }
    var_32 = min((max(((~(var_5))), (var_8))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (unsigned short)60690))))) == (17978612891102144565ULL)))));
    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((((_Bool) var_19)) && (((((/* implicit */int) var_7)) == (((/* implicit */int) var_12)))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)60686)), (339816623)))))))))))));
}
