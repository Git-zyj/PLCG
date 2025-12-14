/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49999
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
    var_15 ^= ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2552954023U)) ? (var_0) : (2042050689U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2005710188U)))) ? (((arr_0 [i_0 + 2]) ^ (((/* implicit */unsigned long long int) 1584819U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_1)))))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : ((-(arr_0 [i_0])))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) ((arr_0 [i_0 + 4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 2] [i_0])))))) : (((/* implicit */int) ((short) arr_0 [i_0 + 4])))));
        var_18 &= ((unsigned int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((14303857626714400398ULL) & (18446744073709551615ULL))))) << (((((((/* implicit */_Bool) ((unsigned int) var_13))) ? (1818566507U) : (4190842932U))) - (1818566493U)))));
        var_19 = ((/* implicit */unsigned long long int) ((max((max((arr_1 [i_0 + 4]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((short) var_4))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_7) : (max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (1234988752U))))))));
    }
    var_20 += ((/* implicit */unsigned int) (unsigned char)178);
}
