/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48683
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
    var_20 = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20573))) | (var_8))))) | (((/* implicit */unsigned long long int) var_13))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)27912)) >= ((+(((/* implicit */int) arr_1 [i_0] [i_0])))))), ((!(((/* implicit */_Bool) 1121775464U)))))))));
        var_22 = ((/* implicit */unsigned long long int) min((min(((+(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) 4357171740521229022ULL)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 3173191831U))))) >> (((((((/* implicit */_Bool) 4357171740521229027ULL)) ? (6135005990622120758ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) - (6135005990622120742ULL)))))));
        var_23 = ((/* implicit */signed char) var_7);
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) == ((+(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min(((-(((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [2] [i_0])))))))), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) || (((/* implicit */_Bool) min((var_17), (var_1))))))))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        var_26 += ((/* implicit */short) ((16364449503977485133ULL) & (((/* implicit */unsigned long long int) 9223372036854775807LL))));
        var_27 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)4427))))) ? (((/* implicit */unsigned long long int) ((var_13) | (((/* implicit */long long int) -596887320))))) : (((arr_2 [i_1 - 1] [i_1]) - (((/* implicit */unsigned long long int) arr_4 [i_1])))));
    }
}
