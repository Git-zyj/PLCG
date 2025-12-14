/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191497
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((arr_2 [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) < ((+(((/* implicit */int) arr_2 [i_0]))))));
        var_19 ^= ((/* implicit */short) (+(((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) var_11))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_6 [(short)0] [i_1] = ((/* implicit */unsigned short) max((((arr_2 [i_1]) ? (10700392386105880173ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1])))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            for (unsigned short i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_9 [i_2 - 1] [i_3 + 1]), (arr_9 [i_2 - 1] [i_3 + 1]))))));
                    var_21 ^= ((/* implicit */int) arr_0 [i_3 + 1]);
                    var_22 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_3] [i_3 + 1] [(short)6])) ? (-1778058504) : (2010661614))))));
                    var_23 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (var_18))) > (((/* implicit */unsigned long long int) var_2)))), (((max((var_9), (((/* implicit */int) var_16)))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3])) && (((/* implicit */_Bool) var_15)))))))));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1])) + (((/* implicit */int) arr_10 [i_2 + 1] [0U] [i_3] [i_3 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_2] [i_3 - 2]))))) : (((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 1] [(short)1] [i_3] [i_3 - 2])))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned short) min(((+(((((/* implicit */int) var_3)) + (1230700164))))), ((-(((/* implicit */int) (unsigned short)65535))))));
}
