/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189691
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
    var_17 = ((/* implicit */unsigned int) (((_Bool)1) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63154))))), (((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (short)5554)))))) : (((/* implicit */int) (short)4954))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((((var_11) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55581))))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)152)))) - (152))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) >= (4294967289U))))) ^ (var_2))), (((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0])))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) arr_0 [(short)3]))), (max(((unsigned char)112), ((unsigned char)152)))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) (unsigned char)162)) * (((/* implicit */int) (unsigned char)169)))))));
            arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (var_3))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_1 + 4] [(signed char)6]))))) << (((((/* implicit */int) ((unsigned short) var_15))) - (32646)))));
        }
        for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned short) (signed char)44))))) / (var_7)));
            var_21 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)83))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [3]))))));
            arr_11 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0]);
        }
    }
}
