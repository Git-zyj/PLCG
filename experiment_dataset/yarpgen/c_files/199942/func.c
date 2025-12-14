/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199942
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (+(((arr_1 [i_0] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) (short)-16643)))))));
        var_17 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) ((arr_1 [i_0] [i_0]) < (((/* implicit */long long int) 361244229U)))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned char) var_15)))));
                arr_8 [i_1] = ((/* implicit */int) arr_0 [i_1]);
                var_19 ^= ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (var_10) : (6112826045232381910LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_1])))));
                var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_2] [i_2] [i_1] [i_0])))) <= (var_0));
            }
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))));
        }
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))));
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) / (arr_1 [i_3] [i_0]))))));
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                arr_14 [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_3]) : (arr_10 [i_0] [i_0])));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)2206))))) ? (((((/* implicit */int) arr_3 [i_0] [i_0])) | (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) (short)-32754))))));
            }
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
            {
                arr_17 [19] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) arr_13 [i_5] [i_5]));
                var_25 = ((/* implicit */signed char) var_10);
                arr_18 [i_0] [i_0] [2LL] = ((/* implicit */unsigned short) var_5);
            }
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_9 [i_0])))) ? (((((/* implicit */_Bool) (short)2207)) ? (6043574711479201686ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)-2206)))))))))));
                arr_21 [14LL] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_10 [i_0] [(short)12])) % (8411900182852781840ULL)));
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_25 [i_7] [i_6] [i_3] [i_0] = ((/* implicit */_Bool) ((((arr_1 [(unsigned short)19] [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-564))) : (-3193818508449862963LL)));
                    arr_26 [i_0] [i_0] [i_3] [i_0] [i_7] [i_7] = arr_3 [i_0] [i_0];
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        var_27 ^= ((/* implicit */short) ((arr_23 [(unsigned short)10] [22LL] [i_6] [i_6] [i_6] [i_6]) | (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] [24LL])))));
                        var_28 ^= ((/* implicit */short) ((arr_19 [i_8] [i_7] [i_6] [i_3]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)2206))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2206))) - (3090185662173952545ULL)))));
                    }
                    for (long long int i_9 = 2; i_9 < 24; i_9 += 1) 
                    {
                        var_29 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_9 + 1]))));
                        arr_31 [i_0] [i_0] [i_0] [i_7] [i_9] [i_6] [i_6] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                        var_30 = ((/* implicit */signed char) 3933723058U);
                    }
                    var_31 = ((/* implicit */long long int) max((var_31), (var_13)));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 3; i_11 < 23; i_11 += 1) 
                    {
                        arr_36 [i_0] [i_0] [i_0] [(unsigned char)2] [i_10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) (_Bool)1))));
                        var_32 = ((((((/* implicit */_Bool) arr_24 [i_11] [(unsigned char)7] [i_0] [i_3] [i_0] [i_0])) ? (arr_10 [i_11] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_11] [i_11] [i_10] [i_3] [i_3] [i_3] [i_0]))))) + (((/* implicit */long long int) ((/* implicit */int) var_8))));
                    }
                    var_33 = ((/* implicit */unsigned char) var_16);
                    var_34 *= ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                    var_35 += ((/* implicit */unsigned long long int) ((_Bool) arr_23 [i_0] [(short)19] [i_0] [i_0] [i_0] [i_0]));
                }
                for (signed char i_12 = 2; i_12 < 21; i_12 += 2) 
                {
                    var_36 = ((/* implicit */long long int) (-(((/* implicit */int) (short)32767))));
                    arr_41 [i_0] [19] [i_0] [i_0] = ((/* implicit */unsigned short) (short)-8192);
                }
            }
            var_37 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)-1756)))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_3])))));
            var_38 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_33 [i_0] [i_3] [i_3]))))));
        }
        for (int i_13 = 3; i_13 < 22; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                for (unsigned char i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    {
                        arr_52 [i_15] [i_13] [i_15] [i_15] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (signed char)46)) & (((/* implicit */int) (short)15360)))));
                        var_39 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-22748))));
                        arr_53 [i_0] [i_13] [i_14] [i_15] [1ULL] [i_14] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_11 [i_13] [i_13]) ? (((/* implicit */int) arr_46 [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_13 - 3]))))) ? (((/* implicit */int) (unsigned short)56257)) : ((~(((/* implicit */int) (short)-2201))))));
                        var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                        var_41 = ((/* implicit */_Bool) 11598815858527860571ULL);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_16 = 3; i_16 < 24; i_16 += 1) 
            {
                for (short i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    for (short i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        {
                            arr_60 [(short)21] [(short)5] [i_16] [i_17] [i_17] [i_18] = 8881933928330173743ULL;
                            arr_61 [i_0] [i_0] [i_0] [i_17] = ((/* implicit */signed char) (((+(((/* implicit */int) var_2)))) + (((/* implicit */int) var_9))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_19 = 1; i_19 < 23; i_19 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_20 = 1; i_20 < 21; i_20 += 1) 
                {
                    arr_67 [(short)19] [i_13] [i_20] [i_20 + 3] = ((/* implicit */short) var_7);
                    arr_68 [i_0] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_13 + 1])) : ((-(((/* implicit */int) var_8))))));
                }
                for (signed char i_21 = 0; i_21 < 25; i_21 += 2) 
                {
                    arr_71 [i_0] [(unsigned short)15] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)8085)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_19])))))));
                    var_42 = ((/* implicit */_Bool) ((arr_6 [i_19] [i_19 + 2] [i_19] [i_19]) ? (arr_47 [i_19 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_19] [i_19 + 1] [i_19 - 1] [i_19])))));
                    var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_66 [i_0] [i_19] [i_19] [i_0] [(short)20]) % (var_15)))) ? (((/* implicit */long long int) (((_Bool)1) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((-1LL) + (9223372036854775807LL))) >> (((var_15) - (2754329673U)))))));
                    arr_72 [i_0] [i_0] [i_13 - 2] [i_13 - 2] [i_21] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_0] [i_13 - 1] [i_19] [i_21] [(short)12])) + (((/* implicit */int) (unsigned char)165))))) ? (var_10) : (7570563423887667942LL)));
                }
                arr_73 [i_0] [(short)0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)5);
                var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) arr_45 [i_13 - 3] [i_19 + 2]))));
                arr_74 [i_19 - 1] [i_13 - 2] [i_0] = 1LL;
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_22 = 2; i_22 < 17; i_22 += 4) 
    {
        var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-12)))))));
        var_46 = 72057594037927935LL;
        var_47 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
    }
    for (long long int i_23 = 0; i_23 < 10; i_23 += 2) 
    {
        arr_80 [i_23] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1751))) != (max((arr_51 [i_23]), (((/* implicit */unsigned long long int) 1740422403U))))));
        arr_81 [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) (short)27601)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((144115188075855871LL) == (var_14))))) % ((~(4646324538018028183ULL))))) : (((/* implicit */unsigned long long int) (-(var_12))))));
    }
    var_48 = ((/* implicit */unsigned long long int) var_6);
    var_49 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)-69)), (549218942976LL)));
    var_50 = ((((var_14) + (9223372036854775807LL))) >> (((unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))));
}
