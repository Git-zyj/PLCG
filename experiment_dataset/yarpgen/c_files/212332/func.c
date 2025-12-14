/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212332
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
    var_16 -= ((((/* implicit */int) (unsigned char)41)) << (((/* implicit */int) (_Bool)0)));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)247)) && ((_Bool)0)))), ((unsigned char)11))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_18 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))));
        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0]) >> (((((/* implicit */int) (unsigned short)59588)) - (59571)))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0])))) : (max((((/* implicit */int) ((short) 522429275U))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (548088766)))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (short)32767))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_11 [i_2] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) (short)28914)))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) 3772538020U))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_9)) + (102))))), (((/* implicit */int) (_Bool)0))))) : (max((((unsigned int) (unsigned char)66)), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (1182026829))))))));
                }
            } 
        } 
    } 
}
