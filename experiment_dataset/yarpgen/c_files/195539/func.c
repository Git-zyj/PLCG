/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195539
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)127);
        var_10 = ((/* implicit */int) (-(arr_1 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */long long int) ((arr_6 [i_1] [i_1]) | (2235647475U)))) : (var_0)))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9738123022622095351ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))) : (arr_6 [i_1] [i_1])))), (((((/* implicit */_Bool) 2235647483U)) ? (var_5) : (((/* implicit */unsigned long long int) 2118241919953061713LL))))))));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_11 += ((/* implicit */unsigned int) (_Bool)1);
            /* LoopSeq 3 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                arr_14 [i_1] = ((/* implicit */short) max((arr_1 [i_1]), (max((max((((/* implicit */unsigned long long int) var_0)), (arr_1 [i_1]))), (((/* implicit */unsigned long long int) arr_4 [i_2]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_20 [i_2] [i_4] [i_1] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
                            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 2235647460U))))), (((((/* implicit */_Bool) arr_9 [i_5] [i_2])) ? (12208660667046338147ULL) : (((/* implicit */unsigned long long int) arr_8 [i_5] [i_5]))))))) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) 0LL))))));
                            var_13 = ((/* implicit */unsigned long long int) 4294967295U);
                        }
                    } 
                } 
                var_14 += ((/* implicit */signed char) var_0);
            }
            for (short i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_1] [i_2] [i_6])), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1]))))), (16U))))))));
                var_16 = (short)31586;
                var_17 += ((/* implicit */unsigned char) 947026909836335120ULL);
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        {
                            arr_29 [i_1] [i_1] [i_2] [i_7] [i_1] [i_1] = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))))), (max((((/* implicit */unsigned long long int) ((unsigned int) arr_21 [i_1] [i_1] [i_1] [i_1]))), (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (arr_1 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1]))))))));
                            arr_30 [i_1] [i_2] [i_2] [i_6] [i_1] [i_8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_26 [i_1] [i_2] [i_6] [i_7] [i_8] [i_7]), (arr_26 [i_1] [i_2] [i_6] [i_7] [i_8] [i_8]))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? ((+(4294967287U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (short)16383)))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                arr_33 [i_1] [i_1] [i_9] [i_9] = ((/* implicit */unsigned long long int) var_2);
                var_19 = ((/* implicit */_Bool) 16U);
            }
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            arr_36 [i_1] [i_1] [12LL] &= ((/* implicit */int) var_7);
            arr_37 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (_Bool)0);
            arr_38 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_7);
            var_20 &= ((/* implicit */unsigned int) 288230376151678976ULL);
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((unsigned int) (short)31614));
            arr_41 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((-(arr_1 [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((137438953471LL) <= (((/* implicit */long long int) var_7))))))));
        }
    }
    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
    {
        arr_45 [i_12] [i_12] = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) -2147483639)) && (((/* implicit */_Bool) (unsigned char)146)))) ? (((/* implicit */int) ((var_7) == (var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7410787772565156057ULL))))))), (((/* implicit */int) ((_Bool) var_6)))));
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            for (short i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                {
                    arr_50 [i_14] = ((/* implicit */long long int) 1795899440U);
                    var_22 = ((/* implicit */long long int) var_2);
                    arr_51 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_14] [i_14] [i_12]), (arr_10 [i_12] [i_14] [i_14]))))) : (((unsigned long long int) max((4601611037162760292LL), (((/* implicit */long long int) (short)31579)))))));
                    arr_52 [i_14] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_32 [i_12] [i_14])) ? (((/* implicit */unsigned long long int) ((int) (short)-19155))) : (((((/* implicit */_Bool) arr_47 [i_12] [i_13] [i_14])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_15 = 0; i_15 < 14; i_15 += 4) 
    {
        for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    arr_61 [i_15] [i_15] [i_15] = ((((/* implicit */_Bool) max((5888587680054260549ULL), (arr_40 [i_15])))) ? ((((!(((/* implicit */_Bool) 553072368U)))) ? (min((((/* implicit */unsigned long long int) (short)31573)), (arr_18 [i_15] [i_15] [i_15] [i_15] [i_16] [i_17] [i_15]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154))))) : ((-(((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) 1511064172U)))))));
                    arr_62 [i_15] [i_16] [i_16] [i_17] = ((/* implicit */short) max((((947026909836335094ULL) - (((/* implicit */unsigned long long int) 1711272304U)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_27 [i_15] [i_15] [i_16] [i_16] [i_15] [i_17] [i_17]))))))));
                }
                for (signed char i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    var_23 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 837991637U)) & (137438953471ULL)));
                    arr_65 [i_15] [i_15] [i_18] &= ((/* implicit */short) var_1);
                }
                /* LoopSeq 3 */
                for (long long int i_19 = 0; i_19 < 14; i_19 += 2) /* same iter space */
                {
                    var_24 -= ((/* implicit */signed char) var_6);
                    var_25 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) (unsigned char)183)), (18158513697557872664ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_15])) ? (-667412869438030291LL) : (arr_53 [i_19]))))));
                    var_26 ^= ((/* implicit */short) var_6);
                }
                for (long long int i_20 = 0; i_20 < 14; i_20 += 2) /* same iter space */
                {
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_24 [i_15] [i_16] [i_16] [i_20])))) + (9738123022622095351ULL)))) ? (((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (signed char)67)))) ? (min((var_8), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32767))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)4), (((/* implicit */unsigned char) (_Bool)1)))))));
                    arr_71 [i_15] [i_16] [i_20] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_63 [i_15] [i_16] [i_16] [i_15])) ? (arr_63 [i_15] [i_15] [i_16] [i_16]) : (arr_63 [i_15] [i_16] [i_16] [i_16]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_63 [i_15] [i_16] [i_20] [i_20])))));
                }
                for (short i_21 = 0; i_21 < 14; i_21 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_22 = 0; i_22 < 14; i_22 += 4) 
                    {
                        for (unsigned int i_23 = 0; i_23 < 14; i_23 += 1) 
                        {
                            {
                                arr_81 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) arr_4 [i_21]);
                                arr_82 [i_21] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (arr_80 [i_15] [i_16] [i_16] [i_16] [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 14424264684214118623ULL)))))))) | (max((((((/* implicit */unsigned long long int) arr_56 [i_15] [i_15] [i_15])) + (var_8))), (((/* implicit */unsigned long long int) arr_17 [i_15] [i_22] [i_22] [i_22]))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) 1221176635U))));
                }
            }
        } 
    } 
    var_29 = max((((((/* implicit */_Bool) 0U)) ? (896607821U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8191))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)127)) | (((/* implicit */int) (short)32762))))) : (2U))));
    var_30 = ((/* implicit */int) (-(((((/* implicit */_Bool) (~(17499717163873216496ULL)))) ? (667412869438030296LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (1202261521U) : (3741894920U))))))));
}
