/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197341
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_1 [i_0]))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 3069060194U)))))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((~(-4431566122707028233LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((+(7183493672465741234LL))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((long long int) var_11)) / (((/* implicit */long long int) 650041229U)))))));
        var_19 *= ((arr_6 [i_1] [(unsigned char)12]) || (((((/* implicit */_Bool) 9007199254740991ULL)) && (((/* implicit */_Bool) arr_5 [(signed char)6])))));
        var_20 |= ((/* implicit */unsigned long long int) var_16);
        arr_8 [(unsigned short)14] [(unsigned short)14] |= ((/* implicit */short) ((((/* implicit */_Bool) 3644926067U)) ? (3644926066U) : (((((/* implicit */_Bool) arr_5 [0ULL])) ? (3644926067U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
        var_21 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 893647200U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(short)13]))) : (3644926067U))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_22 &= ((/* implicit */unsigned int) ((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177)))));
            var_23 |= ((/* implicit */unsigned short) (_Bool)0);
            var_24 |= ((/* implicit */unsigned int) ((arr_11 [i_3] [i_2]) * (((/* implicit */unsigned long long int) arr_9 [(signed char)0]))));
        }
        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            var_25 *= ((/* implicit */short) ((((((((/* implicit */_Bool) 3644926067U)) || (((/* implicit */_Bool) (short)17289)))) || (((/* implicit */_Bool) var_14)))) ? (min((-5343139516369990399LL), (((/* implicit */long long int) (unsigned short)45509)))) : (min((((/* implicit */long long int) (_Bool)1)), (-5343139516369990399LL)))));
            var_26 ^= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) : (4055457328792786231ULL))));
            var_27 = ((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [3LL])) * (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) 6743541394936643296LL)) ? (arr_12 [(signed char)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned long long int) ((long long int) var_2))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 650041229U)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2] [(signed char)6]))))) : ((+(2052287869649630592LL)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_5 = 1; i_5 < 12; i_5 += 2) /* same iter space */
            {
                var_28 = (_Bool)1;
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((short) arr_5 [(unsigned short)0])))));
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    arr_23 [2U] [i_5] [10ULL] [2U] &= ((/* implicit */int) var_6);
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (arr_12 [i_5 + 2])));
                }
                var_31 -= ((/* implicit */unsigned int) ((_Bool) 18446744073709551615ULL));
                var_32 |= ((/* implicit */unsigned int) -5343139516369990396LL);
            }
            for (signed char i_7 = 1; i_7 < 12; i_7 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) min((((unsigned char) (+(var_9)))), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (var_11) : (-5343139516369990399LL))))))))));
                var_34 |= ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) 3311306567232774267ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_19 [i_4] [i_4] [i_2] [i_2]))))), (((/* implicit */long long int) ((unsigned char) (short)-32159)))));
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_30 [(unsigned char)9] [i_8] [i_8] = ((/* implicit */unsigned short) arr_18 [i_2] [(unsigned short)7] [(unsigned short)7] [(unsigned short)7]);
            var_35 ^= ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (signed char)71)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_7 [i_2])))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (-5343139516369990384LL) : (var_6))) >= (((/* implicit */long long int) var_2)))))));
        }
        arr_31 [i_2] = ((/* implicit */_Bool) ((unsigned short) 3449826404U));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_10 = 1; i_10 < 10; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 3; i_11 < 13; i_11 += 4) 
                {
                    for (unsigned short i_12 = 1; i_12 < 12; i_12 += 2) 
                    {
                        {
                            arr_40 [4ULL] [i_9] [i_9] [(signed char)0] [(_Bool)1] [(unsigned char)2] [i_9] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((-479093267) | (((/* implicit */int) var_7))))) / (2069204602296604045ULL)))) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-44)))) ? (((/* implicit */long long int) 3449826404U)) : (min((-1LL), (((/* implicit */long long int) 0U)))))) : (6200155658390943903LL)));
                            arr_41 [i_2] [i_9] = ((/* implicit */unsigned short) (short)-17289);
                            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) 845140872U))));
                        }
                    } 
                } 
                var_37 *= ((/* implicit */_Bool) (unsigned short)37955);
                var_38 *= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)228)) ? (((((/* implicit */_Bool) 845140872U)) ? (arr_19 [(_Bool)1] [i_10] [13] [13]) : (((/* implicit */long long int) var_2)))) : (min((((/* implicit */long long int) 535822336U)), (arr_39 [(unsigned char)12] [(unsigned char)12]))))));
            }
            var_39 = ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))) >= (((/* implicit */int) (unsigned short)0)))))) >= (var_8));
        }
        arr_42 [4LL] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2]))) % (arr_19 [i_2] [i_2] [i_2] [i_2]))) % (((/* implicit */long long int) (((~(arr_25 [10ULL] [i_2] [1U]))) % (((/* implicit */unsigned int) ((arr_22 [i_2] [i_2] [(_Bool)1] [(_Bool)1]) & (((/* implicit */int) (short)23416))))))))));
    }
    for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 3) 
    {
        var_40 += ((/* implicit */unsigned short) (_Bool)1);
        arr_45 [i_13] [10LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_13 + 1]))) : ((+(4145707062U)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 288549362U))))) - (((/* implicit */int) ((signed char) (signed char)-85)))))) : (((140735340871680LL) * (((/* implicit */long long int) ((/* implicit */int) arr_43 [(unsigned short)5] [i_13 + 1])))))));
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            var_41 ^= ((/* implicit */unsigned long long int) -1);
            arr_48 [i_14] [i_13 + 3] = ((/* implicit */int) (~((+(arr_46 [i_13 - 1])))));
        }
        var_42 ^= ((/* implicit */signed char) (!(((_Bool) var_0))));
        var_43 *= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_47 [i_13 + 2])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_47 [i_13 + 3]))) - (var_11))) : (((long long int) var_11))));
    }
    var_44 |= ((/* implicit */unsigned long long int) var_5);
}
