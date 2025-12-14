/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191017
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) >> (((1893866404102643024LL) - (1893866404102643002LL)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-58))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)58))))) ? (((((/* implicit */_Bool) (signed char)-58)) ? (-2130239122) : (((/* implicit */int) (unsigned short)65535)))) : ((-(-2130239122)))))) ? (((((/* implicit */_Bool) ((1893866404102643026LL) / (6216645952402415225LL)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_2])) ? (((/* implicit */int) (unsigned char)87)) : (-2130239122))) : (var_1))) : (((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 1893866404102643026LL)))) ? (-2130239122) : (((/* implicit */int) (_Bool)1))))));
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */short) var_3);
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-5605))) | (arr_4 [i_0] [i_0] [i_2]))) & (max((((/* implicit */unsigned int) (unsigned char)173)), (var_4)))))) ? (-2130239122) : (((/* implicit */int) max((min((var_16), (((/* implicit */short) (signed char)113)))), (min((((/* implicit */short) var_7)), ((short)3968))))))));
                    var_22 = ((/* implicit */short) (+(((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) (unsigned char)33))))) : (max((((/* implicit */long long int) (short)960)), (-2332609926227931157LL)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */short) arr_4 [i_3] [i_1] [i_0]);
                        var_23 = ((/* implicit */long long int) 0);
                        var_24 = ((/* implicit */long long int) min((arr_9 [i_0] [i_2] [(unsigned short)3] [(unsigned short)3] [i_2]), (((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) ((unsigned char) (short)23697))) : ((-(((/* implicit */int) (unsigned short)65535))))))));
                    }
                }
            } 
        } 
    } 
}
