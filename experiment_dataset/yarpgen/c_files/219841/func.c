/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219841
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0 + 1] &= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 6418955266542577782ULL)) ? (arr_2 [(unsigned short)13]) : (57753927))));
        arr_4 [i_0] [(_Bool)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (12027788807166973834ULL) : (((((/* implicit */_Bool) 57753927)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (2060155934971457785ULL)))));
    }
    var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(6418955266542577782ULL)))) ? (min((((((/* implicit */_Bool) 65504)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */long long int) -65520)) : (var_15)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), ((+(var_0))))))));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((/* implicit */long long int) var_6)), (var_0))))));
    var_18 = ((/* implicit */unsigned short) var_6);
}
