/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235295
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = (unsigned char)31;
                    var_16 = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) 3485003992U);
    }
    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) /* same iter space */
    {
        arr_11 [16ULL] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [1U]))));
        arr_12 [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_3 + 2] [i_3 - 1])) / (((/* implicit */int) arr_1 [i_3 - 1] [i_3 + 1])))) % (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)127)), (arr_4 [i_3 + 1] [i_3 + 1] [(unsigned short)4]))))));
        /* LoopSeq 4 */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((-547583209) % (((/* implicit */int) arr_3 [i_3 - 1])))) >> (((((var_11) - (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])))) - (14942145958081332750ULL))))))));
            arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) min((((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_11)))) != ((-(var_8))))))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 2; i_5 < 16; i_5 += 2) 
            {
                arr_19 [i_3 + 2] [i_4] [15LL] = ((/* implicit */unsigned int) 411796962616301804LL);
                var_19 = ((/* implicit */signed char) ((min((((/* implicit */long long int) min((var_13), (var_13)))), (((long long int) (signed char)-127)))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5 + 1] [i_5 - 1] [i_5 + 1]))) > (max((2272763454U), (((/* implicit */unsigned int) var_13))))))))));
                arr_20 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) min(((unsigned char)172), (((/* implicit */unsigned char) (signed char)121))));
            }
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_20 = ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_18 [i_3] [(unsigned char)17] [(unsigned char)17] [i_6])));
                        var_21 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 770200567U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))) * (((((/* implicit */int) (signed char)117)) / (((/* implicit */int) (unsigned char)211)))))) + (((/* implicit */int) var_6))));
                        arr_26 [i_4] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13))))))));
                        arr_27 [(short)2] [i_7] = arr_7 [i_3] [i_4] [i_6] [i_7];
                        var_22 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (signed char)127))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) var_9);
            var_24 = ((/* implicit */signed char) (-(arr_7 [i_3] [i_3 - 1] [i_3] [i_3])));
        }
        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            arr_34 [2] = ((/* implicit */int) ((((((/* implicit */long long int) (~(4294967295U)))) % (min((var_8), (((/* implicit */long long int) arr_9 [i_3] [i_3])))))) / (((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (1373584134U))))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) ? ((~(arr_9 [i_3 + 2] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 2])) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) var_10)))))));
        }
        for (short i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            arr_39 [i_3] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) < (min((((/* implicit */unsigned long long int) arr_25 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [6U] [i_3 + 2])), (max((((/* implicit */unsigned long long int) arr_37 [i_3] [i_3 + 2] [i_10])), (var_2)))))));
            var_26 = ((/* implicit */unsigned char) (unsigned short)65535);
            arr_40 [i_3] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) 2058982766U)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (signed char)-113))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                arr_44 [i_3 + 2] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) ((770200585U) == (((/* implicit */unsigned int) 142787768))));
                arr_45 [i_3] [i_3] [(unsigned char)2] = ((/* implicit */_Bool) var_10);
                var_27 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 547583209)))) ? (((/* implicit */long long int) 4294967295U)) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) : (7974257940084349056LL)))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_28 = ((/* implicit */unsigned char) ((unsigned int) var_6));
                var_29 = ((/* implicit */int) var_4);
                var_30 = ((/* implicit */unsigned short) ((((var_9) / (((((/* implicit */_Bool) arr_6 [i_3] [i_10] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (-6223551400619151072LL) : (((/* implicit */long long int) 326791198)))) > (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
            }
            for (short i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_14 = 2; i_14 < 17; i_14 += 3) 
                {
                    arr_53 [i_3] [i_3] [i_3] [i_10] [i_13] [i_14] = ((/* implicit */signed char) max((min((max((((/* implicit */unsigned long long int) (short)9775)), (var_9))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-123))))))), (((/* implicit */unsigned long long int) (unsigned char)56))));
                    var_31 = ((/* implicit */signed char) ((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))))))));
                }
                var_32 = ((/* implicit */short) arr_5 [i_3] [(unsigned char)6] [(short)16]);
                arr_54 [i_3 + 1] [i_3 + 1] = ((/* implicit */long long int) (-(-1)));
                var_33 = ((/* implicit */unsigned long long int) (-((-((-(((/* implicit */int) (unsigned short)65525))))))));
            }
        }
    }
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 4294967295U)) % (var_2)));
    var_35 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_15 = 1; i_15 < 17; i_15 += 1) /* same iter space */
    {
        arr_59 [i_15] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (3U)))), (var_8)));
        arr_60 [i_15] [i_15] = ((max((((/* implicit */unsigned int) arr_22 [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1])), (((unsigned int) var_4)))) + (((/* implicit */unsigned int) max((((/* implicit */int) var_7)), (65535)))));
    }
    for (unsigned int i_16 = 1; i_16 < 17; i_16 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((arr_14 [(short)8]) | (((/* implicit */int) (unsigned char)128))))) ^ (((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
        arr_63 [(short)0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(-547583205)))) ? (var_2) : (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */long long int) 3922637596U)), (var_8)))))));
        arr_64 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4611545280939032576ULL)) ? (((arr_62 [i_16 - 1]) / (((/* implicit */int) arr_8 [i_16] [i_16] [(signed char)0] [(signed char)0])))) : (((/* implicit */int) ((max((var_8), (((/* implicit */long long int) (unsigned short)65535)))) != (((/* implicit */long long int) (-(var_5)))))))));
    }
}
