/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220779
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-7)) * (((/* implicit */int) (signed char)9))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] = ((((/* implicit */_Bool) -4658554973969219932LL)) ? (arr_5 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8157))));
                        arr_11 [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-8165))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)12))));
                        var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_1 [i_1])))) ? ((-(((/* implicit */int) (signed char)6)))) : ((~(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]))))));
                    }
                } 
            } 
        } 
        var_18 -= ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]);
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
    }
    var_20 ^= (~(max((((/* implicit */int) (!(var_10)))), (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (unsigned short)65512)))))));
    var_21 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned int) (_Bool)0);
        arr_16 [i_4] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
    }
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_5])) ? (9223372036854775801LL) : (((/* implicit */long long int) 1620847542))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_22 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-10)) || (((/* implicit */_Bool) arr_1 [i_6]))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)41))))) : (((/* implicit */int) ((-6946117480820846129LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_26 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_7])) || (((/* implicit */_Bool) arr_5 [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48974)) && (((/* implicit */_Bool) (short)-22391)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((arr_8 [i_5] [i_5] [i_7] [i_5]), (((/* implicit */unsigned long long int) (signed char)7))))) || (((/* implicit */_Bool) (signed char)-12))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)248)) || (((/* implicit */_Bool) 4294967292U)))) && (((/* implicit */_Bool) (unsigned char)55)))))));
            var_23 ^= ((/* implicit */unsigned short) max((max((((/* implicit */int) (unsigned char)8)), (((((/* implicit */int) arr_6 [i_5] [i_7] [i_7] [i_7])) ^ (((/* implicit */int) (unsigned char)20)))))), (((((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_7] [i_5])) ? (((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_2 [i_5])))) : (((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)12))))))));
        }
    }
    for (signed char i_8 = 1; i_8 < 12; i_8 += 4) 
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min(((~(17448804396800480506ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)14))) : (arr_12 [(signed char)2]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)14)) * (0)))) : (min((((arr_4 [i_8 + 2] [i_8]) & (arr_4 [i_8 + 1] [i_8 - 1]))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_21 [(unsigned short)7] [2U])) : (((/* implicit */int) (unsigned short)22)))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            arr_31 [i_8 + 1] [i_8 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(-959540875723958288LL))), (((/* implicit */long long int) min(((signed char)-69), (arr_27 [i_9])))))))));
            var_25 = ((/* implicit */unsigned int) max((min((((/* implicit */int) (signed char)-12)), (((((/* implicit */int) arr_6 [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_8])) << (((-959540875723958264LL) + (959540875723958287LL))))))), (min((((((/* implicit */_Bool) arr_29 [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)46)) : (arr_20 [(unsigned short)12] [i_9]))), (((((/* implicit */int) (signed char)-14)) % (((/* implicit */int) (short)-8496))))))));
        }
        /* vectorizable */
        for (signed char i_10 = 1; i_10 < 13; i_10 += 4) 
        {
            arr_36 [i_10] [i_10] [i_8 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-78))))) >= (((((/* implicit */_Bool) (unsigned short)65512)) ? (5788430774653504993ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23)))))));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 1; i_11 < 13; i_11 += 3) 
            {
                arr_39 [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_1 [i_10])) / (18446744073709551594ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)27)) / (((/* implicit */int) (short)-32767)))))));
                arr_40 [i_8 + 2] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_11])) ? (((/* implicit */int) (short)-30633)) : (((/* implicit */int) (short)-30637))))) ? (((/* implicit */int) (short)30635)) : (arr_34 [i_8] [i_8] [9LL])));
                /* LoopNest 2 */
                for (long long int i_12 = 3; i_12 < 13; i_12 += 4) 
                {
                    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_32 [i_10] [i_10]))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-30644)) * (((/* implicit */int) arr_24 [i_10 - 1] [i_11 + 1]))));
                            arr_45 [i_10] [i_10] [i_10] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) 26ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) : (17ULL)));
                            arr_46 [i_10] [i_12] [i_11] [i_11] [i_10 + 1] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_10 - 1] [i_10] [i_11 - 1])) ? (arr_9 [i_10] [(unsigned char)13] [(unsigned char)13] [(signed char)8] [i_10 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) <= (18446744073709551613ULL)))))));
                            arr_47 [i_8] [i_8 - 1] [i_10] [i_8] [i_8 + 1] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_10]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_52 [i_15] [i_10] [i_8] [i_10] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32767)) | (((/* implicit */int) (_Bool)1))));
                            arr_53 [i_8 + 1] [i_10] [i_8 + 1] [i_10] [i_11] [i_10] [i_8 + 1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_8] [i_10] [i_10 + 1] [i_11 + 1]))) != (arr_1 [i_11 + 1])));
                            arr_54 [i_8] [i_8] [i_11 + 1] [i_10] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_37 [i_15] [i_8 - 1] [i_15]))));
                        }
                    } 
                } 
            }
            arr_55 [i_10] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_8])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_10 + 1] [i_8] [i_8 + 2] [i_8 + 2])))))));
            arr_56 [i_8] [i_10] [i_10] = ((/* implicit */_Bool) 15ULL);
        }
        /* vectorizable */
        for (signed char i_16 = 0; i_16 < 14; i_16 += 1) 
        {
            arr_60 [i_16] [i_16] = ((/* implicit */unsigned int) (unsigned short)44053);
            arr_61 [i_16] [i_16] [i_16] = ((((/* implicit */int) arr_38 [i_8] [i_8 - 1] [i_8])) - (((/* implicit */int) arr_38 [i_8 + 1] [i_8 - 1] [i_8 + 1])));
            arr_62 [i_16] [i_16] = ((/* implicit */unsigned char) (_Bool)1);
            var_28 += ((/* implicit */unsigned int) (_Bool)1);
            /* LoopNest 2 */
            for (unsigned char i_17 = 3; i_17 < 11; i_17 += 3) 
            {
                for (int i_18 = 1; i_18 < 12; i_18 += 3) 
                {
                    {
                        arr_68 [i_8] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_67 [i_17 + 1] [i_16])) << (((/* implicit */int) (signed char)16))));
                        var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (signed char)22)))) > (((/* implicit */int) (unsigned short)8))));
                    }
                } 
            } 
        }
    }
}
