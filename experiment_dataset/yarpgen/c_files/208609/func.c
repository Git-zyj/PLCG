/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208609
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (-(((((((/* implicit */int) arr_3 [i_0] [i_0])) / (((/* implicit */int) var_1)))) + (((/* implicit */int) var_10))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */unsigned int) (unsigned char)255);
                        var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */short) var_4)), (arr_2 [i_0])))) ? (((260096ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 2] [i_1]))))) << (((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_2 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (arr_8 [i_0] [i_1]))))) - (439ULL)))));
                        arr_12 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1]))));
                        arr_13 [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) ((unsigned short) 18446744073709291527ULL)));
                    }
                } 
            } 
        } 
        var_13 = var_1;
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                {
                    arr_20 [i_4] [i_5] = ((/* implicit */short) (~(((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_10 [i_0] [i_4] [i_4] [i_5] [i_5]))))));
                    arr_21 [i_0] [i_5] [i_5] [i_0] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((short) arr_17 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_9 [i_0] [i_4])) ? (arr_9 [i_0] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_28 [i_0] [i_6] [(unsigned char)9] [i_6] |= ((/* implicit */short) var_9);
                    var_14 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_6] [i_7])) < (((/* implicit */int) arr_11 [i_0] [i_0] [(short)4] [(short)4])))))))));
                    var_15 = ((/* implicit */long long int) max((260107ULL), (((((/* implicit */_Bool) var_5)) ? (260096ULL) : (((/* implicit */unsigned long long int) arr_14 [i_7] [i_6]))))));
                    var_16 += ((/* implicit */unsigned char) 18446744073709291520ULL);
                }
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)48)))) ? (((((/* implicit */_Bool) arr_29 [i_8] [i_8])) ? (arr_30 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (arr_30 [i_8])))) || (((/* implicit */_Bool) arr_29 [i_8] [i_8]))));
        var_17 = ((/* implicit */unsigned int) ((long long int) ((arr_30 [i_8]) >> (((((/* implicit */int) arr_29 [i_8] [i_8])) + (6360))))));
        var_18 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_29 [i_8] [i_8]))))) ? (min((((/* implicit */unsigned long long int) (short)4602)), (18446744073709291508ULL))) : (((arr_30 [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8] [i_8]))))))));
    }
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)5))));
}
