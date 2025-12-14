/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217419
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
    var_10 = ((/* implicit */unsigned long long int) (~(((unsigned int) (!(((/* implicit */_Bool) var_4)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_9))));
        var_12 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned char) var_2)))));
        arr_4 [(short)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_1 [2LL] [2LL])) / (((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_2 [i_0] [i_0])))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) + ((((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)15758)))))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((unsigned int) max((((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)0] [i_0]))))), (((/* implicit */long long int) var_5)))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_4))));
    }
    var_13 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) -70317675)) ^ (6022214108569209426LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))));
}
