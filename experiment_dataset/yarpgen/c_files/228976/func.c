/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228976
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) min((var_3), (0))))) | (max((((/* implicit */int) var_10)), (((((/* implicit */int) var_9)) & (var_5)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 *= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((((arr_0 [i_1]) / (((/* implicit */unsigned int) arr_3 [i_1] [i_1])))) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))));
                    var_15 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) | (((int) min((var_8), (((/* implicit */unsigned int) -16)))))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_5 [i_0] [i_1] [i_2 + 1] [i_2 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48654))))) - (var_8))))));
                }
            } 
        } 
        var_17 ^= (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned short) var_0))) : (-12))));
        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [(signed char)0] [(signed char)0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-40))))) : ((-((+(arr_0 [(_Bool)1])))))));
    }
    var_19 ^= ((/* implicit */short) max((var_9), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) 1466561145U))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)252)))))))));
}
