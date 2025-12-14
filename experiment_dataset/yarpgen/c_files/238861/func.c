/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238861
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
    var_12 = ((/* implicit */unsigned short) ((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [2ULL] [(short)20] [i_0] [(signed char)21] = ((/* implicit */short) ((((arr_5 [i_2 - 1] [i_0]) == (arr_2 [i_0] [i_2 + 2]))) ? (((((/* implicit */_Bool) -1331640910717751003LL)) ? (arr_2 [i_0] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2263466696127353094LL))))));
                    var_13 = ((/* implicit */unsigned long long int) (+(((long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)10])) ? (arr_6 [2ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) arr_0 [i_5])), (arr_4 [i_5] [(short)10])))))) ? (arr_3 [(short)2]) : (((/* implicit */long long int) (((((~(((/* implicit */int) (short)14289)))) + (2147483647))) >> (((1331640910717751001LL) - (1331640910717750997LL))))))));
                        var_15 = ((/* implicit */signed char) arr_5 [i_0] [i_0]);
                    }
                    for (short i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        arr_24 [i_0] [(signed char)3] = ((/* implicit */short) arr_6 [(unsigned short)10]);
                        var_16 &= ((/* implicit */short) arr_4 [(short)20] [14LL]);
                    }
                    arr_25 [(short)1] [i_0] = ((/* implicit */unsigned char) arr_14 [(unsigned char)7] [i_3] [0LL] [i_3]);
                }
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_17 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_7] [(unsigned short)12] [i_7])) ? (((/* implicit */int) min((arr_11 [9ULL]), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_22 [(unsigned short)20] [(unsigned short)2] [21LL] [(unsigned short)15])), (arr_23 [i_7]))))))), (min((((/* implicit */long long int) ((short) arr_20 [(unsigned char)15] [1LL] [(short)18] [(unsigned char)3] [(unsigned char)2] [(unsigned short)22]))), (var_10)))));
        arr_28 [(signed char)7] = var_1;
        arr_29 [(short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_15 [i_7]))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_7]))))) : ((-(arr_12 [i_7] [(short)6] [(short)15] [(unsigned char)1])))));
        arr_30 [(short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [8ULL] [(signed char)12] [14ULL] [i_7])) ? (((/* implicit */int) (unsigned short)42984)) : (((/* implicit */int) arr_1 [i_7]))));
    }
}
