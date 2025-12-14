/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219704
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
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-7638872701827988746LL)))) ? (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] = (unsigned char)228;
                var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) > (((/* implicit */int) max((arr_0 [i_1] [i_0]), (arr_0 [i_0] [i_0]))))))));
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 15; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) max(((short)32094), (((/* implicit */short) (unsigned char)15))))) != (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)240)), (488655976U)))) ? ((~(((/* implicit */int) (signed char)122)))) : (((((/* implicit */int) (unsigned char)199)) & (((/* implicit */int) (unsigned char)240))))))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)222))))) | (arr_10 [i_0] [(signed char)16] [i_2] [i_3]))) : (((((/* implicit */_Bool) min(((unsigned char)127), (arr_0 [i_1] [i_1])))) ? (min((((/* implicit */unsigned long long int) (unsigned char)235)), (arr_3 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)12)) & (((/* implicit */int) (unsigned char)240)))))))));
                        arr_11 [i_0] [i_1] [1U] [i_1] = ((/* implicit */unsigned int) (unsigned char)232);
                    }
                    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_2 + 3] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 1] [i_2 + 2]))) : (arr_9 [i_0] [i_2 - 1] [i_2 + 1] [i_2]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)21)) | (((/* implicit */int) (unsigned char)24))))) ? (min((arr_4 [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) (short)18551))))))));
                }
                var_19 = ((/* implicit */unsigned int) ((max((max((((/* implicit */unsigned long long int) (unsigned short)34806)), (arr_10 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8805554896260009133LL)) ? (((/* implicit */int) (short)-21670)) : (65535)))))) & (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1])) ? (arr_9 [(unsigned short)2] [i_1] [i_1] [i_1]) : (arr_9 [i_0] [i_1] [i_1] [i_1])))));
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_6] [i_5] [i_6] [i_6] [i_4] = arr_4 [i_4] [i_4];
                                arr_23 [i_6] [i_1] [i_4] [i_5 - 2] [i_6 + 1] = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) == (((((/* implicit */_Bool) ((15LL) & (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_5])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1073741823LL)) || (arr_13 [i_6 + 2] [i_5])))) : (((/* implicit */int) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_4] [i_5]))))))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_1] [i_4] [6] &= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)49))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4]))))) : (((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_4]) : (arr_3 [i_0])))));
                    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (unsigned short)51133))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) | (arr_21 [i_1]))))) ? (arr_21 [i_0]) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)76)) : (-1824047463))))))));
                }
                for (long long int i_7 = 2; i_7 < 14; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 4) 
                    {
                        arr_30 [i_0] [i_1] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) | ((~(((((/* implicit */int) (unsigned short)51131)) | (((/* implicit */int) (unsigned char)211))))))));
                        arr_31 [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_12 [i_0]);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) arr_19 [i_0]);
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)24)) / (((/* implicit */int) (signed char)-1))));
                    }
                }
                for (unsigned long long int i_10 = 4; i_10 < 17; i_10 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) (!(((((/* implicit */int) (signed char)66)) <= (((/* implicit */int) (unsigned short)12688))))));
                    arr_37 [(unsigned char)7] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 115829614U))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 3; i_12 < 16; i_12 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_12 + 2]))));
                                arr_43 [8ULL] [i_11] [i_11] [i_11 - 1] [i_12] [4U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)62)) ? (-894407850) : (((/* implicit */int) arr_20 [i_11]))))) ? (((/* implicit */unsigned long long int) min((arr_15 [i_0] [i_1] [i_12]), (var_11)))) : (max((((/* implicit */unsigned long long int) (unsigned char)20)), (arr_26 [i_11])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)23)) ^ (((/* implicit */int) (signed char)75)))))))) : (((/* implicit */int) ((15778977820291412196ULL) == (arr_17 [i_12 - 1]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_10] [i_10 - 4] [i_10] [i_10 - 2] [i_10])) ? (((/* implicit */int) arr_32 [i_10] [i_10 - 4] [i_1])) : (((/* implicit */int) (signed char)12))))) ? (((18089654951646690215ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)75)))))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)72)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))))));
                }
            }
        } 
    } 
}
