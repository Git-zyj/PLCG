/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40557
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
    var_18 = ((/* implicit */unsigned int) var_12);
    var_19 += (unsigned short)4348;
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = (-(((((/* implicit */_Bool) (unsigned short)4348)) ? ((~(2948121080U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4348))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)169)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) var_1))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) / (var_6))) : (((/* implicit */long long int) ((/* implicit */int) min((var_7), (arr_0 [i_0 - 2])))))))) ? (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned char)86)))))) : ((+(((/* implicit */int) arr_0 [i_0 - 2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                arr_13 [i_3] = (i_3 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))) : (6248188889748154174ULL))), ((-(var_12)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13239)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)1))))) ? (((2773771444U) >> (((arr_11 [i_3] [i_2] [i_3]) - (3801466554220564023ULL))))) : (((/* implicit */unsigned int) ((((-373440293) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_3] [i_3])) - (149)))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4348))))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))) : (6248188889748154174ULL))), ((-(var_12)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13239)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)1))))) ? (((2773771444U) >> (((((arr_11 [i_3] [i_2] [i_3]) - (3801466554220564023ULL))) - (856887727642569087ULL))))) : (((/* implicit */unsigned int) ((((-373440293) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_3] [i_3])) - (149)))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4348)))))))))));
                arr_14 [i_3] = ((/* implicit */signed char) arr_7 [i_3]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (12198555183961397442ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        arr_25 [i_4] [i_6] [i_6] = ((/* implicit */unsigned char) min(((unsigned short)12770), ((unsigned short)61187)));
                        arr_26 [i_5] [i_6] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)49785))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)11))));
                        arr_29 [i_4] [i_5] [i_6] [i_4] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_4] [i_5]))));
                        arr_30 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (~(arr_6 [i_8] [(_Bool)1])));
                        arr_31 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) == (((/* implicit */int) arr_18 [i_6] [i_5] [i_4]))));
                    }
                    var_23 ^= ((/* implicit */short) max((((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned short)4348)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13176)) ? (((/* implicit */int) arr_12 [i_6] [i_5])) : (((/* implicit */int) var_10))))) ? ((~(-373440293))) : (((/* implicit */int) (unsigned short)4348))))));
                    var_24 = ((/* implicit */unsigned int) min((min((arr_11 [i_4] [i_5] [i_6]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_4]))))))), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned short)65535)))), (((var_5) / (((/* implicit */int) arr_20 [i_5])))))))));
                }
            } 
        } 
        arr_32 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4])))))) ? (((/* implicit */int) (unsigned char)0)) : ((+(var_5))))) : (((((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_15))))) * (((/* implicit */int) min(((short)0), (((/* implicit */short) (_Bool)0)))))))));
    }
    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) min((-32304800), (((/* implicit */int) arr_12 [i_9] [i_10]))));
            var_26 *= ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (short)-19494)), (229520354))), (((/* implicit */int) min((arr_36 [i_10] [i_10] [i_9]), (arr_36 [i_10] [i_10] [i_10]))))));
            arr_38 [i_9] [(unsigned char)3] [i_9] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_36 [i_9] [i_9] [i_9])))), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_37 [i_9])) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-888943742), (((/* implicit */int) (unsigned short)4348))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_9])) * (((/* implicit */int) (unsigned short)0))))) : (min((arr_34 [i_9]), (((/* implicit */unsigned int) (short)0))))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))))), (max((((/* implicit */unsigned long long int) var_16)), (var_12))))));
            var_27 = ((/* implicit */long long int) max((((/* implicit */int) min((arr_33 [i_10]), ((unsigned char)87)))), ((-(((/* implicit */int) max((var_13), (arr_10 [i_9] [i_9]))))))));
        }
        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 4; i_12 < 22; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    {
                        arr_45 [i_9] [i_9] [i_13] = ((/* implicit */_Bool) (~(((((((/* implicit */int) (unsigned short)51604)) | (((/* implicit */int) (unsigned char)169)))) ^ ((~(((/* implicit */int) arr_35 [i_12 - 1]))))))));
                        arr_46 [i_13] [i_13] = ((/* implicit */unsigned short) ((max((((/* implicit */int) arr_7 [i_13])), ((~(((/* implicit */int) var_13)))))) << (((((((/* implicit */_Bool) arr_44 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((((/* implicit */_Bool) arr_37 [i_9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) arr_37 [i_13])) ? (((/* implicit */int) arr_33 [i_9])) : (((/* implicit */int) var_15)))))) - (24667)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)0)), ((short)19493)))), (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned long long int) var_16)) : (var_8)))))) ? (min((arr_6 [i_9] [i_11]), (((/* implicit */unsigned int) ((signed char) var_7))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_14)))))));
                        arr_53 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (short)0))));
                        arr_54 [i_14] = ((/* implicit */unsigned char) min((9536931085922089411ULL), (((/* implicit */unsigned long long int) (unsigned short)4348))));
                        var_29 &= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_43 [i_9])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_7))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37321))) / (var_16))))), (((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)171))))))));
                        arr_55 [i_9] [i_14] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_14] [i_11])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)171))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11] [i_14]))) : (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) || (((/* implicit */_Bool) ((((arr_40 [i_9]) ? (var_8) : (((/* implicit */unsigned long long int) var_16)))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 3) 
        {
            arr_58 [i_16] [i_16] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_48 [i_9] [i_9] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (6248188889748154174ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_51 [i_16] [(signed char)2] [i_16] [i_16] [(signed char)2] [i_9])), (var_3))))))) ? (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) : (min(((-(((/* implicit */int) arr_52 [i_9] [i_9] [i_16])))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)0)), ((unsigned short)0))))))));
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * ((-(((((/* implicit */_Bool) 2667095107711600506LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)4348)))))))))));
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 9536931085922089411ULL)))))))) ? ((-(((/* implicit */int) arr_43 [i_9])))) : ((+(((/* implicit */int) (_Bool)0))))));
                var_32 = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))), (arr_41 [i_9] [i_16] [i_17]))))));
            }
            for (unsigned long long int i_18 = 4; i_18 < 22; i_18 += 4) 
            {
                arr_63 [i_9] = ((/* implicit */_Bool) max((((/* implicit */int) ((((((/* implicit */int) (short)0)) < (((/* implicit */int) (unsigned char)85)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)85)), (var_16))))))), (max((-609630930), ((((_Bool)1) ? (((/* implicit */int) arr_43 [i_18 - 2])) : (((/* implicit */int) arr_60 [i_18] [i_16] [i_9]))))))));
                var_33 += ((/* implicit */unsigned short) arr_39 [i_9] [i_16] [i_18 - 1]);
            }
        }
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_50 [i_9] [i_9] [i_9])) << (((((/* implicit */int) arr_42 [i_9] [i_9] [i_9] [i_9])) - (24494))))), (((/* implicit */int) min((var_17), (var_2))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0)))))));
        var_35 ^= ((/* implicit */unsigned char) max(((~((-(4216103786888120657ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)119)) ? (arr_49 [i_9] [(_Bool)1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14182061062907753228ULL)) ? (((/* implicit */int) arr_59 [i_9] [i_9] [i_9] [(_Bool)1])) : (((/* implicit */int) arr_42 [i_9] [i_9] [i_9] [i_9]))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_9]))) : (var_8)))))));
    }
}
