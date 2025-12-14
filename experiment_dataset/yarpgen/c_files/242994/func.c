/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242994
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_12))) + (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [23U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)0)) || ((_Bool)0))) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))));
        arr_5 [i_0] = ((/* implicit */unsigned char) var_17);
    }
    for (unsigned int i_1 = 4; i_1 < 11; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (min((1058855380), (((/* implicit */int) (_Bool)0))))))), (((((/* implicit */_Bool) ((((-1058855380) + (2147483647))) << (((/* implicit */int) (unsigned char)0))))) ? (max((18ULL), (arr_3 [i_1]))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6004671167543556847LL))))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min(((~((~(arr_6 [i_1] [i_4]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) (short)31))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned short)4] [i_1]))) >= (var_17)))) : ((+(((/* implicit */int) (_Bool)1))))))))))));
                        var_21 = ((/* implicit */unsigned int) arr_12 [i_3] [i_1 + 3]);
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2] [(_Bool)1])) || (((/* implicit */_Bool) (short)-6464))))) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_14 [i_3] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_1 - 3] [(short)3] [i_1] [10] [i_1 - 1]))))), (((unsigned int) ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_10 [i_1] [i_2])))))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_17 [i_1] [i_2] [0U] [2U] [i_1] [i_4] [i_2]) ? (((/* implicit */int) arr_13 [i_1] [i_2] [(short)13] [i_4] [i_5])) : (((/* implicit */int) arr_17 [i_1] [(_Bool)1] [i_1] [i_1 + 2] [i_1] [4U] [4U]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_4] [i_5]))))))))));
                            arr_18 [i_1] [i_2] [i_3] [7U] [(signed char)7] [(short)5] = ((((((/* implicit */_Bool) arr_7 [i_1 - 3])) ? (((/* implicit */int) arr_7 [i_1 - 2])) : (((/* implicit */int) arr_7 [i_1 - 2])))) < (((/* implicit */int) (unsigned char)80)));
                            arr_19 [i_3] [14U] [i_3] [i_4] [14LL] [13ULL] [(short)6] = ((/* implicit */signed char) arr_7 [i_5]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) arr_22 [(_Bool)1] [i_2] [i_2] [8U] [(_Bool)1] [6U] [2ULL])), (arr_6 [i_1] [(short)7]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_1 + 3] [i_1 + 1] [i_1 - 4] [4U] [(unsigned char)1] [(signed char)8] [i_6])) : (((/* implicit */int) arr_17 [i_1 - 4] [i_1 + 2] [i_1 + 1] [i_4] [i_4] [(unsigned char)14] [7ULL])))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (arr_21 [5ULL] [(unsigned short)14])))) ? (arr_16 [i_1] [i_2]) : (((/* implicit */int) max((arr_15 [i_1] [(short)6] [i_3] [i_4] [(_Bool)1] [(_Bool)1]), (((/* implicit */signed char) (_Bool)1))))))))))));
                            arr_23 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_1 + 4] [i_1 + 4] [i_1 - 2] [i_1 + 3] [i_1 - 3] [i_1 + 1])))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) ((arr_2 [i_7]) == (880997309U)))) + (((/* implicit */int) max(((short)0), ((short)-30071)))))))));
        arr_27 [15LL] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [23ULL])) && (((/* implicit */_Bool) (signed char)-125))))) >= ((~(((/* implicit */int) arr_1 [i_7]))))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (-((~(((arr_25 [0] [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)9]))))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 2; i_9 < 20; i_9 += 1) 
            {
                for (unsigned int i_10 = 4; i_10 < 23; i_10 += 1) 
                {
                    {
                        var_27 = arr_28 [12U] [i_8];
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 2; i_11 < 23; i_11 += 4) 
                        {
                            var_28 = ((/* implicit */_Bool) arr_26 [10ULL]);
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((long long int) (-(arr_39 [i_9 + 3] [i_11 - 2] [(signed char)6] [i_11] [(signed char)11])))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [i_8] [i_8] [i_9 - 1] [i_11]))))) ? ((~(max((arr_2 [i_10]), (1293682262U))))) : (((unsigned int) arr_0 [i_9]))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            arr_43 [i_7] [i_7] [i_8] [i_8] [(signed char)14] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-30037))));
                            arr_44 [i_7] [i_8] [i_9] [2ULL] [i_8] = ((/* implicit */unsigned short) var_2);
                        }
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [(short)19] [(_Bool)1] [i_7] [i_7] [i_8] [(_Bool)1] [i_8])) || (((/* implicit */_Bool) arr_24 [i_7] [i_8]))))), (max((((/* implicit */unsigned long long int) min(((unsigned char)134), (((/* implicit */unsigned char) arr_35 [i_8] [(_Bool)1] [i_8] [i_7]))))), ((~(var_12)))))));
        }
    }
}
