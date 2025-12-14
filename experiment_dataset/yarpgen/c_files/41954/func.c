/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41954
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
    var_12 = ((/* implicit */unsigned long long int) (signed char)95);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) (((~(arr_0 [i_0 - 1]))) ^ (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0]), (var_9)))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2900211204U)))) : (min((((/* implicit */unsigned long long int) (unsigned short)805)), (var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0])));
        arr_4 [i_0] [i_0 - 1] = ((((/* implicit */int) var_7)) << (((max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)58519)) : (1180475314))), (((/* implicit */int) ((((/* implicit */int) (short)-30070)) >= (((/* implicit */int) (unsigned char)102))))))) - (58504))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min(((unsigned short)38935), ((unsigned short)61151)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) 1248034144U)) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 1933945514U)))))) - (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_0 - 1]))))));
    }
    var_14 = var_1;
}
