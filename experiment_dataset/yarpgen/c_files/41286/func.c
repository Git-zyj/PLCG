/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41286
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (short)8845)) : (((/* implicit */int) (short)8845))));
    var_21 &= ((/* implicit */unsigned long long int) min((var_18), (var_19)));
    var_22 *= ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (4445079619095179789ULL))), (((/* implicit */unsigned long long int) var_10)))), (((unsigned long long int) var_8))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8845))) != (((((((/* implicit */_Bool) (unsigned char)240)) ? (5777612832626796087ULL) : (15012863904103084436ULL))) | (7606321824652596742ULL)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_4 [i_0 - 2] = ((min((((/* implicit */unsigned long long int) ((short) 3882238826937564881ULL))), (((((/* implicit */_Bool) 3882238826937564881ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32747))) : (6556016951065522238ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759))));
            arr_5 [i_0] = arr_1 [i_0];
            var_24 *= ((/* implicit */short) ((((arr_3 [i_0 + 1]) - (arr_3 [i_0 - 1]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 9223372036854759424ULL)) && (((/* implicit */_Bool) arr_0 [i_0]))))) | (((/* implicit */int) ((short) arr_3 [i_0 - 3]))))))));
            arr_6 [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_1 [i_0]))) & (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) << (((((((/* implicit */int) (short)-8830)) + (8850))) - (18)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (var_3))))) - (arr_3 [i_0 - 3])))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_13 [i_3] [4ULL] [i_2] = max(((+(((((/* implicit */_Bool) (short)60)) ? (11890727122644029378ULL) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) arr_7 [i_0] [(short)2])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [8ULL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854792190ULL)) ? (((/* implicit */int) (short)-14952)) : (((/* implicit */int) (short)12700))));
                            var_25 *= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) | (((/* implicit */int) arr_9 [i_0] [i_4 + 1] [i_0 - 3] [i_3 - 1]))));
                            var_26 = ((/* implicit */short) ((unsigned char) (-(arr_14 [(unsigned char)16] [(unsigned char)16] [i_2]))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-8453)) % (((/* implicit */int) (short)-32753))));
                            var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_3]))) : (18446744073709551615ULL))) | (arr_3 [i_3 - 1])));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 1) 
                        {
                            var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1])) % (((/* implicit */int) arr_8 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                            var_30 = ((/* implicit */short) var_4);
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) arr_11 [14ULL] [i_0 - 3] [i_0 - 3] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0 - 1]))))))))));
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) < (9223372036854792190ULL)))), (max((7606321824652596742ULL), (588060907604257370ULL)))))))));
            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18266))) <= (2301733303023008469ULL))))));
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_8))))) % (((((/* implicit */_Bool) 419371335246748387ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (12115510553781355603ULL)))))) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) var_9))));
        }
    }
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        var_35 = (+((~(var_6))));
        arr_24 [(short)7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_1 [i_7]))) < (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)158)))))))));
        var_36 = ((/* implicit */short) (-(((((((/* implicit */_Bool) 23ULL)) ? (6556016951065522238ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29400))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_15 [i_7] [i_7] [(unsigned char)10] [i_7] [i_7]), (var_8)))))))));
        var_37 = ((((/* implicit */_Bool) (((((~(((/* implicit */int) arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [(unsigned char)14])))) + (2147483647))) >> (((arr_14 [i_7] [(short)0] [i_7]) - (13786043808801224645ULL)))))) ? ((-((-(arr_12 [i_7] [i_7] [i_7] [i_7] [(unsigned char)16]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_14 [i_7] [i_7] [i_7])))) ? (((/* implicit */int) arr_23 [i_7])) : (((/* implicit */int) max((((/* implicit */short) arr_18 [i_7] [i_7] [i_7] [i_7] [i_7])), (var_5))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            arr_31 [i_8] [i_8] [i_8] = ((/* implicit */short) (+(((/* implicit */int) ((short) arr_26 [i_8] [i_8])))));
            var_38 += ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)104)))) - (((/* implicit */int) (short)31453))));
            var_39 = ((unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_8] [i_8]))));
        }
        for (unsigned long long int i_10 = 1; i_10 < 8; i_10 += 4) 
        {
            var_40 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_33 [i_8] [i_8])) && (((/* implicit */_Bool) var_5)))));
            /* LoopNest 3 */
            for (short i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                for (short i_12 = 4; i_12 < 9; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 2; i_13 < 8; i_13 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_13 - 1]))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8] [i_8]))) % (arr_33 [i_8] [i_8])))));
                            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((short) (+(((/* implicit */int) (unsigned char)17))))))));
                            var_43 *= ((/* implicit */unsigned char) arr_3 [9ULL]);
                        }
                    } 
                } 
            } 
            var_44 += arr_8 [i_8] [i_8] [i_8] [i_8];
        }
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            arr_44 [i_14] = ((/* implicit */short) ((((((/* implicit */int) arr_32 [i_8] [i_8] [i_8])) >> (((/* implicit */int) arr_35 [i_8] [i_8])))) / (((/* implicit */int) arr_35 [i_8] [i_14]))));
            var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_8] [i_14])) != (((((/* implicit */_Bool) arr_32 [i_8] [i_14] [i_14])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_30 [(unsigned char)0] [i_14]))))));
        }
        /* LoopSeq 2 */
        for (short i_15 = 0; i_15 < 10; i_15 += 2) 
        {
            var_46 = ((/* implicit */unsigned char) arr_10 [i_8] [i_8] [8ULL] [i_8] [(unsigned char)17]);
            arr_49 [i_8] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_2))))));
            var_47 = ((/* implicit */unsigned char) ((unsigned long long int) arr_43 [i_8] [i_15]));
            arr_50 [i_15] [i_15] [i_15] = arr_47 [i_15];
        }
        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 4) 
        {
            arr_53 [i_8] [i_8] = ((unsigned long long int) ((short) 2305843009212645376ULL));
            var_48 = arr_46 [i_8] [i_8] [i_8];
            arr_54 [i_8] [i_16] [(short)6] = ((unsigned long long int) (~(arr_26 [i_8] [i_8])));
        }
    }
}
