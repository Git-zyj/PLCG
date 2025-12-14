/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228126
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_10))));
    var_14 |= ((/* implicit */unsigned short) (_Bool)1);
    var_15 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (2933823486U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11608)))))) ? (((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (unsigned short)15219)) : (((/* implicit */int) (unsigned short)40252)))) : (((/* implicit */int) (signed char)76))))) ? (((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34875)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned char)241))))) : (((((/* implicit */_Bool) (unsigned short)30660)) ? (9007199246352384ULL) : (((/* implicit */unsigned long long int) 885658749)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23085)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62618))) : (3874191707U))))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)23076)) ? (((/* implicit */unsigned long long int) 1812450466)) : (4718296835164974339ULL))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)-64))))))));
            }
        } 
    } 
}
