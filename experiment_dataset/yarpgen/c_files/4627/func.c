/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4627
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 6; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_11);
                    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15849)) ? (var_16) : (((/* implicit */int) (short)-15850))))) ? (((((/* implicit */_Bool) (unsigned short)30489)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)15850)))) : (((/* implicit */int) max((((/* implicit */short) var_12)), ((short)-15849))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_20 = (~(((/* implicit */int) (unsigned short)17843)));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) -5580601584161075100LL)) ? (((/* implicit */int) (short)-15849)) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)15849)) : (((/* implicit */int) (short)-15850))))))))));
                            }
                        } 
                    } 
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (short)-8192);
                    var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_9), (((/* implicit */int) (_Bool)1))))), (65520U)))) ? (((/* implicit */long long int) max((var_16), (((/* implicit */int) min(((unsigned short)39185), ((unsigned short)35046))))))) : (((((/* implicit */_Bool) (unsigned short)40747)) ? (var_15) : (var_7)))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) min((((/* implicit */long long int) (short)15849)), (3213051973086824226LL)));
        var_24 = ((/* implicit */int) (unsigned short)64622);
        arr_13 [i_0] = ((/* implicit */int) var_18);
    }
    /* LoopSeq 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_16 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)124)) ? ((~(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (short)(-32767 - 1)))));
        var_25 -= ((/* implicit */unsigned short) -1034572433);
        arr_17 [4U] &= ((/* implicit */unsigned short) (signed char)0);
    }
    /* vectorizable */
    for (short i_6 = 1; i_6 < 10; i_6 += 4) 
    {
        arr_21 [(unsigned short)4] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (8071370671510019100ULL) : (((/* implicit */unsigned long long int) var_9))));
        var_26 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_12))))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (-(((/* implicit */int) (short)-30800)))))));
    }
    for (short i_7 = 3; i_7 < 11; i_7 += 3) 
    {
        var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (7002999911345857676LL) : (((/* implicit */long long int) ((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1))))))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (((!(((/* implicit */_Bool) var_18)))) ? (max((14400808595576585041ULL), (((/* implicit */unsigned long long int) (short)32767)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)17843))))))))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) (short)15849))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (0ULL)))))) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1054899922)) ? (((/* implicit */long long int) 1240233650U)) : (var_0)))) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (unsigned short)12930))))))))));
                                arr_35 [i_7] [i_7] [i_7] [i_7 - 1] [i_7] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2135667163196425509LL)) ? (var_14) : (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59158)) ? (((/* implicit */int) (short)15849)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 1860270243405505462ULL)) ? (10375373402199532515ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))), (var_8)));
                            }
                        } 
                    } 
                    arr_36 [i_7] [i_7] [i_9 + 1] [i_7] = ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) (short)-32767)))) ? (((((/* implicit */_Bool) var_7)) ? (var_14) : (var_6))) : (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) min((var_9), (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_12 = 2; i_12 < 8; i_12 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            var_31 ^= (short)-32767;
            arr_42 [(short)1] [i_13] [i_13] = ((/* implicit */_Bool) (unsigned char)249);
        }
        for (short i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            var_32 = (~(8589934584LL));
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
            {
                var_33 ^= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (3655922197U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7285))) : (var_7))));
                arr_47 [i_12 + 1] [i_14] [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)15136)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)15849)))));
            }
        }
        for (short i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                for (long long int i_18 = 0; i_18 < 12; i_18 += 3) 
                {
                    {
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)0)))))))));
                        /* LoopSeq 2 */
                        for (signed char i_19 = 1; i_19 < 9; i_19 += 3) 
                        {
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8589934584LL)) ? (var_15) : (var_6)));
                            var_36 *= ((((/* implicit */_Bool) 3231283602068033600ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_15));
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9032873534863250970LL)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5600168848734870288LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                        }
                        for (long long int i_20 = 4; i_20 < 11; i_20 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned long long int) (+(9032873534863250970LL)));
                            arr_60 [0U] [0U] [i_17] [i_16] [0ULL] = ((/* implicit */long long int) 8071370671510019100ULL);
                            var_39 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0));
                            var_40 -= ((/* implicit */signed char) (((!((_Bool)1))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_0))));
                            var_41 = ((/* implicit */_Bool) (-(9032873534863250970LL)));
                        }
                        var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) var_8))));
                    }
                } 
            } 
            var_43 -= ((/* implicit */_Bool) var_11);
            var_44 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)46745))));
            var_45 = ((/* implicit */long long int) (+(-1491670681)));
        }
        for (short i_21 = 1; i_21 < 10; i_21 += 4) 
        {
            arr_64 [i_12] [i_21] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-18244))));
            arr_65 [i_12] [i_21 + 2] = ((/* implicit */unsigned long long int) 5600168848734870288LL);
            arr_66 [i_12] = ((/* implicit */signed char) var_17);
            arr_67 [i_12] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
            var_46 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)45974)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_18))))));
        }
        arr_68 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) -33554432)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))) : (18446744073709551615ULL)));
        arr_69 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (147262798340687935LL)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)17116)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (unsigned short i_22 = 3; i_22 < 10; i_22 += 3) 
        {
            var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (1ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4053343058U)) ? (8191) : (((/* implicit */int) (short)16430))))) : (0ULL)));
            arr_73 [i_12 - 2] = ((((/* implicit */_Bool) -1652826670375525943LL)) ? (((/* implicit */int) (short)-1821)) : (((/* implicit */int) (short)(-32767 - 1))));
            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-16431)) ? (0ULL) : (((/* implicit */unsigned long long int) var_7))));
            var_49 = ((/* implicit */long long int) var_12);
        }
    }
}
