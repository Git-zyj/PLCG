/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198008
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
    var_20 = ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-115)), (var_3)))))) ? ((-(((((/* implicit */_Bool) 8458699299381676282LL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) : (((unsigned int) min((9290174780101599079ULL), (((/* implicit */unsigned long long int) 100663296U))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_4 [9LL] = ((/* implicit */_Bool) ((((/* implicit */long long int) var_18)) % (((arr_2 [i_0]) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [4U])) >> (((/* implicit */int) (_Bool)0))))) : (max((-1939646658615047318LL), (((/* implicit */long long int) arr_1 [i_0]))))))));
        arr_5 [i_0] &= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) 1186250141U)) ? (((/* implicit */unsigned long long int) var_11)) : (9290174780101599079ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * ((-(3197582132192820610ULL)))))));
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0])), (var_15))))));
    }
}
