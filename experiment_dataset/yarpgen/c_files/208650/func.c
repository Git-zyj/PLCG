/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208650
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
    var_17 = ((((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) var_13))))) | (((((/* implicit */unsigned long long int) var_12)) + (var_6))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45433)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)16))))) : (((/* implicit */int) var_3))))));
    var_18 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min(((_Bool)0), (var_3)))) < ((+(((/* implicit */int) (_Bool)0)))))))) >= (min((min((arr_0 [i_0 + 1]), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned int) (short)(-32767 - 1)))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_0)))))))));
    }
}
