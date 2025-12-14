/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33178
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
    var_11 = (~(((/* implicit */int) var_2)));
    var_12 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) * (((var_8) ? (((/* implicit */unsigned int) var_1)) : (0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)48271)), ((-9223372036854775807LL - 1LL)))))))))));
    var_13 = ((/* implicit */short) ((10094462767635145963ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [(unsigned short)6] [i_0] [i_0] = ((/* implicit */_Bool) min(((((_Bool)0) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) max((var_0), (((/* implicit */short) var_8)))))));
                var_14 *= ((/* implicit */short) (_Bool)0);
            }
        } 
    } 
}
