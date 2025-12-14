/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24647
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
    var_17 ^= ((/* implicit */unsigned int) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-114)) + (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)102))))) : (max((((/* implicit */unsigned long long int) (signed char)-23)), (18446744073709551615ULL)))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1])))), (max((1004916346), (((/* implicit */int) arr_1 [i_0 - 1])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_0])))) && (((/* implicit */_Bool) arr_1 [i_0 - 1]))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)100))))) | (((((/* implicit */unsigned int) -1295475487)) & (1746134591U)))))), (min((((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_1 - 3] [2U])), (18446744073709551605ULL)))));
            var_20 += ((/* implicit */int) ((((((/* implicit */_Bool) min((-46831701), (-457139955)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(signed char)9])) || (((/* implicit */_Bool) arr_1 [i_1 - 4]))))) : (((/* implicit */int) (_Bool)1)))) < (((((/* implicit */int) (!((_Bool)1)))) + (max((arr_4 [i_1 - 3] [(unsigned short)16] [i_0 - 1]), (arr_4 [(unsigned short)10] [12U] [12U])))))));
            arr_6 [i_1] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((unsigned int) 411579930))) ? ((-(2147483647))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 1])))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_11 [i_3] [i_2 + 1] [i_0 - 1])) : (((/* implicit */int) arr_11 [i_3] [i_2 + 2] [i_0 - 1])))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_3]))))) != (((((/* implicit */_Bool) 131071)) ? (4294967281U) : (((/* implicit */unsigned int) arr_4 [i_3] [(_Bool)1] [i_0 - 1]))))));
                var_23 &= ((/* implicit */_Bool) ((arr_7 [i_0 - 1] [i_2 + 3]) ? (arr_4 [i_0 - 1] [(signed char)10] [i_2 + 2]) : (((/* implicit */int) arr_7 [i_0 - 1] [i_2 + 3]))));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [0] [i_0 - 1])) ? (arr_4 [i_0 - 1] [(unsigned short)4] [i_0 - 1]) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                var_25 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)1)) << (((arr_9 [i_2 - 1] [i_2] [i_0 - 1] [i_0]) + (1335558296)))));
            }
            for (int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0]))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        {
                            var_27 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (arr_12 [i_5 + 2]) : (arr_12 [i_5 + 1])));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5 + 2] [i_6] [i_0])) ? (arr_4 [i_5 + 4] [i_6] [3U]) : (((/* implicit */int) arr_13 [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 1]))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_19 [3] [i_7])) ? (((/* implicit */unsigned int) arr_14 [(_Bool)1] [14U] [i_7])) : (3865653513U))) % (arr_15 [i_2] [9ULL] [i_2 + 1] [13])));
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_0 - 1] [i_2 - 1] [i_7])) | (((/* implicit */int) arr_21 [i_0 - 1] [i_2 + 2] [i_7]))));
            }
            for (int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
            {
                arr_26 [i_8] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)9358))))) / (arr_12 [i_0 - 1])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        {
                            var_31 += ((/* implicit */_Bool) arr_0 [i_0 - 1]);
                            arr_32 [i_0] [i_0] [i_9] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_9] [i_8] [i_0 - 1] [i_0 - 1])) ? (13004283638196212894ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [7U] [7U] [i_2 + 1])))));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_0] [i_0 - 1] [i_0 - 1] [i_2 + 1])) ? (arr_29 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 + 1]) : (arr_29 [i_0] [i_0 - 1] [i_0 - 1] [i_2 + 1]))))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 - 1] [i_9])) ? (arr_4 [i_2 + 1] [i_9] [i_0 - 1]) : (arr_9 [i_0] [i_2] [i_8] [i_9])));
                            arr_33 [i_9] [2ULL] = ((((/* implicit */unsigned long long int) (((_Bool)1) ? (2807481877U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55343)))))) * (((unsigned long long int) arr_24 [14] [11ULL] [i_8] [i_8])));
                        }
                    } 
                } 
            }
            var_34 = ((/* implicit */int) ((arr_31 [12U] [i_0 - 1] [i_2]) != (((/* implicit */unsigned int) arr_4 [i_0 - 1] [(signed char)6] [i_2 - 1]))));
        }
        for (unsigned short i_11 = 3; i_11 < 16; i_11 += 1) 
        {
            var_35 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(255U)))) ? (max((arr_16 [i_11 - 3]), (arr_16 [i_11 - 3]))) : (max((arr_16 [i_11 - 1]), (arr_16 [i_11 - 3])))));
        }
    }
    for (unsigned int i_12 = 3; i_12 < 10; i_12 += 1) 
    {
        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (unsigned short)12))));
        arr_40 [i_12 - 3] = (-(max((((arr_34 [i_12] [8ULL] [8ULL]) ? (arr_12 [9U]) : (((/* implicit */unsigned int) 16380)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_12 - 3] [i_12] [i_12 + 3] [i_12 - 3] [i_12] [6U])) ? (((/* implicit */int) arr_27 [(signed char)5] [i_12 - 1] [i_12])) : (((/* implicit */int) arr_27 [i_12] [i_12 - 2] [9ULL]))))))));
    }
    var_38 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((1366491996), (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))))));
    var_39 = max((((((/* implicit */_Bool) max((((/* implicit */signed char) var_15)), (var_16)))) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))))));
}
