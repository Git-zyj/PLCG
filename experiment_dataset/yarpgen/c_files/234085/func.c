/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234085
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
    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) < (-987957202))))) % (((((/* implicit */_Bool) (unsigned char)72)) ? (749696357U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17883))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) (short)21991))))))));
    var_16 = max((var_11), (((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), (var_5)))));
    var_17 = ((/* implicit */unsigned int) ((_Bool) var_6));
    var_18 = var_6;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [(signed char)9] [(signed char)7]);
        arr_5 [(unsigned short)11] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) 2304717109306851328ULL)) ? (((/* implicit */int) (short)19925)) : (((/* implicit */int) var_5)))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) ((signed char) arr_2 [i_0])))));
    }
}
