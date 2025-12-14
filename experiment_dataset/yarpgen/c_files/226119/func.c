/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226119
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
    var_12 = ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6763835803194349956ULL)) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) var_8))));
        var_15 = var_8;
    }
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (arr_4 [i_1 + 1])))) ? (7687346711990180450ULL) : (((/* implicit */unsigned long long int) 15LL))));
        var_17 = ((/* implicit */short) (~(arr_4 [i_1])));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    var_18 = ((/* implicit */long long int) (unsigned short)58356);
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */int) arr_17 [i_1] [i_5] [i_5] [i_5] [i_5] [i_1] [i_3]);
                        var_20 = ((/* implicit */int) var_11);
                    }
                    for (short i_6 = 2; i_6 < 16; i_6 += 4) 
                    {
                        arr_23 [i_1] [13] [i_3] [(short)14] [13] [i_4] [i_2] = 0ULL;
                        var_21 = ((/* implicit */unsigned short) arr_6 [i_1]);
                    }
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_22 = var_0;
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7227640213981011866LL)) ? (281625711) : (((/* implicit */int) arr_14 [i_3] [i_4] [i_3] [i_2] [6LL] [i_1 + 1]))))) ? (var_3) : (((/* implicit */unsigned long long int) arr_16 [17LL] [i_1 - 1] [i_1 + 1]))));
                        arr_26 [i_1] [i_4] [i_2] [i_4] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) -14)) : (var_11)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        arr_27 [i_2] [i_4] [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_1] [i_4] [i_3] [i_3] [i_7] [i_7] [i_1])) ? (((/* implicit */int) arr_10 [i_1 - 1] [2ULL] [(short)15] [7ULL])) : (((/* implicit */int) (short)-1))));
                    }
                }
                var_24 = ((/* implicit */short) (unsigned short)48906);
                arr_28 [i_1] [i_2] [i_2] [(short)8] = ((/* implicit */short) -8879888534428428790LL);
            }
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            arr_35 [i_2] [i_8] [i_9] = min((18ULL), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 13ULL)) ? (2255575133351454408LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [5])))))))));
                            var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(arr_33 [i_1] [i_2] [8ULL] [8ULL] [i_10])))) | (((((/* implicit */_Bool) 6049638369388445768LL)) ? (7687346711990180437ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [1] [i_2] [1])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)-21341)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (((unsigned long long int) max((((/* implicit */long long int) arr_20 [i_10] [4LL] [i_8] [i_1] [4LL] [i_1])), (arr_33 [i_1] [16] [16LL] [i_9 - 3] [i_10]))))));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_9] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_1] [(short)5] [i_8] [i_9 + 3] [13LL] [14ULL])) ? (-1794864102831828446LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [1] [i_2] [13LL] [i_9] [i_10])) ? (((/* implicit */int) (short)26059)) : (((/* implicit */int) (unsigned short)29006)))))))) : (((((/* implicit */_Bool) ((unsigned short) 9223372036854775807LL))) ? ((-(arr_4 [i_1]))) : (((/* implicit */unsigned long long int) var_8))))));
                            var_27 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)56349)), ((~(((/* implicit */int) (short)-1))))));
                        }
                        for (unsigned short i_11 = 2; i_11 < 14; i_11 += 4) 
                        {
                            var_28 = ((/* implicit */short) arr_16 [i_1] [i_2] [i_8]);
                            var_29 = ((/* implicit */short) (unsigned short)57643);
                            var_30 -= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_16 [i_1] [i_2] [i_1]) : (63432744)))) ? (arr_30 [i_1] [i_1] [(short)9] [i_11 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            var_31 *= ((/* implicit */short) (~(9223372036854775807LL)));
                            var_32 = ((/* implicit */long long int) min((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [5] [5] [5] [i_8] [i_12])) ? (((/* implicit */unsigned long long int) arr_25 [(short)11] [i_2] [(short)11] [i_9] [(short)11])) : (min((11654481808347548855ULL), (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)20149)) ? (((/* implicit */int) arr_10 [i_9 + 2] [i_9 + 1] [i_9 - 2] [i_9 - 1])) : (arr_16 [i_9 + 3] [i_9 + 3] [i_1 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20143)) ? (18446744073709551613ULL) : (18446744073709551613ULL)))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8] [(short)14] [i_8] [(unsigned short)4] [14LL] [i_9 + 1] [(short)14])))))))));
                        }
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [(short)17] [0LL] [i_8] [i_9])) ? (((/* implicit */int) (short)0)) : (arr_6 [i_8])));
                        var_34 = ((/* implicit */long long int) var_1);
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)36541), (arr_17 [i_2] [(short)2] [(short)2] [i_1 + 1] [(short)2] [(short)2] [i_1 + 1]))))) : (var_1)));
            arr_41 [6LL] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29010)) ? (((/* implicit */int) (short)-23297)) : (1265832721)));
        }
        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)-8405)), ((((-(var_1))) << (((1270124562) - (1270124557))))))))));
    }
}
