/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197846
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
    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
    var_13 = ((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1321260893U))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65408))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((((/* implicit */unsigned long long int) var_6)), (arr_2 [i_0 - 1]))))) < ((-(((var_1) - (((/* implicit */unsigned long long int) arr_5 [i_2 + 4] [(unsigned char)8] [(unsigned char)8] [i_0 - 1])))))))))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) var_4)))))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */signed char) ((((max((((/* implicit */unsigned long long int) var_2)), (var_1))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) < (((/* implicit */unsigned long long int) var_0)))))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (((((var_0) + (9223372036854775807LL))) << (((var_1) - (1729701122982627031ULL))))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
