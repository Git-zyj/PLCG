/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19353
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)45)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) (~(((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) arr_1 [i_0] [i_0])))) : ((-(((/* implicit */int) var_8))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_9), ((signed char)44)))) ? (((/* implicit */int) var_0)) : (((int) var_4)))) - ((+(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) var_4)))))))))));
        var_14 += ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) (+(var_1)))) - (((5530278543780274339ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_1] [i_1])))))));
    }
    var_15 = ((/* implicit */short) var_8);
}
