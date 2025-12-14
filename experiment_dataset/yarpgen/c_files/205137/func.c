/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205137
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))) / (((unsigned int) arr_1 [i_0])))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))))))));
        var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 236538163U)) ? (540502103863066241LL) : (((/* implicit */long long int) 4058429133U))));
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) (+(((unsigned int) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_13 = arr_7 [i_1] [i_2];
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_14 -= ((/* implicit */unsigned long long int) arr_13 [i_1] [i_4] [i_3] [i_4] [i_5]);
                            var_15 ^= ((/* implicit */signed char) ((((long long int) 23ULL)) >= (((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_1] [i_2] [i_3] [i_4] [i_4])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [(short)7])) ? (((/* implicit */int) ((short) 269735217))) : (((/* implicit */int) arr_9 [i_6] [i_2] [i_1] [(short)18]))));
                var_17 *= ((/* implicit */unsigned char) var_7);
                var_18 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))));
            }
            for (short i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) arr_9 [i_7] [i_2] [i_7] [i_7])) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_7]))));
                arr_22 [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_1] [i_1] [i_2] [i_7]));
                arr_23 [14U] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22392)))))) ? (((/* implicit */int) arr_4 [i_7] [i_7])) : (((int) arr_20 [3LL] [3LL] [3LL])));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_2]))));
            }
        }
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((arr_8 [i_1] [i_8] [i_9]) ? (((/* implicit */int) arr_8 [i_1] [i_8] [(unsigned char)20])) : (((/* implicit */int) arr_8 [i_9] [i_1] [i_1])))) > ((+(((/* implicit */int) arr_8 [i_1] [11ULL] [i_1])))))))));
                    var_22 += (+(((((/* implicit */_Bool) arr_16 [4LL] [i_1] [i_8] [i_8] [(unsigned short)8])) ? (((/* implicit */int) arr_27 [i_1] [i_8] [14ULL])) : (((/* implicit */int) arr_4 [i_9] [i_1])))));
                    arr_28 [i_1] [i_1] [i_9] [i_1] = ((/* implicit */_Bool) ((int) ((arr_14 [i_1] [i_9] [i_1]) < (arr_14 [i_1] [i_9] [i_9]))));
                    var_23 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) arr_3 [2U])));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((_Bool) ((_Bool) var_6)))) : (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            {
                                arr_42 [i_14] [i_14] [i_12] = ((/* implicit */unsigned long long int) arr_33 [i_14] [i_14]);
                                arr_43 [i_14] [i_14] [i_14] [i_14] [i_12] [3LL] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_10] [5ULL] [i_10] [i_10] [i_14])) ? (((/* implicit */int) arr_16 [i_14] [i_11] [i_10] [i_11] [i_14])) : (((/* implicit */int) arr_16 [i_10] [1U] [(_Bool)1] [i_13] [i_14]))));
                                var_25 *= ((/* implicit */int) ((_Bool) (+(arr_41 [i_10] [i_10] [i_12] [i_10] [i_10]))));
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */long long int) ((arr_4 [i_10] [i_10]) ? (((/* implicit */int) arr_4 [i_10] [i_11])) : (((/* implicit */int) var_1))));
                    var_27 &= ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_12] [i_10] [i_10]))) : (arr_13 [22ULL] [i_12] [i_12] [i_12] [i_12]))) - (arr_26 [i_11]));
                }
            } 
        } 
        var_28 &= ((unsigned int) (+(-1993414943740670517LL)));
        var_29 ^= ((/* implicit */long long int) var_1);
        var_30 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [(unsigned short)14] [12U] [i_10] [i_10] [(unsigned short)14]))));
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 3) /* same iter space */
    {
        arr_47 [4ULL] &= ((/* implicit */short) ((((((/* implicit */_Bool) 203289321)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22387))) : (arr_39 [i_15] [(short)8] [2ULL] [12U] [2ULL]))) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)22] [i_15] [i_15] [9] [i_15] [(signed char)17])))));
        arr_48 [i_15] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (short)26188)))));
    }
}
