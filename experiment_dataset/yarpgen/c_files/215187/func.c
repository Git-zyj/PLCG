/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215187
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned long long int) (unsigned short)36892)) << (((var_2) - (3540620981U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 3] [i_0])) << (((((/* implicit */int) (unsigned short)49994)) / (((/* implicit */int) (unsigned short)9945))))))) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 863783952U)))))));
        arr_2 [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [(signed char)1])) * (((/* implicit */int) min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_0)), (var_10)))), (max((((/* implicit */unsigned short) (signed char)50)), (arr_1 [i_0]))))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((max((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (_Bool)0))))), ((((_Bool)0) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (signed char)64)))))), (((/* implicit */int) ((unsigned short) arr_1 [i_0 + 3]))))))));
    }
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((11801305489563166039ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))))))));
}
