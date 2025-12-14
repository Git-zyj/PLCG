/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206696
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
    var_12 ^= ((/* implicit */short) (!(((/* implicit */_Bool) 13286779183160421732ULL))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [(_Bool)1])) == (((/* implicit */int) arr_3 [i_0])))))));
            /* LoopSeq 4 */
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_2])))))));
                var_15 = ((/* implicit */unsigned long long int) var_2);
                var_16 = ((/* implicit */unsigned short) ((signed char) arr_6 [i_0] [i_0 + 3] [i_0] [i_0 + 3]));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(5159964890549129878ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [6] [(short)7] [i_0])))))) : (var_7)));
            }
            for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) /* same iter space */
            {
                var_18 = ((((/* implicit */_Bool) (unsigned short)644)) ? (((/* implicit */unsigned long long int) arr_10 [i_0 + 4])) : (arr_2 [i_0 + 2]));
                arr_11 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */short) ((unsigned short) (_Bool)1));
                arr_12 [i_3] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5159964890549129883ULL)) ? (((/* implicit */int) arr_3 [i_3])) : (((int) 9223372036854775807LL))));
            }
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2833204681U)))));
                /* LoopSeq 3 */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [19LL] [i_4] [i_1] [10ULL]))))))))));
                    var_21 &= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    arr_17 [i_5] [19ULL] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_5] [i_4] [i_0 + 3])) : (((/* implicit */int) arr_5 [i_0 - 1] [(_Bool)0] [i_4]))));
                    var_22 = ((((/* implicit */_Bool) 5159964890549129884ULL)) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_11))));
                }
                for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0 + 2]))));
                    var_25 ^= ((/* implicit */unsigned char) var_2);
                    var_26 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 - 1] [i_1]))) + (var_5)));
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (-(-9223372036854775807LL))))));
                        arr_24 [23] [16] [i_4] [23] [i_0 + 3] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)109)))))));
                        var_28 = ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) var_11)))));
                    }
                    for (int i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (signed char)-110))));
                        var_30 |= ((/* implicit */unsigned short) (-(var_7)));
                    }
                    for (int i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
                    {
                        arr_29 [i_9] [i_6] [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0 + 1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 + 1] [i_1] [i_4] [0LL])))));
                        arr_30 [i_0] [i_1] [i_4] [(unsigned char)15] [i_9] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (arr_6 [i_0] [5ULL] [i_4] [3U])))));
                    }
                }
                for (short i_10 = 1; i_10 < 24; i_10 += 1) 
                {
                    var_31 = ((arr_0 [i_10 + 1]) / (arr_0 [i_10 - 1]));
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (arr_27 [i_0 + 4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-110)))));
                }
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_0 + 1])) ? (4976344391268831816LL) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 3]))))))));
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) var_1))))))));
                            var_35 = ((/* implicit */signed char) arr_16 [i_0 + 2] [i_1] [i_4] [i_11]);
                        }
                    } 
                } 
            }
            for (unsigned int i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
            {
                arr_43 [i_1] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)115))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)95)) >> (((/* implicit */int) arr_13 [15ULL] [i_13]))))) : (13286779183160421732ULL)));
                var_36 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_0] [i_0 - 1] [14ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_13]))) : (arr_38 [i_0] [i_0 - 1] [i_1])));
                arr_44 [i_1] [i_13] [i_13] = (-(((/* implicit */int) (signed char)109)));
            }
            /* LoopNest 3 */
            for (long long int i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                for (short i_15 = 4; i_15 < 22; i_15 += 3) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)101))));
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-109))))) ? (arr_22 [i_0] [i_0 + 1] [i_15 - 1] [i_15 - 1]) : (((((/* implicit */_Bool) arr_52 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106))) : (var_8))))))));
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */long long int) ((1153306885U) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((long long int) (signed char)101))));
                        }
                    } 
                } 
            } 
        }
        arr_54 [i_0] = ((/* implicit */unsigned char) (short)-1);
    }
    for (unsigned short i_17 = 0; i_17 < 10; i_17 += 1) 
    {
        arr_57 [i_17] = ((/* implicit */unsigned short) ((long long int) (+((+(((/* implicit */int) arr_49 [i_17] [i_17] [2] [i_17])))))));
        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) -1133268585))));
    }
}
