/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34428
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((unsigned short) (_Bool)1))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_18)) % (((((/* implicit */int) (short)11907)) % (arr_2 [i_1])))))) > (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_3 [i_1])))));
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_16)) % ((+(((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-39))))) ? (((/* implicit */unsigned int) arr_2 [i_2])) : (((((/* implicit */_Bool) 6336326867821705786ULL)) ? (((/* implicit */unsigned int) arr_6 [i_2])) : (arr_7 [i_2]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_2]))))));
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            arr_12 [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) (~(arr_10 [i_2] [i_3])));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 1; i_6 < 18; i_6 += 2) 
                        {
                            arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_4] [i_3])) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((unsigned long long int) arr_2 [i_4])), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_18)))))))));
                            arr_22 [i_6] [i_6] [i_5] [i_4] [(signed char)8] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (var_11)))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(33554428U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) -8879651270521890905LL)) ? (((/* implicit */unsigned long long int) arr_7 [i_5])) : (var_14))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 4026531840U))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_4] [i_5] [i_5] [i_2])))))))))));
                        }
                        var_23 ^= ((/* implicit */unsigned int) ((-904675223) == (((/* implicit */int) (unsigned short)26953))));
                        arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 18083261774054621242ULL)) ? (1152921504598458368ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (var_17)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) : (((var_5) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (2576009416U)))) : (max((363482299654930374ULL), (((/* implicit */unsigned long long int) arr_3 [i_3]))))))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (~(((((/* implicit */int) ((((/* implicit */_Bool) 904675223)) || (((/* implicit */_Bool) arr_14 [i_5] [i_4] [i_3] [i_2]))))) * (((var_18) ? (arr_2 [i_3]) : (((/* implicit */int) var_18)))))))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */short) max((((((/* implicit */unsigned int) arr_2 [i_3])) % (arr_3 [i_2]))), (max(((-(0U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1)))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_7] [i_7] [(signed char)1]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) : (((max((((/* implicit */unsigned long long int) arr_20 [(unsigned short)14] [(unsigned short)14])), (6336326867821705778ULL))) & (((var_14) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
            arr_26 [i_7] [5] [5] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) min(((unsigned short)38603), ((unsigned short)7168)))))), (((/* implicit */int) var_6))));
        }
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            arr_29 [(short)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_24 [i_2] [i_8] [i_8])), (2777806205520921985LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-24109)), ((unsigned short)61792))))) : (((unsigned int) arr_19 [i_2] [i_8] [i_8] [(short)6] [i_2] [i_2] [16LL]))));
            arr_30 [i_8] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)24108))))) & (((((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_2] [i_2] [i_2])) ? (arr_3 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        }
        arr_31 [i_2] [6U] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15))))));
        var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_25 [i_2] [(_Bool)1] [i_2]))));
    }
    var_28 = ((/* implicit */unsigned int) min((min((((((/* implicit */int) var_0)) * (((/* implicit */int) var_12)))), (((/* implicit */int) var_7)))), (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (_Bool)1)))))));
    var_29 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967281U)) ? (4261412852U) : (4026531840U)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_2)) & (((/* implicit */int) var_1))))))));
    var_30 = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)46177))));
    var_31 = ((/* implicit */unsigned char) ((((3318404737574174258LL) % (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_16)))))) > (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
