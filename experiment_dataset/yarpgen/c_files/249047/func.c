/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249047
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
    var_20 = ((/* implicit */short) max((((((var_10) ? (17857465995041346180ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_13))) - (((/* implicit */int) var_15)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) (short)24496))))) % (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) <= (arr_1 [(_Bool)1])))))));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) arr_0 [i_0] [i_1 + 1])), (arr_4 [i_1 + 1] [i_1] [i_1 + 1])))) | (((((/* implicit */_Bool) 3042253301U)) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 1])) : (var_16)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1898424272)), (var_14)))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0]) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) | (((/* implicit */int) var_18))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32852))) : (arr_3 [i_1 - 1] [i_1 - 1])))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_0]), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1 - 1]))))) ? ((~(((/* implicit */int) var_18)))) : (((((/* implicit */int) var_17)) / (((/* implicit */int) arr_4 [i_0] [i_0] [i_1 - 2]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)32866)), (max((((/* implicit */int) var_15)), (var_16)))))) ? (min((7092062920315524601ULL), (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) var_16))));
}
