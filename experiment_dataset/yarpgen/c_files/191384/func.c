/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191384
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
    var_18 = ((/* implicit */signed char) min((911355406), ((+(((/* implicit */int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) var_10)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = var_11;
        var_19 += ((/* implicit */unsigned char) (short)25185);
    }
    for (long long int i_1 = 3; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) (short)25161)) : (((/* implicit */int) arr_4 [i_3] [i_2])))))))));
                        var_21 *= ((/* implicit */unsigned char) arr_11 [i_2] [i_4]);
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_11 [i_2 - 1] [i_1 - 2]))))) : (((/* implicit */int) min((arr_11 [i_2 + 3] [i_1 + 1]), (arr_11 [i_2 + 2] [i_1 + 3])))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned char) arr_6 [i_1]);
        arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)29)))))))) ? (max((((/* implicit */int) (unsigned char)240)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)(-32767 - 1))) : (arr_5 [(signed char)1]))))) : ((-(((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1]))))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_23 [(signed char)11] [i_5] [i_5] [(unsigned short)23] = ((/* implicit */signed char) max((((/* implicit */int) var_0)), (arr_19 [i_1] [i_5] [(unsigned char)13] [i_7])));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1659)) ? (((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)1400))))))) : (min((min((((/* implicit */long long int) (short)-5203)), (arr_8 [i_1] [i_1] [i_7]))), (((/* implicit */long long int) arr_19 [(signed char)16] [i_5] [(signed char)16] [i_7])))))))));
                        var_25 = ((/* implicit */int) max((min((min((var_15), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) arr_20 [22LL] [i_1 - 1] [i_1 + 3] [i_1 - 3])))), (((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [i_1] [i_6])))))));
                        var_26 = min((((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) var_9))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5] [i_1])) || (((/* implicit */_Bool) -9223372036854775807LL)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_10 [i_5] [i_6] [i_5]))))) ? (((/* implicit */int) arr_16 [i_1 - 3])) : (max((((/* implicit */int) (unsigned short)25100)), (arr_20 [3LL] [3LL] [(signed char)9] [i_7])))))));
                    }
                    for (long long int i_8 = 1; i_8 < 24; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) max(((signed char)-93), ((signed char)-27)));
                        var_28 = ((/* implicit */unsigned long long int) var_7);
                        var_29 = (signed char)8;
                    }
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (arr_14 [i_9] [i_5] [i_1 - 3] [(signed char)8]))))));
                        arr_30 [i_1 + 3] [i_5] [i_6] [i_9] [i_9] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_2))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32534)) || (((/* implicit */_Bool) (unsigned char)231))))))));
                        arr_31 [i_5] [i_9] [i_9] [22LL] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (short)-25185)) + (2147483647))) >> (((((/* implicit */int) (signed char)120)) - (114))))) == (((((/* implicit */_Bool) (signed char)-36)) ? (arr_29 [i_1 + 2] [i_1] [i_9] [i_1] [i_1]) : (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                        arr_32 [i_1] [(unsigned short)19] [i_5] [i_6] [i_9] [1ULL] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (arr_21 [i_1] [i_5] [i_6] [15] [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25186))) : (arr_21 [i_1 + 2] [i_1 + 3] [i_1 - 2] [i_1 - 3] [i_6]));
                        var_31 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (unsigned char)255))));
                    }
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-32758))))) ? (arr_19 [i_1] [i_5] [(short)15] [i_6]) : (((/* implicit */int) (short)(-32767 - 1)))))) || (((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)-38)))))))));
                    /* LoopSeq 2 */
                    for (short i_10 = 2; i_10 < 24; i_10 += 4) /* same iter space */
                    {
                        var_33 += ((/* implicit */signed char) 14424495975022330571ULL);
                        var_34 = var_9;
                    }
                    /* vectorizable */
                    for (short i_11 = 2; i_11 < 24; i_11 += 4) /* same iter space */
                    {
                        arr_38 [i_1] [i_1] [i_6] [i_1] = ((/* implicit */signed char) var_0);
                        var_35 += ((/* implicit */signed char) ((unsigned short) arr_35 [8ULL] [(signed char)14] [i_6] [i_11 - 2]));
                        arr_39 [i_1] [i_6] [(signed char)4] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)93))));
                        var_36 += ((/* implicit */short) (+(((/* implicit */int) arr_26 [i_1 - 1] [i_6] [(unsigned char)17] [i_11 + 1] [i_6]))));
                    }
                }
            } 
        } 
    }
}
