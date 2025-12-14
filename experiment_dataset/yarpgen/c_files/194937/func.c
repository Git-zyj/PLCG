/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194937
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
    var_10 += var_8;
    var_11 = max((((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)1)))) - ((+(((/* implicit */int) (unsigned short)24724))))))), ((+(var_8))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((var_2) ? (var_8) : (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) min((((/* implicit */short) var_4)), (var_9)))))));
        arr_5 [i_0] = ((/* implicit */short) min(((+(9223372036854775807LL))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((unsigned int) var_2))) : (((((/* implicit */_Bool) arr_0 [22LL])) ? (((/* implicit */long long int) var_1)) : (arr_2 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) (unsigned short)58094)))));
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_3) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [14]))))))))));
    }
}
