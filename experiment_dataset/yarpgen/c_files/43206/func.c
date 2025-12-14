/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43206
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0]))));
        var_11 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_0])))));
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_13 = arr_1 [i_0];
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 3; i_2 < 8; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_4))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    arr_13 [0ULL] [i_3] [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_6 [i_2] [i_2 + 1]) : (((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) arr_7 [i_2] [i_2 - 2] [i_2])) : (arr_5 [i_3])))));
                    arr_14 [i_1] [i_2] [i_3 + 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_4 [i_2] [i_2]))) - (((/* implicit */int) arr_7 [i_1] [i_2 - 3] [i_3]))));
                }
                for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    arr_18 [i_5] [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) (signed char)0);
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (signed char)22))));
                    var_16 &= ((/* implicit */unsigned long long int) ((((_Bool) arr_12 [i_1] [i_2 + 1] [i_5] [i_5])) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_2 - 2] [i_2])) : (((/* implicit */int) (signed char)37))));
                    var_17 ^= ((/* implicit */_Bool) arr_12 [i_3 + 1] [i_2] [i_5] [i_5]);
                    arr_19 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (~(arr_5 [i_2 - 2])));
                }
                arr_20 [i_1] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)0])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_3] [i_3])) : (((/* implicit */int) (short)-18889))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)11119))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((unsigned char) (~(arr_16 [(short)0])))))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-(arr_6 [i_6] [6]))))));
                arr_23 [i_1] [i_1] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [(_Bool)1] [i_2 - 1] [i_2] [i_2 + 3]))));
            }
            var_20 -= ((/* implicit */unsigned char) ((short) arr_16 [(unsigned char)6]));
            arr_24 [i_1] [i_1] = ((unsigned long long int) 871067034679437940LL);
        }
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((_Bool) arr_5 [i_1])))));
        /* LoopSeq 4 */
        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            var_22 = (~(((/* implicit */int) min((arr_11 [i_7] [i_7]), (arr_11 [i_7] [i_7])))));
            arr_27 [i_1] [i_7] = ((/* implicit */unsigned short) max((((((_Bool) (signed char)9)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) ^ (arr_16 [i_7]))) : (((/* implicit */long long int) ((int) arr_17 [i_1] [i_1] [i_1] [i_7]))))), (((/* implicit */long long int) var_8))));
            var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) var_2))))))) * (arr_17 [i_1] [i_1] [i_7] [i_1]));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_30 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_16 [i_8]), (var_9)))) ? (((arr_4 [i_1] [i_8]) ? (((/* implicit */int) arr_4 [i_1] [i_8])) : (((/* implicit */int) arr_4 [i_8] [i_1])))) : (((/* implicit */int) arr_4 [i_8] [i_1]))));
            var_24 = min((((/* implicit */short) arr_29 [i_1] [(unsigned char)1])), (arr_26 [i_1] [i_8] [i_1]));
            var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
        }
        /* vectorizable */
        for (signed char i_9 = 3; i_9 < 8; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                var_26 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_1] [i_1])) == (((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_9 + 1])) ? (var_7) : (((/* implicit */unsigned long long int) -85899065335429450LL))))));
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((short) (~(((/* implicit */int) arr_11 [4LL] [i_10]))))))));
                arr_35 [i_9] = ((/* implicit */unsigned long long int) ((unsigned short) (signed char)-67));
            }
            var_28 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (signed char)9))))));
        }
        for (signed char i_11 = 3; i_11 < 8; i_11 += 1) 
        {
            arr_39 [i_1] [i_1] [i_11] = ((((/* implicit */_Bool) ((short) arr_36 [i_11 + 3] [i_11 - 1] [i_11 + 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11127))) : (((((/* implicit */_Bool) arr_34 [3LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_11]))) : ((~(var_7))))));
            var_29 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (short)-18483)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)62)))))))));
        }
    }
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
    {
        arr_42 [i_12] = ((/* implicit */short) arr_28 [i_12] [i_12] [i_12]);
        arr_43 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -2125294135)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_37 [i_12])))), (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) (signed char)37)))))))) ? (((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_16 [i_12])))) ? ((+(arr_25 [0LL] [i_12] [i_12]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_12] [i_12] [i_12]))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_12] [(unsigned char)10] [i_12] [i_12]))) ^ (var_7)))) ? ((~(((/* implicit */int) (short)11119)))) : (((/* implicit */int) ((_Bool) 110788016)))))));
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11111))) : (1118911375U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) arr_31 [i_12] [i_12])) : (max((((/* implicit */int) arr_40 [i_12])), (var_4)))))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
    {
        arr_46 [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_44 [i_13]))))));
        /* LoopSeq 4 */
        for (int i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            var_31 = ((/* implicit */signed char) (+(-1996528637)));
            var_32 *= ((/* implicit */_Bool) (+(arr_45 [i_13])));
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -52531210))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 4294967295U))))))))));
            /* LoopSeq 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_34 = ((((/* implicit */int) (unsigned char)204)) * (((((/* implicit */int) (unsigned char)42)) / (((/* implicit */int) arr_52 [i_13])))));
                arr_53 [i_14] [i_14] = ((/* implicit */int) ((15281129387906285516ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 228745178230996522LL))))));
                var_35 = (-(((/* implicit */int) arr_48 [i_14])));
                arr_54 [i_14] [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_0 [i_15] [i_14]))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_52 [i_15]))));
            }
            for (long long int i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                var_36 -= ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) arr_52 [i_13])));
                arr_57 [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_3)))));
            }
        }
        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_18 = 0; i_18 < 13; i_18 += 2) 
            {
                arr_66 [i_17] [i_18] = (!(((/* implicit */_Bool) arr_58 [i_18] [i_17])));
                var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) 15))));
            }
            for (unsigned long long int i_19 = 1; i_19 < 11; i_19 += 2) 
            {
                var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_19 + 2] [i_17] [i_19])) ? (((/* implicit */int) arr_68 [i_19 - 1] [i_17] [i_19] [i_17])) : (arr_51 [i_19 + 2] [i_17] [i_19]))))));
                /* LoopSeq 1 */
                for (long long int i_20 = 1; i_20 < 11; i_20 += 2) 
                {
                    var_39 = ((/* implicit */unsigned char) arr_63 [i_19 + 1] [i_19 + 1] [i_19 + 2] [i_20 + 2]);
                    arr_73 [i_13] [i_17] [i_19] [i_19] [i_20 - 1] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)52007)) ? (-228745178230996528LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                }
            }
            for (short i_21 = 0; i_21 < 13; i_21 += 2) 
            {
                arr_76 [i_13] [i_13] [i_17] [i_17] = ((/* implicit */short) (signed char)-50);
                var_40 = ((/* implicit */unsigned long long int) ((short) arr_70 [i_13] [i_17] [i_21]));
                arr_77 [i_13] [i_13] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_47 [i_13] [i_13] [i_21])) - (((/* implicit */int) arr_1 [i_13])))));
                var_41 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)13529)) <= (((/* implicit */int) arr_49 [i_13]))));
            }
            var_42 -= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_13] [i_17]))) : (arr_0 [(_Bool)1] [(_Bool)1]))));
            arr_78 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((int) 4294967286U)) : (((/* implicit */int) var_10))));
            var_43 += ((/* implicit */_Bool) ((signed char) arr_51 [i_13] [i_17] [i_17]));
            var_44 = ((/* implicit */unsigned short) arr_63 [i_13] [i_17] [i_17] [i_17]);
        }
        for (signed char i_22 = 0; i_22 < 13; i_22 += 1) /* same iter space */
        {
            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [(short)3])) ? (arr_69 [i_13] [i_22] [i_22]) : (((/* implicit */int) var_10))));
            var_46 = ((/* implicit */int) arr_55 [i_13] [i_13] [i_22] [i_13]);
        }
        for (signed char i_23 = 0; i_23 < 13; i_23 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_24 = 0; i_24 < 13; i_24 += 3) 
            {
                arr_87 [i_23] = (((!(((/* implicit */_Bool) arr_60 [i_13])))) ? (arr_56 [i_24] [i_23]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5)))));
                var_47 = ((/* implicit */short) (((-(((/* implicit */int) arr_79 [i_13])))) > (((/* implicit */int) ((signed char) -281474976710656LL)))));
            }
            var_48 -= ((/* implicit */unsigned long long int) var_1);
        }
        var_49 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 2065436864588866909LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)2))) : (228745178230996528LL))));
        arr_88 [i_13] = ((/* implicit */short) var_2);
        var_50 ^= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)9))));
    }
}
