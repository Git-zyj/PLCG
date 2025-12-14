/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221889
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
    var_17 = ((/* implicit */short) var_15);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) 1615729208)) + (arr_1 [i_0 + 1]))), (((/* implicit */long long int) ((unsigned char) arr_1 [i_0 - 3])))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) -1615729208);
            arr_7 [i_1] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_3))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) && (((/* implicit */_Bool) arr_3 [11])))))))), (arr_4 [i_0] [i_0])));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [i_3])) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_9 [i_0] [i_0])))))))));
                var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) (short)32767)), (-2028898510)));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                var_21 = max((max((arr_12 [i_0 + 2] [i_0 - 2] [i_2 - 1] [0LL]), (((((/* implicit */_Bool) var_15)) ? (1615729228) : (-1615729234))))), (((/* implicit */int) arr_8 [i_0] [i_0] [4ULL])));
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((int) arr_9 [i_0] [i_2])))))));
            }
        }
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (unsigned char i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (min((((/* implicit */int) arr_10 [i_5] [(unsigned char)6] [i_6] [i_6])), (-1615729228)))))));
                            var_24 = ((/* implicit */short) var_1);
                            arr_24 [i_6] &= ((/* implicit */long long int) ((short) (~(1615729208))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                arr_27 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) arr_26 [i_9]);
                var_25 *= ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_0]), (arr_0 [1]))))));
                arr_28 [i_9] [i_9] [i_9] [i_5] = (i_5 % 2 == zero) ? (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_23 [i_9] [(unsigned short)10] [i_9] [i_9])) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5])) + (59)))))) ? (((1615729208) >> (((((/* implicit */int) (short)32760)) - (32758))))) : (((/* implicit */int) max((arr_25 [i_5] [17U]), ((short)-32761))))))), (max((max((((/* implicit */unsigned long long int) 7805131850481076186LL)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (3827294392U))))))))) : (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_23 [i_9] [(unsigned short)10] [i_9] [i_9])) + (2147483647))) >> (((((((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5])) + (59))) - (134)))))) ? (((1615729208) >> (((((/* implicit */int) (short)32760)) - (32758))))) : (((/* implicit */int) max((arr_25 [i_5] [17U]), ((short)-32761))))))), (max((max((((/* implicit */unsigned long long int) 7805131850481076186LL)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (3827294392U)))))))));
                var_26 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) -2486970476579109465LL)))));
            }
            var_27 -= ((/* implicit */signed char) ((unsigned long long int) arr_12 [i_0] [i_0] [(unsigned char)11] [i_0]));
            var_28 ^= ((/* implicit */long long int) (+((~(((/* implicit */int) arr_16 [i_0] [i_5]))))));
            arr_29 [i_5] = ((/* implicit */signed char) max((((arr_12 [i_0 - 4] [i_5] [12LL] [i_5]) ^ (arr_12 [i_0] [i_0] [i_0 - 4] [i_0]))), (((/* implicit */int) ((((/* implicit */int) (short)32760)) < (arr_12 [i_0] [i_0 - 4] [i_0 - 1] [(short)15]))))));
        }
        var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1615729243)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169))) & ((-(2957615286U)))))) : (((-1778732268727217762LL) - (((/* implicit */long long int) -1615729243))))));
    }
    for (short i_10 = 3; i_10 < 11; i_10 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                for (unsigned char i_13 = 2; i_13 < 9; i_13 += 3) 
                {
                    {
                        var_30 = ((/* implicit */short) max(((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) | (var_3)))))), (var_6)));
                        var_31 -= ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                    }
                } 
            } 
            var_32 = ((unsigned long long int) max((((5816088623536839957ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))))), (((/* implicit */unsigned long long int) var_11))));
        }
        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            var_33 = ((/* implicit */signed char) ((max((min((12630655450172711658ULL), (var_1))), (arr_9 [i_10 - 1] [i_10]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)39770)) ? (12630655450172711657ULL) : (((/* implicit */unsigned long long int) -1615729222)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54882)))))))))))));
            arr_41 [i_10] [i_10] = ((/* implicit */unsigned char) (-(max((1615729216), (((/* implicit */int) (unsigned char)35))))));
            /* LoopNest 2 */
            for (long long int i_15 = 2; i_15 < 10; i_15 += 2) 
            {
                for (int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    {
                        arr_47 [i_10] [4U] [4U] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((max((1337352010U), (((/* implicit */unsigned int) (unsigned char)169)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_16])) && (((/* implicit */_Bool) min((arr_17 [(_Bool)1] [i_14] [i_15] [i_16]), (arr_5 [(unsigned char)11] [(unsigned short)13] [i_15]))))))))));
                        /* LoopSeq 3 */
                        for (int i_17 = 3; i_17 < 8; i_17 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned char) 1615729221);
                            arr_51 [i_10] [(unsigned char)6] [i_15] [i_15] [i_10] |= ((/* implicit */unsigned int) arr_1 [i_10 - 3]);
                        }
                        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            arr_55 [i_10] [i_10] [i_15] [i_16] [i_18] = ((/* implicit */int) ((960060317299327901ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_56 [i_10] [10] [i_10] [i_10] [i_15] [i_18] [i_10] = ((/* implicit */short) (-(max((max((((/* implicit */unsigned long long int) var_16)), (arr_34 [i_10]))), (min((arr_34 [i_10]), (((/* implicit */unsigned long long int) var_16))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)117)) && (((/* implicit */_Bool) 1694816354)))))));
                            arr_60 [(_Bool)1] [8LL] [i_15] [8LL] [i_10] = ((/* implicit */short) var_11);
                            var_36 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (arr_22 [i_10] [(unsigned short)2] [(unsigned short)2] [i_10] [i_19]))) & (((/* implicit */unsigned long long int) arr_50 [i_10 + 1])));
                        }
                        var_37 = ((/* implicit */short) arr_9 [i_10] [i_10]);
                    }
                } 
            } 
        }
        var_38 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (short)14036)) : (1615729183)));
        var_39 -= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)14030)) - (14028)))));
        var_40 &= ((/* implicit */unsigned char) max((max((((/* implicit */short) arr_26 [i_10 - 3])), (arr_36 [i_10] [i_10 - 3] [i_10] [6LL]))), (((/* implicit */short) arr_26 [i_10 - 1]))));
    }
}
