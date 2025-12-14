/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4528
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
    var_19 = ((/* implicit */long long int) var_14);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+(4161082062U))))));
        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_22 |= ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) < (0U))))) * (((((/* implicit */_Bool) 4294967295U)) ? (1778088607U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        var_23 = ((/* implicit */unsigned int) ((((var_10) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) -2105340852)))))));
        arr_2 [i_0] = arr_1 [i_0];
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))) + (2129529559U))) + (((((/* implicit */_Bool) ((arr_1 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))) ? ((+(4001492520U))) : (1524825645U)))));
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 21; i_2 += 1) 
        {
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((0ULL) << (((4294967295U) - (4294967237U))))))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_2 - 1])) ? (137438953471ULL) : (18446743936270598135ULL)))) ? (arr_3 [i_2 - 1] [i_2 - 3]) : (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 2])) ? (arr_3 [i_2 + 2] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_2 - 2])))))));
            arr_7 [i_1] = ((/* implicit */unsigned long long int) (+(((unsigned int) ((unsigned short) 1524825645U)))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 3; i_3 < 21; i_3 += 1) 
            {
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_10 [(short)22] [(short)22] [i_1] [i_2 + 1]) | (arr_10 [i_1] [i_2] [i_1] [i_2 - 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_10 [i_1] [(_Bool)1] [i_1] [i_2 + 1]))) : (((arr_10 [i_2] [i_2] [i_1] [i_2 - 2]) & (arr_10 [i_2] [i_2] [i_1] [i_2 - 1])))));
                var_28 *= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned char)8] [i_1])) ? (arr_1 [i_1]) : (0ULL)))) ? (((((/* implicit */_Bool) arr_5 [12ULL])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_1] [4LL])), (var_6)))))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_2 + 1] [0] [i_2])) ? (arr_10 [i_2] [i_2 - 1] [(_Bool)1] [i_4]) : (arr_10 [i_2] [i_2 - 1] [(_Bool)1] [(_Bool)1]))))))));
                    arr_14 [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) (+(min((arr_9 [i_1] [i_1]), (-1LL)))));
                    var_30 -= ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [(_Bool)0] [i_2 + 2] [i_3 + 2] [i_4]))))) <= ((+(max((var_2), (((/* implicit */unsigned int) arr_0 [14ULL] [i_2]))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_2 - 2] [i_3] [i_4 + 2] [i_4 - 1] [i_2 - 2])) << ((((+(var_17))) - (3835727426164317782ULL)))))) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) arr_0 [i_3 + 1] [i_2 + 1]))))));
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((unsigned char) 4294967295U)))));
                        arr_19 [i_5] [i_1] [i_3] [i_1] [i_1] = ((unsigned long long int) (+(arr_6 [i_1])));
                        var_33 = ((/* implicit */unsigned int) max((var_33), ((~(arr_17 [i_2 - 3] [i_2 + 1] [i_2 - 2] [i_3] [(short)8])))));
                        var_34 = (+(((unsigned long long int) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (1511662084256110196LL)))));
                    }
                }
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((arr_1 [i_2]) / (((/* implicit */unsigned long long int) ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_1])))))))));
                        arr_26 [i_3] [i_2] [i_3] [i_6] [i_1] = ((/* implicit */signed char) ((unsigned long long int) max((var_4), (((/* implicit */unsigned int) arr_4 [i_1])))));
                    }
                    var_36 = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) arr_24 [i_1] [i_2] [17ULL] [i_3 - 1] [i_3 - 1] [i_6])))));
                }
                arr_27 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_3 - 3])) ? (arr_20 [i_1] [i_2 + 2] [i_3 + 2] [17U]) : (arr_20 [(unsigned char)0] [i_2 + 1] [i_3 + 2] [i_2 + 1])))) ? (arr_1 [i_1]) : (((((/* implicit */_Bool) 9223372036854775797LL)) ? (13934265374512866103ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                var_37 = ((((/* implicit */_Bool) -977121111)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-11890)));
            }
        }
    }
}
