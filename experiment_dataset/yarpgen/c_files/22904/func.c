/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22904
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_1), (var_6)))) && (((/* implicit */_Bool) var_6))))) : ((-(((/* implicit */int) var_7))))));
    var_12 = ((/* implicit */unsigned long long int) var_8);
    var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((max((var_9), (((/* implicit */unsigned int) var_10)))) == (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)29861)) * (((/* implicit */int) (unsigned char)12)))))))), (max((((var_6) >> (((2147483647) - (2147483644))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_0)), (var_10))))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1496296763)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) : (min((6308749699259668902LL), (((/* implicit */long long int) -1496296755))))))) ? (((var_0) ? (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (3026910368U)))) : (((unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) (unsigned char)233)) ? (((((/* implicit */_Bool) -1496296780)) ? (((/* implicit */unsigned int) 0)) : (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1342922610U)))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_8 [i_0] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((short) ((_Bool) ((((/* implicit */int) (unsigned short)12793)) % (arr_6 [i_0])))));
            arr_9 [15ULL] [i_1] = ((/* implicit */int) ((_Bool) -2318996198686041062LL));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14320672743130805896ULL)) ? (arr_6 [i_0]) : (((/* implicit */int) var_4))));
            var_16 = (-(arr_10 [(unsigned short)5] [i_2] [i_2]));
            var_17 = ((/* implicit */unsigned char) arr_1 [i_2] [i_2]);
            var_18 |= (short)-20233;
        }
        var_19 = ((/* implicit */unsigned short) var_0);
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            var_20 += ((/* implicit */unsigned long long int) ((int) var_3));
            arr_18 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((int) arr_7 [i_3] [i_3] [i_3]));
        }
        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-20366)) ? (arr_6 [i_5 + 1]) : (arr_6 [i_5 - 1])));
            arr_21 [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
            arr_22 [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_5] [i_5] [i_5 - 1])) % (((/* implicit */int) arr_19 [i_5 - 1] [i_5] [i_5 - 1]))));
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_25 [i_3] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) arr_2 [i_5 - 1] [i_5 - 1])) ? (((((/* implicit */_Bool) arr_3 [i_6])) ? (6253607664993264294ULL) : (arr_1 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) arr_2 [i_5 + 1] [i_5 - 1])));
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                {
                    arr_28 [i_3] [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) arr_11 [i_3] [i_3]);
                    arr_29 [i_5] [i_5] = ((/* implicit */unsigned short) ((((_Bool) -2147483647)) ? (arr_7 [i_5 - 1] [i_5 + 1] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_19 [i_7] [i_5 + 1] [i_3])) : (((/* implicit */int) (unsigned char)146)))))));
                    var_22 = ((/* implicit */unsigned short) ((arr_7 [i_5 - 1] [i_5 + 1] [i_5 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7305)))));
                    arr_30 [i_3] [i_5] [i_3] [i_3] [i_7] = ((/* implicit */_Bool) var_9);
                    var_23 = ((/* implicit */unsigned short) arr_3 [i_6]);
                }
                for (short i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
                {
                    arr_33 [i_3] [i_3] [i_5 - 1] [i_5] [i_6] [i_8] = ((long long int) var_4);
                    /* LoopSeq 2 */
                    for (long long int i_9 = 3; i_9 < 13; i_9 += 3) /* same iter space */
                    {
                        arr_37 [i_3] [i_8] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned short)4607))));
                        arr_38 [i_5] [i_5] [i_5] [i_6] [i_5] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -776829772)) ? (((/* implicit */int) arr_16 [i_9 + 1] [i_5 + 1])) : (((/* implicit */int) arr_16 [i_9 - 2] [i_5 - 1]))));
                        arr_39 [i_8] [i_8] [i_5] [i_5] [i_9] = ((/* implicit */unsigned short) (-(arr_2 [i_5 - 1] [i_5 - 1])));
                    }
                    for (long long int i_10 = 3; i_10 < 13; i_10 += 3) /* same iter space */
                    {
                        arr_42 [i_3] [i_5] [i_5] [i_5 - 1] [7ULL] [i_8] [i_5] = ((/* implicit */unsigned long long int) 1268056935U);
                        arr_43 [i_3] [i_5] [i_6] [i_5] [3U] = ((/* implicit */unsigned short) arr_14 [i_3] [i_5]);
                    }
                }
            }
            for (long long int i_11 = 3; i_11 < 13; i_11 += 1) 
            {
                var_24 = ((/* implicit */long long int) ((_Bool) arr_45 [i_11] [i_5] [i_3]));
                var_25 = ((/* implicit */signed char) ((_Bool) arr_15 [i_3]));
                arr_46 [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (33554431LL) : (((/* implicit */long long int) 1139224126U)))));
            }
            for (int i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                var_26 = ((/* implicit */short) ((long long int) (+(var_9))));
                var_27 = ((/* implicit */unsigned char) var_10);
                arr_49 [i_3] [(unsigned char)7] [i_3] [i_5] = ((/* implicit */_Bool) ((int) (signed char)25));
                arr_50 [i_12] [i_12] [i_12] |= ((/* implicit */_Bool) ((short) 4126071330578745714ULL));
            }
            var_28 += ((/* implicit */short) ((unsigned int) 3251582939740682522LL));
        }
        for (short i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            arr_54 [i_3] [i_13] = ((/* implicit */unsigned short) (+(arr_47 [2ULL] [i_3] [i_3] [i_3])));
            arr_55 [8] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_10);
        }
        arr_56 [i_3] [i_3] |= ((/* implicit */unsigned int) arr_51 [i_3] [i_3]);
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 2; i_16 < 12; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 4) 
                        {
                            {
                                arr_69 [i_15] [i_16] [i_16] [i_16] [i_17] [i_17] [6ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_16 - 1] [i_16 + 2] [i_16 + 2])) ? (((var_1) ^ (584337612577104682ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15467541318638395618ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-1731270747523731438LL))))));
                                var_29 *= ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) (unsigned short)19636)))));
                                var_30 += ((/* implicit */int) ((unsigned short) var_8));
                                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)40883)) || (((/* implicit */_Bool) (short)30408))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 4; i_18 < 12; i_18 += 2) 
                    {
                        arr_72 [i_14] [i_15] [i_15] = ((/* implicit */_Bool) arr_68 [i_18] [(unsigned short)3] [i_3] [i_14] [i_3]);
                        arr_73 [i_3] [i_14] [i_15] [i_15] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_18] [i_15] [i_18] [i_18])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32750)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)6182))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (2199019061248ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60932)))))));
                    }
                    for (long long int i_19 = 0; i_19 < 14; i_19 += 4) 
                    {
                        var_32 -= ((/* implicit */long long int) ((short) arr_76 [(short)3] [i_14] [i_14] [i_14]));
                        arr_77 [i_3] [i_3] [i_15] [i_3] [i_15] [i_3] = ((/* implicit */unsigned short) (~(1U)));
                        var_33 = var_7;
                        var_34 = ((/* implicit */unsigned short) ((unsigned long long int) 4126071330578745714ULL));
                    }
                    arr_78 [i_15] [i_15] = ((/* implicit */unsigned short) ((short) arr_63 [i_3] [i_3] [i_3] [i_3]));
                    var_35 = ((/* implicit */long long int) (short)-22109);
                    var_36 = ((/* implicit */int) arr_24 [0] [i_15]);
                }
            } 
        } 
        arr_79 [i_3] = ((/* implicit */unsigned int) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    }
}
