/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226325
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
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) % (((/* implicit */int) arr_2 [6LL] [i_0 - 1]))))) * (((arr_1 [i_0]) % (arr_1 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32753))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88))) : (arr_1 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) % (arr_1 [i_0]))), (max((arr_1 [i_0]), (arr_1 [i_0]))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) * (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_1 [i_0])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1])) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1]))) == (arr_7 [i_0] [i_1 - 2]))))) % (((arr_7 [i_0] [i_1 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 1] [i_0]))))))))));
            /* LoopNest 2 */
            for (short i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) ((((((/* implicit */int) arr_11 [i_0] [9LL] [i_0])) | (((/* implicit */int) arr_0 [i_0 + 2])))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) == (arr_5 [i_0 + 2] [i_0]))))));
                        arr_14 [i_1] [i_1] [i_1] [i_3] |= ((/* implicit */short) ((((((/* implicit */int) arr_10 [i_0] [14U] [14U] [i_3])) % (((/* implicit */int) arr_2 [i_0] [i_1])))) % (((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (signed char)-110))))));
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned int) ((((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))) * (((arr_5 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))));
            var_16 = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_17 = ((/* implicit */short) arr_1 [i_4]);
        arr_19 [i_4] = ((/* implicit */unsigned long long int) arr_11 [i_4] [i_4] [i_4]);
    }
    var_18 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (var_5))))) ? (((((/* implicit */int) max((((/* implicit */short) var_7)), (var_12)))) / (((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) var_1))));
}
