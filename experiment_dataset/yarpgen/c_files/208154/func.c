/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208154
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_7))));
    var_18 |= ((/* implicit */int) min((((((/* implicit */_Bool) 33776997205278720LL)) ? (779732406U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21609))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(var_14)))) < ((~(((/* implicit */int) var_8))))))), (min((arr_7 [i_2 - 1]), (((/* implicit */unsigned int) var_10))))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 4294967284U))));
                                arr_12 [i_2 + 1] [i_1] [(unsigned char)0] = ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                    var_21 += arr_2 [i_0] [i_0] [i_0];
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) % (min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (var_6)))), ((~(((/* implicit */int) var_4))))))));
                }
                for (long long int i_5 = 1; i_5 < 15; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_1] [(unsigned short)5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((((/* implicit */int) arr_3 [(short)14])) >= (((/* implicit */int) (_Bool)1)))), (arr_1 [i_1] [i_1])))) <= (((/* implicit */int) var_13))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967284U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((~((~(var_7))))))))));
                        arr_20 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_5] [i_5] [i_5 - 1] [i_5 - 1] [2LL]))));
                        var_24 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_16 [i_5 + 1] [i_6])) - (((((/* implicit */int) (short)21589)) - (((/* implicit */int) var_5)))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_10))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((var_8) ? (min((((/* implicit */unsigned int) (short)-21609)), (4294967295U))) : (((((((/* implicit */_Bool) var_13)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))))))));
                    }
                    var_27 += (!(((/* implicit */_Bool) max((max((var_12), (6U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-21602)))))))));
                    arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [2LL] [i_5 + 1] [2LL] [i_5 - 1] [i_5] [2LL])) | (((/* implicit */int) var_4)))) * (((/* implicit */int) arr_3 [i_0]))));
                }
                for (int i_8 = 2; i_8 < 14; i_8 += 4) 
                {
                    var_28 += ((/* implicit */unsigned char) ((unsigned long long int) ((((arr_0 [i_8]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65517))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)64)), ((unsigned short)65531)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_8 + 2] [i_8 + 2])), (min((var_11), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))))))))));
                    var_30 = ((/* implicit */_Bool) ((int) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 14670756143878720060ULL)))))));
                }
                for (unsigned int i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21620))) != (4294967295U))))));
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_30 [i_10] [i_9] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((arr_29 [i_10 + 1] [i_10 + 1] [i_9 - 1] [i_9 + 1]) > (arr_29 [i_10 + 1] [i_10 + 1] [i_9 + 1] [i_9 + 1]))) ? ((~(arr_29 [i_10 + 1] [i_10 + 1] [i_9 - 1] [i_9 + 1]))) : (min((arr_29 [i_10 + 1] [i_10 + 1] [i_9 + 1] [i_9 - 1]), (((/* implicit */unsigned int) (short)-21580))))));
                        arr_31 [i_1] [i_1] [i_9] [i_10] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_13 [i_10 + 1] [i_1] [i_0])) ? (((/* implicit */int) max((arr_8 [(short)5] [(unsigned char)6] [15U] [i_0]), (((/* implicit */unsigned char) arr_14 [i_9] [i_1] [(_Bool)1]))))) : (((/* implicit */int) ((unsigned short) (short)21587)))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967280U)) && ((_Bool)1)));
                        var_33 = ((/* implicit */_Bool) var_13);
                        arr_36 [(unsigned short)3] [i_0] [i_1] [i_9] [i_9] [i_11] = var_13;
                        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_9 - 1] [i_1]))) : (var_7))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) && (((/* implicit */_Bool) arr_32 [i_11] [i_9 + 1] [i_9 + 1] [i_9 + 1])))))))))));
                        arr_37 [i_0] [i_1] [i_9] [i_11] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (+(4294967280U)))), (18446744073709551615ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19))) | (3775987929830831588ULL)))));
                    }
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_35 += ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)21588))) | (2359061127U)))) && ((_Bool)1)))));
                        var_36 = ((/* implicit */unsigned int) (~(((-6790084356203840411LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))));
                        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) arr_17 [i_9 - 1]))));
                        var_38 += ((/* implicit */unsigned long long int) ((((_Bool) var_9)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) != (min((((/* implicit */unsigned long long int) var_11)), (6514424326067491307ULL)))))));
                        arr_40 [i_1] [i_1] [(unsigned char)12] = ((/* implicit */long long int) ((unsigned char) var_4));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)12497)), (2283011580U))))));
                        var_40 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_15 [i_13] [i_9] [i_0])))))))) || ((!(((/* implicit */_Bool) arr_29 [i_9] [i_9] [5ULL] [i_9]))))));
                        var_41 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_35 [i_9 + 1] [i_9 + 1] [i_9 - 1]), (arr_35 [i_9 - 1] [i_9 - 1] [i_9 - 1]))))));
                        var_42 += ((/* implicit */unsigned char) max((((/* implicit */int) arr_27 [i_1] [i_9 + 1] [9U])), (((((/* implicit */int) arr_5 [i_9 - 1] [i_9 + 1] [i_9 - 1])) - ((-(((/* implicit */int) arr_27 [(_Bool)1] [i_9] [i_1]))))))));
                    }
                    arr_44 [i_9] [i_1] [i_9] [i_9] = ((/* implicit */_Bool) arr_27 [i_9] [i_1] [i_0]);
                }
                var_43 = arr_25 [i_0] [i_1];
                arr_45 [i_0] [i_1] = ((/* implicit */int) var_8);
            }
        } 
    } 
    var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((((/* implicit */_Bool) 8459520635007166762LL)) ? (((/* implicit */int) (unsigned short)56154)) : (((/* implicit */int) (signed char)50)))))));
}
