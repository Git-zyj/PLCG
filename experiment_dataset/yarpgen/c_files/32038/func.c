/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32038
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_1)))), ((+(((((/* implicit */_Bool) (unsigned short)44371)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-26523)))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)14))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (var_13))))))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0 - 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_0 - 1]), (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(arr_1 [i_0])));
        var_16 = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_0 [i_0])))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))) ? (((var_3) - (((/* implicit */long long int) arr_1 [i_0 + 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned short)2924)))))) : (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (short)14069))))))));
    }
}
