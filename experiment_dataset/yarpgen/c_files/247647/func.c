/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247647
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_4 [12ULL] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) > (var_0))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (18014394214514688ULL) : (((/* implicit */unsigned long long int) -1725862570))))) ? (2147483628) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0)))))))) : (((arr_0 [(_Bool)1]) ? (-27LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (5743873807576697575LL)))))))));
        arr_5 [i_0] = ((unsigned long long int) min((arr_3 [i_0]), (arr_3 [i_0])));
        arr_6 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [(signed char)9] [i_0])) : (((/* implicit */int) arr_3 [i_0]))))), ((+(18428729679495036920ULL)))));
        var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)70)) ? (max((((/* implicit */long long int) arr_0 [i_0])), (44LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) : (((((/* implicit */_Bool) (signed char)0)) ? (16377126767890868390ULL) : (((/* implicit */unsigned long long int) 4261412864U))))));
    }
    var_11 = ((/* implicit */unsigned char) var_5);
}
