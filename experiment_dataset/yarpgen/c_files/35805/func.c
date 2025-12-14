/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35805
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
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)25)) ? (1302962341U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) : (((var_5) ? (((/* implicit */long long int) 4195131217U)) : (4602678819172646912LL)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_17))) | (((/* implicit */int) ((_Bool) var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2389153474990255878ULL)) ? (((/* implicit */int) var_12)) : (2)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)4096))) : (min((var_11), (-8683908900445944183LL)))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_0)) + (((((((/* implicit */_Bool) (unsigned char)1)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_4)))))))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))) : (var_17)))) ? (min((var_17), (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) (+(((/* implicit */int) var_12))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-19))))) ? (((/* implicit */long long int) arr_0 [i_1])) : (((0LL) * (-8683908900445944202LL)))));
        }
        for (short i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
        {
            arr_8 [i_0 + 1] [i_2 + 2] = ((/* implicit */_Bool) var_8);
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((min((((/* implicit */long long int) (signed char)7)), (-2426492314489685921LL))) < (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))));
            var_25 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) - ((+(((/* implicit */int) (short)16384))))))));
        }
        var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) (short)16384)) ? (((/* implicit */int) (short)16411)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))) | (max((max((arr_5 [i_0] [i_0] [i_0]), (var_17))), (((/* implicit */unsigned long long int) 7634143736671569648LL))))));
    }
    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((long long int) -2147483631)) <= (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) ((unsigned char) (unsigned short)27237))) : ((-(-10)))))))))));
        arr_12 [i_3] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) arr_6 [i_3] [i_3] [i_3])) | (((/* implicit */int) (_Bool)0)))));
        arr_13 [i_3] [i_3] = ((/* implicit */short) var_6);
        arr_14 [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2147483631)), (var_17)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_2 [i_3])))) : (((((/* implicit */int) var_15)) & (((/* implicit */int) (_Bool)1)))))) | (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)10)))) : (((/* implicit */int) var_1))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 573187423)) ? (938547899U) : (((/* implicit */unsigned int) -2147483632))))) ? (var_0) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_5])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-90))))))))));
            arr_21 [i_4] [1ULL] [i_4] = ((/* implicit */unsigned int) (((_Bool)1) ? (4602678819172646892LL) : (((/* implicit */long long int) ((/* implicit */int) (short)17522)))));
            var_29 = ((/* implicit */_Bool) (~(3)));
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) 4063706354U))));
        }
        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            arr_26 [i_4] [(short)14] [i_6] = min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)218)) >> (((((/* implicit */int) (short)12490)) - (12487)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-8)) + (((/* implicit */int) (signed char)96))))) : (((((/* implicit */_Bool) (signed char)-67)) ? (1082331758592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384))))))), (((/* implicit */unsigned long long int) (-(var_6)))));
            arr_27 [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 7634143736671569648LL)) ? (arr_15 [i_6] [i_6]) : (arr_15 [i_6] [i_4]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_15 [i_4] [i_4]))))));
            var_31 = ((/* implicit */unsigned long long int) max((((((-4LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-21772))))) & (-8094647668137000451LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))));
        }
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) -787144938)) ? (((((/* implicit */_Bool) ((2449075399406668179ULL) >> (((1147882769) - (1147882764)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) : (((((/* implicit */_Bool) (unsigned char)4)) ? (10343379746157046935ULL) : (((/* implicit */unsigned long long int) -461278881)))))) : (10344057454788555095ULL)));
        arr_28 [i_4] = ((/* implicit */_Bool) ((((-7445651677234818185LL) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4])) && (((/* implicit */_Bool) (signed char)83)))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        arr_31 [i_7] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)49152))));
        var_33 ^= min((((/* implicit */int) arr_30 [i_7])), ((((((_Bool)0) ? (((/* implicit */int) arr_30 [i_7])) : (((/* implicit */int) var_10)))) | (((/* implicit */int) min((((/* implicit */unsigned short) var_18)), (var_12)))))));
    }
}
