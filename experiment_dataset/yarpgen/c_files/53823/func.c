/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53823
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) arr_3 [i_0]))), ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)14109)) : (((/* implicit */int) arr_1 [i_0]))))))));
                var_15 = ((/* implicit */unsigned int) (~(-1055618669)));
                var_16 = ((/* implicit */int) (~(max((((((/* implicit */_Bool) (signed char)114)) ? (8687482541297670417ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)1]))))), (((/* implicit */unsigned long long int) arr_3 [i_1 - 1]))))));
                var_17 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) >> (((arr_3 [i_0]) - (1129894716U)))))) / (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 2]))) : (var_8))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_1 + 2]), (arr_0 [i_1 - 2])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))) : (min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (var_5)))));
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 7188590130129229351ULL)) ? (7188590130129229361ULL) : (((unsigned long long int) var_9)))) ^ (((((/* implicit */unsigned long long int) 1904385267)) / (((11258153943580322255ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63254)))))))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_7))));
}
