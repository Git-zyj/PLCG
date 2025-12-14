/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234634
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
    var_17 = ((/* implicit */short) min((min((((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) var_7)) + (28155))))), (((/* implicit */int) min((var_15), (((/* implicit */short) (unsigned char)187))))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))));
    var_18 = ((/* implicit */long long int) ((((min((((/* implicit */unsigned long long int) var_6)), (var_2))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */int) (unsigned short)43565)) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_0))))))) : (((/* implicit */int) var_15))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = var_7;
        var_19 = ((/* implicit */short) (((~(min((((/* implicit */unsigned long long int) (unsigned char)37)), (var_2))))) << (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_20 &= ((/* implicit */unsigned char) var_2);
    }
}
