/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200235
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0 + 1] &= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 + 1])) % ((~(((/* implicit */int) (unsigned char)203))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_13 = var_6;
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_14 &= ((/* implicit */unsigned char) max(((+(((/* implicit */int) max((arr_5 [i_0] [i_1]), ((unsigned char)64)))))), ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((/* implicit */int) (unsigned char)255))))))));
                var_15 = ((/* implicit */unsigned char) (-(((884141595U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253)))))));
                var_16 = ((/* implicit */unsigned char) (-((~((~(742627766U)))))));
                var_17 = ((/* implicit */int) var_2);
            }
            arr_10 [i_0] [10ULL] = ((/* implicit */unsigned char) ((3410825700U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 8437023716605512108ULL))) ^ (((/* implicit */int) arr_5 [i_0 + 1] [(unsigned char)8]))));
                var_19 ^= (unsigned char)0;
                var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))));
            }
        }
        var_21 = ((/* implicit */unsigned long long int) (unsigned char)192);
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        arr_16 [(signed char)23] = (+(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (min((arr_13 [(unsigned char)6] [(unsigned char)6]), (((/* implicit */unsigned long long int) arr_14 [i_4])))))));
        var_22 *= ((/* implicit */unsigned int) ((long long int) ((((unsigned int) var_3)) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 2; i_6 < 22; i_6 += 3) 
            {
                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)0))));
                arr_21 [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) var_6)))));
            }
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min((((/* implicit */int) ((signed char) max((var_1), (((/* implicit */unsigned char) (_Bool)1)))))), (min((max((((/* implicit */int) arr_18 [(unsigned char)0])), (arr_15 [i_5]))), (((/* implicit */int) max((arr_17 [i_4] [i_4] [(_Bool)1]), (((/* implicit */unsigned char) var_9))))))))))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 1; i_7 < 24; i_7 += 2) 
            {
                arr_24 [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) arr_15 [(_Bool)1]);
                /* LoopSeq 3 */
                for (unsigned char i_8 = 1; i_8 < 24; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 3; i_9 < 22; i_9 += 4) 
                    {
                        arr_32 [i_5] [i_5] [i_7] [i_5] [i_9] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)6))));
                        var_25 ^= ((/* implicit */unsigned char) 1297283585);
                    }
                    for (int i_10 = 3; i_10 < 22; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)64)))))));
                        var_27 = (~((~(((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_26 [i_8])))))));
                    }
                    arr_36 [i_5] [i_5] [i_7] [i_5] = (+(((/* implicit */int) (unsigned char)64)));
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 2; i_11 < 24; i_11 += 2) 
                    {
                        var_28 ^= ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) arr_33 [7ULL] [7ULL] [i_7] [i_8] [i_11])), ((~(18446744073709551615ULL)))))));
                        arr_40 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_13 [i_7] [i_11]) - (((/* implicit */unsigned long long int) arr_19 [i_5] [i_5] [i_5] [i_8])))) / (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_28 [(signed char)18] [i_5] [i_7] [i_8] [i_11 - 1] [i_7] [i_11])), (14))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) max((arr_31 [i_4] [i_5] [i_7] [i_5] [i_11]), (var_6)))))) : (min((min((((/* implicit */int) var_3)), (var_10))), (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_8))))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
                    {
                        arr_45 [i_5] [i_8] [i_8] = ((/* implicit */unsigned char) (((-(((/* implicit */int) ((unsigned short) var_0))))) < ((-(((/* implicit */int) (_Bool)1))))));
                        var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned char)15))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_31 [(unsigned char)22] [(unsigned char)22] [i_7 + 1] [16ULL] [i_12])) : (((/* implicit */int) arr_44 [i_5])))) : ((~(((/* implicit */int) arr_35 [i_4] [i_4] [i_4] [i_4] [i_4] [(unsigned char)8])))))))));
                        var_30 &= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)179)), ((+(((/* implicit */int) (unsigned char)39))))));
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned int) arr_26 [i_4])), (arr_42 [i_5] [i_5] [i_7] [i_7] [i_12])))))));
                        arr_46 [(signed char)23] [i_4] [i_5] [i_5] [i_8] [i_12] [i_12] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (1272553097U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_7] [i_8 - 1])))))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
                    {
                        arr_50 [(signed char)7] [i_5] = (~(((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((unsigned char) 1829348280))) : (((/* implicit */int) max(((unsigned char)3), (((/* implicit */unsigned char) (_Bool)1))))))));
                        var_32 -= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)206))));
                        var_33 -= (+((+(((/* implicit */int) (_Bool)1)))));
                        var_34 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_48 [i_4] [i_5] [i_4] [i_8] [i_5] [i_5])))) >= (((int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))));
                    }
                    var_35 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_0))))))), (min((((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (signed char)-1)))), ((~(((/* implicit */int) (unsigned short)65535))))))));
                    arr_51 [(unsigned char)20] [(unsigned short)2] [i_7] [i_8] |= ((/* implicit */signed char) max(((-((~(arr_42 [i_8] [i_8] [(unsigned char)18] [i_8] [i_8]))))), (((/* implicit */unsigned int) arr_33 [i_4] [(unsigned char)9] [i_4] [i_4] [i_5]))));
                }
                /* vectorizable */
                for (unsigned char i_14 = 1; i_14 < 24; i_14 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned char) var_8);
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) (signed char)-24))))) : (((arr_19 [i_5] [i_5] [i_7 + 1] [i_14]) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) arr_17 [i_7 + 1] [i_14 - 1] [i_14 - 1])) : (((/* implicit */int) (unsigned short)50876))));
                    arr_56 [24] [(signed char)6] [i_7] [i_14] [(signed char)6] [i_5] = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (unsigned char)87)) / (((/* implicit */int) (signed char)123)))));
                }
                for (unsigned char i_15 = 1; i_15 < 24; i_15 += 1) /* same iter space */
                {
                    var_39 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(-127301511)))), ((~(arr_37 [i_7 + 1] [i_15 - 1])))));
                    arr_60 [i_4] [i_5] [i_5] = ((/* implicit */int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)0)), (12294123044081559522ULL)))) ? (min((((/* implicit */unsigned int) var_3)), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113))))), (((/* implicit */unsigned int) arr_33 [i_4] [i_4] [i_4] [18U] [i_4]))));
                    arr_61 [i_5] [i_5] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)167)))) != ((+(((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_44 [i_5]))))))));
                    var_40 &= ((/* implicit */signed char) var_4);
                }
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (unsigned short)23496))));
                var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_18 [14U])))) : (((/* implicit */int) (unsigned short)4))))) ? ((+(((/* implicit */int) max((((/* implicit */unsigned char) arr_48 [i_4] [(unsigned char)2] [i_5] [4LL] [i_7] [i_7])), (var_11)))))) : (((/* implicit */int) (signed char)-21))));
            }
            /* LoopNest 2 */
            for (long long int i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                for (int i_17 = 2; i_17 < 24; i_17 += 2) 
                {
                    {
                        var_43 = ((/* implicit */unsigned char) (signed char)-114);
                        var_44 = ((/* implicit */int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) arr_64 [i_4] [i_5] [i_5])) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) (signed char)0)))))))));
                        var_45 ^= ((/* implicit */signed char) (~(max(((+(((/* implicit */int) (unsigned char)241)))), (((/* implicit */int) var_8))))));
                    }
                } 
            } 
        }
    }
}
