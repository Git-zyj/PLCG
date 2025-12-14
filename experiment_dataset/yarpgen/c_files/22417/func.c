/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22417
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_14))));
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) (!((_Bool)1)));
        var_19 *= min((((/* implicit */long long int) (+(((/* implicit */int) ((70368744177664LL) == (arr_2 [(signed char)2]))))))), (((((8402227359992223394LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))))) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2]))))));
    }
    for (long long int i_1 = 1; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((_Bool) ((arr_7 [i_1 - 1] [i_2 + 1]) ? ((+(arr_3 [14U] [(signed char)9]))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-13981)) + (((/* implicit */int) (unsigned char)120))))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 24; i_3 += 1) 
            {
                arr_10 [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((signed char) arr_3 [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_3] [i_2]))))) : (arr_4 [i_1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)45)))))));
                arr_11 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)82)))))));
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 23; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_5] [i_4] [i_1] [i_2] [6U] = ((/* implicit */short) (~(((/* implicit */int) max((arr_6 [i_1] [i_1 + 1] [(signed char)21]), ((!(((/* implicit */_Bool) 15397631855543595260ULL)))))))));
                            arr_18 [(unsigned short)2] [i_1] [i_3] [(signed char)16] [i_3 + 1] = ((/* implicit */long long int) max((arr_8 [i_2 + 1] [i_3 - 1] [i_3 - 1] [i_1 + 1]), (arr_8 [i_2 - 1] [i_3 + 1] [i_4 + 1] [i_1 - 1])));
                            var_21 = ((/* implicit */short) min((((arr_4 [i_1 - 1]) >> (((arr_4 [i_1 - 1]) - (3237203257412716065ULL))))), (18446744073709551615ULL)));
                            var_22 += ((/* implicit */short) ((((/* implicit */_Bool) 1365346028U)) ? (4294967295U) : (((/* implicit */unsigned int) -472683995))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) arr_3 [i_4 + 2] [i_1 + 1])) ? (arr_3 [i_5] [i_2 + 1]) : (arr_3 [i_1 + 1] [(_Bool)1]))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))) || (((/* implicit */_Bool) 1073741568))));
                arr_19 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */unsigned long long int) -1073741569)) : (9060160094558501731ULL))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)255)))));
            }
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [(unsigned char)12])) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (arr_15 [i_1] [i_2] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [2LL] [i_1 + 1] [2LL]))))))) : (((((/* implicit */_Bool) arr_9 [(unsigned char)18])) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) arr_16 [i_2] [i_2] [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_1 + 1])))) : (arr_5 [0LL] [i_1 - 1] [0LL]))))))));
        }
        arr_20 [i_1] [i_1] = ((/* implicit */unsigned short) arr_14 [i_1]);
    }
    /* vectorizable */
    for (unsigned int i_6 = 3; i_6 < 13; i_6 += 2) 
    {
        var_26 |= ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_12 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1]))))));
        var_27 = ((/* implicit */unsigned char) (+(arr_0 [i_6 - 3])));
        var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 284300335U)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [i_6] [i_6 - 1] [i_6] [i_6])) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) var_11)) / (arr_5 [10LL] [i_6 - 2] [i_6])))));
        var_29 = ((/* implicit */unsigned int) arr_2 [i_6 - 3]);
    }
}
