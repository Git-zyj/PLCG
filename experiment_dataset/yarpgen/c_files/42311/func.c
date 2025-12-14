/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42311
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) + (((unsigned long long int) var_1))));
    var_17 = ((/* implicit */short) 4295646968768708489ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (unsigned short)3);
                var_19 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((unsigned long long int) arr_4 [(unsigned short)8] [i_1] [i_0])) > (((((/* implicit */_Bool) 4295646968768708480ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(short)20]))) : (var_13)))))), (max((((15727865651758605320ULL) - (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) & (var_10))))))));
                var_20 = ((/* implicit */_Bool) ((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) var_15))));
}
