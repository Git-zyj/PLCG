/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239287
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (((var_11) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (4194303LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) : (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (!(arr_0 [i_0] [i_0])))) >= (((/* implicit */int) (unsigned char)136)))))));
        var_14 ^= ((/* implicit */long long int) (-(((((/* implicit */int) max((arr_0 [4ULL] [i_0]), (arr_1 [i_0])))) << (((((var_10) ? (1421154650) : (((/* implicit */int) (short)8188)))) - (8171)))))));
        var_15 = ((/* implicit */unsigned int) (~(((-4194303LL) ^ (((/* implicit */long long int) ((/* implicit */int) max((var_11), (arr_1 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0]))))))))) != (((unsigned int) (+(((/* implicit */int) var_7)))))));
        var_16 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4194303LL)));
    }
}
