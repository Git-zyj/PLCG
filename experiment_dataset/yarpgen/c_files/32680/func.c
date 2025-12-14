/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32680
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
    var_13 = ((/* implicit */unsigned long long int) (+(var_10)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) (unsigned short)65517))))), (arr_1 [i_0] [i_0]))) | ((-(min((((/* implicit */int) var_9)), (var_10))))))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned int) max((var_3), (((/* implicit */unsigned long long int) 0U)))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((-725651368) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (30912)))))) : (5482015837048911973ULL))))))));
    }
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_1))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (var_2) : ((~(var_1))))) : (var_6)));
}
