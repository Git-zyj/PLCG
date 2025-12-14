/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53603
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)24)) ? (((min((((/* implicit */int) var_15)), (var_4))) - (((/* implicit */int) ((var_15) && (((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) var_13))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((int) var_3)) : (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0])))));
        var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((((((/* implicit */int) arr_1 [i_0])) << (((((((/* implicit */int) var_17)) + (27360))) - (19))))), (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) var_17))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        arr_10 [(unsigned short)12] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((unsigned long long int) (-(arr_5 [i_2 - 4] [i_2 - 3]))));
                        arr_11 [i_0] [i_1] [4] [4] [i_3 - 1] = ((/* implicit */unsigned long long int) var_10);
                        arr_12 [i_0] [(signed char)16] [15ULL] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (arr_4 [i_2 - 3] [i_2 - 3] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))));
                        arr_13 [i_0] [i_1] [i_2] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) arr_0 [(short)17] [i_1])), (min((arr_4 [(signed char)17] [(signed char)17] [i_3]), (((/* implicit */unsigned long long int) arr_9 [i_3] [i_0] [i_1] [i_0])))))), (((/* implicit */unsigned long long int) var_4))));
                    }
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_22 ^= ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-22015)) ? (((/* implicit */int) (short)20468)) : (((/* implicit */int) (signed char)127))))), (min((arr_15 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) (unsigned char)197))))))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [(_Bool)0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_9 [i_2 - 1] [(_Bool)1] [i_2] [i_4])) : (((/* implicit */int) var_1)))) % (((var_8) ? (((((/* implicit */int) var_17)) + (((/* implicit */int) (unsigned char)232)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (unsigned char)195)))))))));
                        arr_19 [i_0] [i_1] [(short)19] [i_4] = (-(17988459404079937933ULL));
                    }
                    arr_20 [i_0] [i_0] = ((/* implicit */int) ((13272264697015046920ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(short)8] [i_2 - 2] [i_2 + 1])) ? (((/* implicit */int) (short)-12766)) : (((/* implicit */int) min((arr_8 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */signed char) (_Bool)1))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_25 [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_23 [i_6] [i_6] [i_6])))) != ((-(458284669629613663ULL)))));
            var_23 = ((/* implicit */_Bool) var_3);
            arr_26 [i_5] [i_5] [(signed char)3] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))));
            var_24 = ((/* implicit */signed char) ((_Bool) (signed char)0));
        }
        var_25 = ((/* implicit */unsigned long long int) ((int) 1158693064U));
        var_26 = ((/* implicit */int) min((var_26), (((int) arr_24 [i_5] [i_5] [i_5]))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7] [i_7])) ? (arr_5 [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_7]))))))));
        arr_29 [i_7] = ((/* implicit */short) arr_8 [i_7] [i_7] [i_7] [i_7]);
        arr_30 [i_7] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_0 [i_7] [i_7])) / (arr_27 [i_7])))));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        arr_33 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_15 [i_8] [i_8] [i_8 + 1] [i_8]) * (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [(_Bool)1] [i_8 + 1]))) : (((1152921504606846976ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107)))))));
        arr_34 [(short)9] [i_8] = ((/* implicit */unsigned short) arr_0 [i_8] [i_8]);
    }
}
