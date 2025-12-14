/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44506
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
    var_11 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) ^ (min((((/* implicit */unsigned long long int) var_7)), (var_4))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_13 = ((/* implicit */_Bool) min((var_13), ((!(((/* implicit */_Bool) ((arr_5 [i_1]) << (((((/* implicit */int) var_7)) - (181))))))))));
            var_14 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) min((var_10), (var_10))))))));
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(var_5))) ^ ((~(((/* implicit */int) (unsigned char)191))))))) ? (((((unsigned long long int) (unsigned char)191)) | (min((((/* implicit */unsigned long long int) var_10)), (arr_3 [i_0] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        }
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_2))));
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((arr_12 [i_2] [i_4]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_3])) && (((/* implicit */_Bool) var_9)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned char)64)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_2)))))))))));
                    arr_13 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_8 [14ULL] [i_3])))) ? (((((/* implicit */int) var_10)) | (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) arr_4 [i_2] [i_3])) : (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) arr_4 [i_2] [i_3]))))) ? (((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)57), (arr_10 [i_2] [i_2]))))))) : (min((66846720ULL), (((unsigned long long int) var_3))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) var_5);
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_5] [i_2] [i_2])) >= (((/* implicit */int) var_10))))) : (((/* implicit */int) var_6))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            arr_21 [i_2] [i_3] [11] [i_5] [i_7] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_4)));
                            var_21 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_7])) : (((/* implicit */int) (unsigned char)88))))))));
                            arr_22 [i_2] [i_5] [i_4] [i_5] [i_7] [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_3)) >> (((/* implicit */int) (_Bool)0))))));
                            arr_23 [i_2] [i_2] [i_2] [(unsigned char)1] [i_5] = ((/* implicit */int) (-(arr_9 [i_3])));
                        }
                        arr_24 [i_2] [i_3] [i_5] = ((((var_5) >= (((/* implicit */int) var_3)))) ? (((((/* implicit */_Bool) arr_9 [i_5])) ? (12021901638198247135ULL) : (arr_3 [i_5] [(unsigned char)2] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))));
                        var_23 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4)))) < (((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2] [i_8])) | (var_5))))));
                        arr_27 [(unsigned char)8] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_10 [i_2] [i_4]))))), (12734167695431043188ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_6), (var_6)))), (max((((/* implicit */int) (_Bool)1)), (var_5))))))));
                        var_26 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_10)) - (min((((/* implicit */int) (unsigned char)188)), (var_5))))));
                        var_27 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 5279236537764672385ULL))) ? (((((/* implicit */_Bool) (unsigned short)49079)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_25 [i_2] [(unsigned char)18] [(unsigned char)18])))))));
                        var_28 = ((((/* implicit */_Bool) min((((int) arr_16 [i_2] [i_2] [i_3] [i_4] [i_8] [i_2])), (((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned short)15))))))) ? ((((-(var_4))) - (var_9))) : (((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_4] [i_8])) ? (arr_26 [i_3] [i_3] [i_3] [i_3]) : (arr_26 [i_2] [i_3] [i_4] [i_8]))));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (~(var_9)))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) ((int) var_5)))))));
    }
}
