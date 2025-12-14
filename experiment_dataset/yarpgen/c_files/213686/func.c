/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213686
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
    var_18 = ((/* implicit */unsigned short) var_15);
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((long long int) (+(((/* implicit */int) arr_1 [i_0 + 2]))))))));
        var_20 = ((/* implicit */unsigned short) var_9);
        var_21 += ((/* implicit */short) (~(((/* implicit */int) (short)-9036))));
    }
    for (signed char i_1 = 2; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((int) arr_5 [i_1])))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)11)) && (((((/* implicit */_Bool) -112309974)) && (((/* implicit */_Bool) var_5))))))) << ((((-(min((((/* implicit */int) var_17)), (0))))) - (8)))));
                }
            } 
        } 
    }
    for (signed char i_4 = 2; i_4 < 19; i_4 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)55)) & (((/* implicit */int) var_3)))) | (((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_4])) || ((_Bool)1)))))) : ((~(((/* implicit */int) arr_9 [i_4 - 1]))))));
        /* LoopSeq 4 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_16 [i_5] [i_4] [i_4] = (+(((/* implicit */int) var_3)));
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (((unsigned char) arr_4 [i_4]))))) & ((+(((/* implicit */int) (short)-9012))))));
            /* LoopSeq 3 */
            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                var_25 -= ((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */signed char) ((var_15) < (arr_0 [i_6] [i_4])))), (max((arr_19 [i_4] [i_5] [i_6]), (((/* implicit */signed char) (_Bool)1))))))), (((((/* implicit */int) arr_12 [i_6])) & (((/* implicit */int) (short)-9012))))));
                arr_21 [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((arr_4 [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))), (max((((/* implicit */unsigned long long int) max(((signed char)-112), (var_17)))), (min((var_14), (((/* implicit */unsigned long long int) var_17))))))));
            }
            for (unsigned char i_7 = 4; i_7 < 19; i_7 += 3) 
            {
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((arr_18 [(short)14]) && (((/* implicit */_Bool) (-(arr_15 [(short)10])))))))));
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) ((int) 18115130920693765776ULL))))))));
                arr_24 [i_4] [i_5] [i_4] [i_7] = ((/* implicit */signed char) ((long long int) (~((~(((/* implicit */int) var_17)))))));
            }
            for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((arr_18 [i_8]) && (((/* implicit */_Bool) (short)14759)))) ? ((~(331613153015785839ULL))) : (((arr_18 [i_8]) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                var_29 -= ((/* implicit */unsigned int) ((long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (short)3580)))));
                var_30 = ((((((/* implicit */_Bool) arr_14 [i_5] [i_4 + 1])) ? ((-(((/* implicit */int) (short)-31683)))) : (((((/* implicit */int) (unsigned char)112)) / (((/* implicit */int) var_11)))))) >= (((((((/* implicit */_Bool) (short)9029)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_13 [i_4] [i_5])))) * (((/* implicit */int) ((_Bool) var_16))))));
                arr_27 [i_4] = ((/* implicit */_Bool) arr_11 [i_4]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_9 = 3; i_9 < 17; i_9 += 1) 
                {
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) var_6))));
                    arr_30 [i_4] = ((/* implicit */signed char) ((long long int) var_3));
                    var_32 = ((/* implicit */unsigned short) (_Bool)1);
                }
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 1; i_11 < 19; i_11 += 2) 
                    {
                        arr_36 [i_4] [i_5] [i_10] [i_4] [i_11] [i_8] [i_8] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-30528)))))));
                        var_33 = ((/* implicit */long long int) var_11);
                        var_34 += ((/* implicit */unsigned int) (+(((arr_28 [i_4 + 2]) ^ (((/* implicit */int) var_16))))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 4) /* same iter space */
                    {
                        arr_40 [i_4] [i_4] [i_8] [i_10] [i_12] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : ((-(-642854058))))));
                        arr_41 [i_4] [i_5] [i_8] [i_4] [i_12] = ((/* implicit */int) ((5763883165278592412ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)103)) - (((/* implicit */int) var_16)))))));
                        arr_46 [i_8] [i_5] [i_8] [i_4] [i_4] [i_8] [i_4] |= ((/* implicit */_Bool) arr_20 [i_8] [i_8]);
                    }
                    var_36 = ((/* implicit */int) ((_Bool) (-(((arr_15 [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                }
                /* vectorizable */
                for (int i_14 = 1; i_14 < 20; i_14 += 2) 
                {
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 466306005U)) ? (arr_44 [i_4] [i_4] [i_4] [i_4 - 2] [i_14 + 1] [i_14] [i_14]) : (arr_44 [i_4] [i_4] [i_4] [i_4 + 1] [i_14 + 1] [i_14] [i_14])));
                    /* LoopSeq 4 */
                    for (short i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        var_38 = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
                        var_39 = ((/* implicit */_Bool) ((unsigned char) ((int) var_1)));
                        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (+(arr_0 [i_4 - 2] [i_4 - 2]))))));
                    }
                    for (long long int i_16 = 0; i_16 < 21; i_16 += 4) 
                    {
                        var_41 = ((/* implicit */_Bool) max((var_41), ((_Bool)0)));
                        arr_56 [i_4] = ((/* implicit */unsigned long long int) var_5);
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_42 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_25 [i_4] [i_4] [i_4] [i_14 + 1])) * (((var_6) * (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                        var_43 |= ((/* implicit */signed char) ((_Bool) (short)-19963));
                        var_44 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (22ULL)));
                        arr_59 [i_4] [i_5] [i_8] [i_14] [i_4] = ((/* implicit */int) ((((/* implicit */int) arr_18 [i_4])) < (((/* implicit */int) arr_45 [i_4 + 2] [i_4 - 1] [i_4] [i_4] [i_14 + 1]))));
                    }
                    for (int i_18 = 0; i_18 < 21; i_18 += 1) 
                    {
                        var_45 = ((/* implicit */int) min((var_45), (((((/* implicit */int) var_7)) / (arr_28 [i_14 + 1])))));
                        var_46 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_54 [i_14] [i_14] [i_14] [i_14] [i_14 - 1]))));
                    }
                }
            }
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            arr_66 [i_4] [i_19] = ((/* implicit */unsigned int) (+(max((1580666312678753717ULL), (11471964136197673677ULL)))));
            arr_67 [i_4] [i_19] [i_4] = arr_43 [i_4] [i_4] [i_19] [i_19] [i_19] [i_19] [i_19];
        }
        for (int i_20 = 0; i_20 < 21; i_20 += 1) /* same iter space */
        {
            arr_72 [i_4] = ((/* implicit */short) (+(((int) (_Bool)1))));
            var_47 = ((/* implicit */unsigned int) 1580666312678753721ULL);
            arr_73 [i_4] [i_4] [i_4] = ((/* implicit */long long int) (((+(((/* implicit */int) var_8)))) >> (((/* implicit */int) (_Bool)1))));
            arr_74 [i_4] [i_20] = ((/* implicit */unsigned int) ((((0ULL) == (((/* implicit */unsigned long long int) arr_25 [i_4 + 2] [i_4] [i_4 - 2] [i_4 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_9)))))) : (((-12LL) + (((/* implicit */long long int) ((/* implicit */int) (short)6)))))));
        }
        for (int i_21 = 0; i_21 < 21; i_21 += 1) /* same iter space */
        {
            var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) (~(((int) ((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
            arr_77 [i_4] [i_4] [i_4] = var_12;
            var_49 = ((/* implicit */unsigned short) (((+(((unsigned long long int) (signed char)19)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)103)))))))));
        }
        /* LoopNest 2 */
        for (signed char i_22 = 1; i_22 < 19; i_22 += 2) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                {
                    arr_83 [i_4] [i_4] [i_23] = ((/* implicit */short) var_4);
                    arr_84 [i_4] [i_23] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) 0U)) % (6ULL))), (((((/* implicit */_Bool) var_4)) ? (arr_32 [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        var_50 |= ((/* implicit */unsigned short) (!((!((_Bool)0)))));
    }
    for (unsigned short i_24 = 1; i_24 < 10; i_24 += 1) 
    {
        var_51 *= ((/* implicit */_Bool) arr_57 [i_24] [i_24] [i_24]);
        /* LoopSeq 2 */
        for (short i_25 = 0; i_25 < 13; i_25 += 2) 
        {
            var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) arr_81 [i_24 - 1] [i_25] [i_24] [i_24]))));
            var_53 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_19 [i_24] [i_25] [i_25]))) ? (((var_6) ^ (arr_58 [i_24] [i_25]))) : (max((arr_39 [i_24] [i_24] [i_25]), (((/* implicit */long long int) var_11))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_25] [i_25])), (var_5))))))) : (((((/* implicit */int) var_8)) & (((/* implicit */int) var_2))))));
            var_54 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (_Bool)1)), (4294967284U))), (((/* implicit */unsigned int) (_Bool)1))));
            arr_91 [i_24] [i_25] = ((/* implicit */unsigned long long int) ((signed char) var_0));
        }
        for (signed char i_26 = 0; i_26 < 13; i_26 += 1) 
        {
            var_55 ^= ((/* implicit */short) var_12);
            /* LoopSeq 1 */
            for (unsigned int i_27 = 2; i_27 < 9; i_27 += 1) 
            {
                var_56 = ((/* implicit */unsigned long long int) max((var_56), ((((~((~(2973084568721061958ULL))))) ^ (((/* implicit */unsigned long long int) ((int) arr_62 [i_24] [i_26] [i_27] [i_26] [i_26] [i_24] [i_27])))))));
                var_57 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_8)) >= (var_5))))));
            }
        }
        /* LoopNest 2 */
        for (short i_28 = 0; i_28 < 13; i_28 += 3) 
        {
            for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
            {
                {
                    arr_103 [i_24] [i_28] [i_24] = ((/* implicit */unsigned int) var_1);
                    var_58 += ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_30 = 0; i_30 < 13; i_30 += 3) 
                    {
                        var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) (+(((/* implicit */int) (_Bool)1)))))));
                        var_60 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned short)25643))) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_9 [i_24]))));
                        var_61 = ((/* implicit */long long int) min((var_61), (((/* implicit */long long int) ((((/* implicit */int) (signed char)100)) + (((/* implicit */int) arr_3 [i_24 + 1])))))));
                        arr_106 [i_29] [i_24] [i_29] [i_29] [i_29] [i_29] = ((/* implicit */_Bool) ((-3LL) / ((+(arr_37 [i_24] [i_28] [i_28] [i_29] [i_29] [i_30] [i_30])))));
                    }
                    var_62 += (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_24])) * (((/* implicit */int) var_9))))) == (arr_33 [i_29 + 1] [i_24 + 3])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_31 = 2; i_31 < 9; i_31 += 2) 
        {
            for (short i_32 = 2; i_32 < 12; i_32 += 3) 
            {
                {
                    arr_111 [i_24] [i_31] [i_24] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (short)9011)) : (((/* implicit */int) (signed char)33))));
                    var_63 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) >= ((~(max((arr_79 [i_24] [i_31] [i_31]), (((/* implicit */unsigned int) (signed char)-22))))))));
                }
            } 
        } 
    }
}
