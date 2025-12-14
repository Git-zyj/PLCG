/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32650
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((+(var_10))) << (((/* implicit */int) (!(var_0))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((var_7) ? (var_5) : (((/* implicit */unsigned int) var_4))))) : ((-(var_15))))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((long long int) var_1))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (var_15))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_2)))), (var_7)))))));
    var_18 = (+((~((-(var_6))))));
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_9))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1750564998611259822ULL), (6051655349670590951ULL)))) ? (min((min((var_12), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) (~(arr_0 [(_Bool)1])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_1), (var_1)))) ? ((~(arr_0 [i_0]))) : (((var_7) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (((+(13748294879416324897ULL))) | (((/* implicit */unsigned long long int) ((arr_1 [i_0 + 2]) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 1])))))));
        var_21 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), (((/* implicit */int) (((+(((/* implicit */int) arr_1 [i_0])))) <= (((/* implicit */int) arr_1 [i_0 + 1])))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((min((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0])))) > (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
    }
}
