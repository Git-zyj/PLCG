/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246730
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
    var_12 = ((/* implicit */unsigned char) ((short) max(((+(8056968504976739803ULL))), (((/* implicit */unsigned long long int) var_0)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10389775568732811812ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1866881857)) ? (((/* implicit */int) (unsigned short)52580)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) 0U)) ? (4099734870662856333LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))) : (((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (18446744073709551605ULL)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 1; i_2 < 18; i_2 += 2) /* same iter space */
            {
                arr_8 [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) arr_1 [i_2 - 1]);
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) ^ (1190259052)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_0 [i_0] [i_1 - 1])) << (((arr_3 [i_1]) - (3865743732392067851LL)))))));
                arr_9 [i_2] [(unsigned short)14] = arr_6 [i_0] [i_1];
                arr_10 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) ^ (((/* implicit */int) arr_0 [i_0] [(_Bool)1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0])))))));
            }
            for (long long int i_3 = 1; i_3 < 18; i_3 += 2) /* same iter space */
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (6826657369049393666LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */int) ((8964104083717198967LL) < (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [9LL])))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_11 [i_3] [i_1 + 1] [i_3] [i_3 + 2])) : (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (0U))))))))))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2048)) ? (((/* implicit */int) (unsigned short)10934)) : (((/* implicit */int) (unsigned char)251))))) ? ((~(arr_4 [i_3 - 1] [i_0] [i_0]))) : (arr_4 [i_3 + 3] [i_1 - 1] [i_1]))))));
            }
            var_17 *= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)8092)) : (((/* implicit */int) (unsigned short)19257))))), (((36028797018963967ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)255)) >= (((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1 - 1])) : (((/* implicit */int) (unsigned char)213))))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1 - 1] [0U])) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1] [i_1 + 1])) ? (2261094278857150258ULL) : (((/* implicit */unsigned long long int) 4294967284U))))))) ? ((+(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (8784802616644410516ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [(short)4])))))) : ((+(((((/* implicit */_Bool) arr_16 [6ULL] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [16ULL] [16ULL]))) : (15841193984697590775ULL))))));
                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))));
            }
        }
        var_20 = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0]);
    }
    for (unsigned char i_5 = 3; i_5 < 19; i_5 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (arr_4 [i_5] [i_5 - 3] [(short)1]) : (((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [(unsigned short)18])))) / (((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 2] [i_5]))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_15 [i_5 - 2] [i_5 - 3] [i_5 - 2]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1]))) / (3616668688U))))));
        arr_20 [i_5] [i_5 + 1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((int) (unsigned char)196))))), (max((((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */long long int) 0U)) : (arr_13 [i_5] [i_5] [i_5]))), (arr_13 [i_5 - 3] [i_5 - 3] [i_5])))));
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_5 + 1] [(_Bool)1] [i_5 + 1] [i_5 + 1])) >> (((((/* implicit */int) (unsigned char)202)) - (199)))))) & (arr_17 [i_5 - 1] [i_5]))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (((+(arr_13 [i_5] [i_5 - 3] [i_5]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5])) && (((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [8U]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1857))) < (8784802616644410509ULL)))) < (((/* implicit */int) arr_2 [i_5 - 3] [i_5 - 2] [i_5])))))) : (max((0U), (((/* implicit */unsigned int) (unsigned char)87)))))))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 4) 
    {
        arr_23 [i_6 - 1] = ((/* implicit */short) arr_15 [i_6 + 1] [i_6 - 1] [i_6]);
        arr_24 [i_6] [i_6 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)168)) >> (((((/* implicit */int) (short)-796)) + (800)))));
    }
}
