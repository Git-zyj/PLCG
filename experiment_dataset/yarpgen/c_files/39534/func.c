/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39534
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
    var_14 = ((/* implicit */unsigned short) max((-5873296527646650732LL), (((/* implicit */long long int) (signed char)56))));
    var_15 *= ((/* implicit */short) var_13);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) + (((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0] [i_0]))))), (max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)16)) : (186218233)))), (arr_1 [i_0 + 1])))));
                    arr_8 [i_0] [i_1] [i_0] [i_2] = (unsigned short)42317;
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_3 [i_0] [i_1]))));
                        arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_9 [i_0 + 1] [i_1] [i_1] [i_2] [i_3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) max(((~(2409247408U))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((var_13) - (12994385357820504219ULL))))))))) : (max((((/* implicit */long long int) max((((/* implicit */unsigned char) var_0)), (arr_3 [i_2] [i_3])))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)43))) | (-9007199254740992LL)))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((var_5), (((/* implicit */short) var_7))))) : ((~(((/* implicit */int) (unsigned short)8190))))))) ? (((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-79))))) ? ((+(arr_13 [i_0] [i_0] [i_1] [i_2] [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -974648039)) - (arr_9 [i_0] [i_0] [i_2] [i_4] [(unsigned char)9] [i_0])))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)3908)) : (((/* implicit */int) var_11)))), ((~(((/* implicit */int) var_0)))))))));
                        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)166), (((/* implicit */unsigned char) (_Bool)1))))))))) && (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)127))))) < (6130726060978807529ULL)))));
                    }
                }
            } 
        } 
        var_19 -= ((/* implicit */unsigned long long int) max((((arr_0 [(short)6] [i_0 + 1]) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_0 + 1])) : (((/* implicit */int) arr_0 [0LL] [i_0 + 1])))), (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) (signed char)-39))))) ? (((((/* implicit */int) var_7)) / (((/* implicit */int) var_10)))) : (((/* implicit */int) var_5))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))), (((long long int) arr_11 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) ((short) 2390136112U))) : (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])) | (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0 + 1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1904831183U)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned char)73))))) ? (((((/* implicit */_Bool) 1364647500)) ? (2047ULL) : (5536476654366841793ULL))) : (max((arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)29))))))));
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_13 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((1393365369U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))))));
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) var_8)), (8734841567942992888ULL))), (((/* implicit */unsigned long long int) (((((_Bool)0) && (((/* implicit */_Bool) -1992299487)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3770801143U))))) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        arr_19 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 11394011231352004419ULL)) ? (-5264893091805679363LL) : (((/* implicit */long long int) 4294967295U))));
        arr_20 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (signed char)49))))) ? (((/* implicit */int) ((((/* implicit */int) arr_17 [i_5])) < (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))));
        var_22 = (-(((((/* implicit */_Bool) (signed char)103)) ? (3262866261U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))))));
        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((14212349370182269759ULL) < (arr_18 [i_5]))))) : (arr_18 [i_5])));
        /* LoopNest 2 */
        for (short i_6 = 4; i_6 < 17; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                {
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_5] [i_5] [i_7]))) / (arr_18 [i_5])))) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (signed char)85))));
                    arr_29 [i_5] = ((/* implicit */unsigned short) (~((~(362865078U)))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30464)) ? (((((/* implicit */_Bool) -3251505302672905902LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2790233084U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))))));
}
