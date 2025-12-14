/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44526
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
    var_17 *= ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (signed char)-24))));
                var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((5079504268902855789ULL), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */int) (short)2544)) : (((/* implicit */int) (signed char)71))))));
                arr_6 [(unsigned char)7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)89))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0] [i_1])))) / (((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_3 [i_0] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_0 - 2])) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_16), (((/* implicit */short) var_12)))))) < (min((((/* implicit */unsigned long long int) var_13)), (2305838611167182848ULL))))))) + (var_4)));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) var_0)) : (((unsigned long long int) var_1))))) ? (((((var_2) && (var_14))) ? (((/* implicit */int) (!(var_6)))) : (((/* implicit */int) (signed char)93)))) : ((+(((/* implicit */int) min((var_0), (((/* implicit */short) var_5))))))))))));
}
