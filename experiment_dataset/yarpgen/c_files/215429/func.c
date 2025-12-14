/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215429
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((17138143602308286834ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0)))))))) ? ((-(arr_0 [(_Bool)1] [i_1]))) : (((/* implicit */unsigned long long int) (+(-8110454898097939051LL))))));
                var_13 = ((/* implicit */_Bool) ((unsigned short) ((arr_0 [i_1 + 2] [i_0 + 2]) ^ (((/* implicit */unsigned long long int) (~(var_0)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        var_14 *= ((/* implicit */short) (-(arr_3 [i_2])));
        arr_9 [i_2 - 1] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
        arr_10 [i_2 - 3] [i_2 - 3] = ((/* implicit */unsigned char) ((max(((-(1094083205))), (((/* implicit */int) ((unsigned short) arr_1 [i_2]))))) >> (min((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) var_7))))), (min((var_11), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        var_15 ^= (~(max((arr_11 [i_3]), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-30867))))))));
        var_16 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) max((3509614486U), ((~(arr_11 [i_3])))))), ((((+(-8110454898097939051LL))) & (max((((/* implicit */long long int) arr_12 [i_3] [i_3])), ((-9223372036854775807LL - 1LL))))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 20; i_4 += 4) 
        {
            for (unsigned int i_5 = 3; i_5 < 20; i_5 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((max((((/* implicit */long long int) (~(((/* implicit */int) arr_13 [(_Bool)1] [i_4 + 2] [(_Bool)1]))))), (min((((/* implicit */long long int) var_9)), (8110454898097939038LL))))), (((/* implicit */long long int) ((short) ((arr_16 [i_5 + 1] [i_5 + 1] [i_5 - 2]) << (((((/* implicit */int) (unsigned char)125)) - (98))))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 2; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) (~(min((max((((/* implicit */unsigned int) arr_15 [i_4 + 2] [i_4 - 1] [i_5 - 3])), (arr_17 [i_6] [i_4]))), (((/* implicit */unsigned int) ((var_0) < (var_5))))))));
                        var_19 += ((/* implicit */unsigned long long int) arr_17 [i_4] [i_4 - 2]);
                        var_20 = ((/* implicit */int) ((((max((0LL), (((/* implicit */long long int) arr_17 [i_6] [i_4])))) + (((/* implicit */long long int) ((int) arr_18 [i_6] [i_6] [6U] [i_6]))))) >> (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 13550479292086805005ULL)))))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 19; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 3; i_8 < 19; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)113)), (arr_14 [i_3] [i_3] [(_Bool)1])))), (((unsigned int) (short)-354))))) < ((+(max((arr_23 [i_3] [i_3] [i_5 + 1] [11ULL] [i_7 - 1]), (((/* implicit */unsigned long long int) var_12))))))));
                            arr_27 [15LL] [i_4] [i_5 + 1] = ((/* implicit */_Bool) max((17487650554790018076ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((arr_17 [i_4] [i_4]) + (((/* implicit */unsigned int) arr_19 [(_Bool)1] [i_4 + 1] [2LL] [i_3] [i_3])))) | ((-(var_0))))))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (0LL) : (((/* implicit */long long int) 3982228537U))))) | (1308600471401264781ULL))))));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (((+(((/* implicit */int) var_8)))) >> ((((-(3617153541087893391ULL))) - (14829590532621658204ULL))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */short) (~(arr_19 [i_4 + 2] [i_4 + 1] [i_10 - 1] [i_7 + 1] [i_4 - 1])));
                            arr_33 [i_3] [i_4] [i_7] [i_4] [14] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (unsigned short)43587)))));
                            arr_34 [i_3] [i_4 - 1] [i_4] [i_7] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7285))) : (arr_29 [i_10 - 1] [i_7 - 2] [i_10 - 1] [i_4 + 2])));
                            var_26 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_3] [i_10 - 1] [i_5 - 2])) == (((/* implicit */int) (_Bool)0)))))) <= (((arr_16 [i_3] [5LL] [i_5]) * (var_10))));
                        }
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)134))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3] [i_5] [i_5] [i_7 - 1] [i_5])) ? (3202287255994745232LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))) >= (((((/* implicit */_Bool) min((arr_11 [(_Bool)1]), (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_14 [i_3] [i_4 - 2] [11LL]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(unsigned short)20] [i_4] [2] [(short)6] [(_Bool)1]))) - (var_11))))))))));
                    }
                    arr_35 [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) (_Bool)1);
                    var_28 = ((/* implicit */int) arr_14 [i_3] [i_4 + 2] [i_5 + 1]);
                }
            } 
        } 
    }
    for (short i_11 = 0; i_11 < 19; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_29 = ((min((10412622385532642398ULL), (((/* implicit */unsigned long long int) arr_15 [i_11] [i_13] [i_13])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_17 [i_12] [(unsigned short)6])), (arr_29 [16] [i_12] [4] [2LL]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_11] [(short)4] [i_13] [i_11])) && (((/* implicit */_Bool) arr_40 [i_11])))))))))));
                    var_30 += ((/* implicit */short) var_8);
                }
            } 
        } 
        var_31 = ((/* implicit */short) ((unsigned short) (((!((_Bool)0))) && (((/* implicit */_Bool) ((var_4) ? (var_12) : (((/* implicit */long long int) arr_25 [i_11] [(signed char)19] [(unsigned short)6] [i_11] [(unsigned short)6] [9ULL] [i_11]))))))));
        var_32 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= ((-(-3202287255994745232LL)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 18; i_15 += 1) 
            {
                for (short i_16 = 3; i_16 < 17; i_16 += 4) 
                {
                    {
                        arr_56 [i_11] [(unsigned short)1] [i_15] [i_16 + 2] = ((/* implicit */unsigned long long int) arr_43 [7U] [i_14 - 1] [i_14] [0LL]);
                        var_33 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9386))) : (17U)));
                    }
                } 
            } 
            arr_57 [i_11] [i_14] [(_Bool)1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)20932))));
            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) var_5))));
        }
        /* vectorizable */
        for (unsigned short i_17 = 1; i_17 < 18; i_17 += 3) 
        {
            var_35 = ((/* implicit */long long int) arr_43 [i_11] [i_17 - 1] [(unsigned char)17] [i_11]);
            var_36 = ((/* implicit */long long int) (+(((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_11] [i_11] [i_11])))))));
        }
    }
    var_37 ^= ((/* implicit */_Bool) min(((+(min((var_11), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) -599148920969256963LL))));
    var_38 = ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) ((unsigned short) max(((_Bool)1), ((_Bool)0)))))));
}
