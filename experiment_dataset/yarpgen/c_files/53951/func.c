/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53951
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) (~(arr_2 [i_0 + 3] [4])));
        var_13 = ((/* implicit */unsigned long long int) (+((-2147483647 - 1))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (int i_2 = 4; i_2 < 15; i_2 += 4) /* same iter space */
            {
                var_14 = ((/* implicit */int) (+(arr_2 [i_2 + 1] [i_1 - 1])));
                arr_7 [4LL] [3LL] [(unsigned char)3] [(signed char)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)12] [(short)11] [6ULL])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned char)12])))))) ? (((/* implicit */int) ((short) arr_5 [(short)0] [13LL] [(unsigned char)13]))) : (((/* implicit */int) var_0))));
                arr_8 [(short)14] [11LL] [(short)14] = ((((/* implicit */int) arr_1 [i_0 - 1] [17])) / (((/* implicit */int) arr_1 [i_0 + 2] [(unsigned char)11])));
                var_15 = ((arr_0 [i_1 + 1]) == (((arr_2 [10] [3]) << (((((/* implicit */int) arr_4 [(short)12])) + (1547))))));
            }
            for (int i_3 = 4; i_3 < 15; i_3 += 4) /* same iter space */
            {
                arr_12 [1] [(unsigned char)5] [(_Bool)1] [(unsigned char)8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [(signed char)15] [14LL])) ? (arr_6 [3LL] [10ULL] [(_Bool)1] [(signed char)16]) : (((/* implicit */long long int) 2147483647)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_11 [(signed char)15])) : (((/* implicit */int) (_Bool)1)))))));
                var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_4 [3U]))) ? (arr_2 [2] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                arr_13 [12LL] [11LL] [14LL] [(_Bool)1] = ((/* implicit */unsigned short) (+(arr_6 [i_3 + 1] [i_3 - 4] [5LL] [i_3 + 3])));
            }
            for (int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                arr_18 [6ULL] [14] [11] [9ULL] = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_0 + 2] [i_1 - 1] [(unsigned short)0]))));
                arr_19 [12ULL] = ((/* implicit */short) ((((/* implicit */int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(signed char)12] [(unsigned char)6] [(unsigned char)1] [8LL])))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)87)))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))));
                var_18 = ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [(signed char)6] [14ULL])) == (((/* implicit */int) (short)-1770))))));
                arr_20 [(short)8] [17ULL] [(_Bool)1] = (~(((/* implicit */int) arr_11 [i_0 + 3])));
            }
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                arr_23 [0LL] [8ULL] [(unsigned short)15] [(_Bool)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_1 - 1] [(short)6] [i_0 + 2] [(_Bool)1])) ? (((((/* implicit */_Bool) arr_4 [11U])) ? (((/* implicit */int) arr_4 [2ULL])) : (((/* implicit */int) (short)23801)))) : (var_3)));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned char i_7 = 2; i_7 < 17; i_7 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [6LL] [i_0 + 2])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_9 [i_7 - 1] [i_1 - 1] [i_0 + 2])))))));
                            var_20 = ((/* implicit */int) ((((((/* implicit */int) arr_9 [7ULL] [(unsigned char)14] [(short)5])) << (((2980809277005463444ULL) - (2980809277005463428ULL))))) < (((((/* implicit */int) (unsigned char)83)) << (((arr_22 [12ULL] [(unsigned char)9] [(short)15]) - (2393734841U)))))));
                        }
                    } 
                } 
                arr_31 [(short)14] [(signed char)2] [16LL] [12LL] = ((/* implicit */unsigned long long int) arr_17 [17] [4ULL] [10] [15LL]);
            }
            arr_32 [(_Bool)1] [(signed char)9] = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_0 + 3] [i_1 - 1] [3] [(unsigned char)4])) * (((/* implicit */int) (short)0))));
            var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) ((long long int) (unsigned char)164))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_15 [0LL] [1])) == (807081110049172695ULL)))) : (((/* implicit */int) arr_16 [i_0 + 3] [12U] [i_0 + 2] [16LL]))))));
        }
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_29 [11ULL] [3] [(unsigned short)13] [(short)12] [(_Bool)1] [12LL] [(unsigned short)15]) << (((var_11) - (2296447384415048862ULL)))))) ? ((-(arr_25 [4] [17ULL] [(_Bool)1] [8LL] [6ULL] [4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(short)14] [16])) ? (var_5) : (((/* implicit */int) arr_28 [8ULL] [(unsigned char)2] [(_Bool)1] [6])))))));
    }
    var_23 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) -2004678206)))));
    var_24 = ((/* implicit */int) (unsigned char)208);
}
