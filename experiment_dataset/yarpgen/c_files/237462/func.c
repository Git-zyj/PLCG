/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237462
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_1]) : (var_10)))));
                arr_6 [(unsigned short)4] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_10)), (2914800517420902533ULL))), (((/* implicit */unsigned long long int) ((15531943556288649083ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (-((-(2914800517420902533ULL))))))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(15531943556288649074ULL)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_4 [20LL] [i_0] [10LL]))) & (arr_3 [i_0] [i_0] [i_1]))) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 15531943556288649083ULL))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4))))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((var_8), (var_8))) ? (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) 2839200788U))))) : (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((unsigned long long int) ((unsigned long long int) (signed char)-4)))));
}
