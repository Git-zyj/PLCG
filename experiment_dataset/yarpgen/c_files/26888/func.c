/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26888
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) ((unsigned int) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [13LL] [i_0])) : (((/* implicit */int) var_3))))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_3)))))))) ? (arr_2 [i_0] [i_0]) : (max((min((arr_2 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) ((short) var_15)))))));
        var_18 += ((/* implicit */short) min((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) var_4))) <= (var_15)));
    var_20 -= ((/* implicit */unsigned int) min((max((min((var_0), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (var_11)))))), (((/* implicit */unsigned long long int) ((signed char) max((var_1), (((/* implicit */long long int) var_8))))))));
}
