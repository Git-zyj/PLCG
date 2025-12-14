/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33222
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (((~(((/* implicit */int) (short)-27424)))) ^ (((((((/* implicit */int) (short)-27424)) + (2147483647))) >> (((/* implicit */int) arr_1 [i_0])))))))));
        var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-32673))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)127))))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_20 *= ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((arr_9 [i_1] [i_2] [i_2] [i_3] [i_4]) - (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (short)27410)))))))) : (((((unsigned long long int) var_1)) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                        var_21 |= ((/* implicit */signed char) max((max(((((_Bool)1) ? (arr_9 [i_1] [i_2] [i_1] [i_1] [(signed char)11]) : (((/* implicit */int) (short)4442)))), (((/* implicit */int) (short)15)))), (((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-27408)))) ^ ((~(((/* implicit */int) (short)-27408))))))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_22 *= (_Bool)1;
                            var_23 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_5] [i_1] [i_1] [i_1])))))) > (min((8284259034800634217ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)27408))))))));
                        }
                        for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            arr_20 [i_3] [i_3] = ((/* implicit */_Bool) 1995937845);
                            var_24 ^= ((/* implicit */_Bool) ((((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min(((_Bool)1), ((_Bool)0))))))));
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            arr_26 [i_8] [i_7] [16ULL] [i_2] [i_1] &= 11392026998914440068ULL;
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_3])) && (((max((((/* implicit */int) (short)3994)), (-1))) != (arr_9 [i_1] [i_2] [i_3] [i_7] [i_8])))));
                            var_26 |= (-(((((/* implicit */int) var_10)) / ((-(((/* implicit */int) arr_6 [i_1] [i_1])))))));
                        }
                        var_27 *= ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) arr_5 [i_2])), ((short)30464))))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) != ((+(((int) (_Bool)1))))));
                        var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (var_6))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)63)) - (((/* implicit */int) (_Bool)1))))))))));
                    }
                    var_30 = ((/* implicit */_Bool) min((((/* implicit */short) (signed char)-75)), (var_12)));
                    arr_27 [i_3] = ((/* implicit */unsigned long long int) (!(((((((/* implicit */int) arr_16 [i_1] [i_2] [i_1] [i_1])) + (((/* implicit */int) arr_11 [i_1] [i_1])))) >= (((((/* implicit */_Bool) -2147483639)) ? (((/* implicit */int) (_Bool)1)) : (-1149598662)))))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */signed char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) 16904426923455027816ULL))))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) 1)))))))));
                                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_1] [i_2] [(_Bool)1] [i_2] [i_1]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_10), (((/* implicit */short) var_16)))))))) ? (((/* implicit */unsigned long long int) (+(((int) var_1))))) : (9321485351950001744ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        var_33 += ((/* implicit */short) (((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (11893094660876140607ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) (_Bool)0))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(-1137729082))))))))));
        var_34 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((int) arr_23 [i_11] [i_11] [i_11] [i_11] [i_11]))))) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)-68)))), (((/* implicit */int) arr_29 [i_11] [i_11] [i_11]))))) : (max((arr_8 [i_11] [i_11] [i_11]), (((/* implicit */unsigned long long int) var_11))))));
        var_35 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) ^ ((~(((/* implicit */int) (_Bool)1))))));
        var_36 = ((/* implicit */_Bool) ((arr_8 [i_11] [i_11] [i_11]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) (!((_Bool)1)))) : (max((-1995937848), (((/* implicit */int) var_3)))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 4) 
        {
            {
                var_37 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-27437))));
                var_38 = ((/* implicit */short) max((max((-2), (((/* implicit */int) ((signed char) arr_2 [16]))))), (((/* implicit */int) arr_14 [i_12] [i_12] [i_12]))));
                var_39 = ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_12] [i_12] [i_12])) * ((-(1)))));
                /* LoopNest 3 */
                for (short i_14 = 1; i_14 < 20; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        for (signed char i_16 = 4; i_16 < 18; i_16 += 4) 
                        {
                            {
                                var_40 = (+(((/* implicit */int) ((_Bool) arr_31 [i_14] [i_14 - 1] [i_14 - 1] [i_12]))));
                                var_41 = ((/* implicit */signed char) 15031512713630362566ULL);
                                var_42 = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
