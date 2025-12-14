/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223822
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
    var_11 *= ((/* implicit */signed char) var_7);
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((var_8) + (var_0))) + (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)12106)) : (((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    var_13 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) min((var_2), (var_2)))) ? (var_5) : (var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) (_Bool)1);
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)62765)) : (((/* implicit */int) (unsigned short)48323)))) / (((((var_5) + (2147483647))) >> (((arr_0 [i_0] [i_0]) - (1359546843438909305LL))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */short) arr_1 [i_1]);
        arr_5 [i_1] = ((/* implicit */int) ((((var_1) != (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)20514)), (-1705563687)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_5)) > (var_0))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (-662019940008986305LL)))));
    }
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4173544690314156881LL)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (var_5))))))) : (((unsigned long long int) var_10))));
}
