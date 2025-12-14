/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228417
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
    var_10 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4)))));
    var_11 = ((/* implicit */unsigned char) max((((((0ULL) << (((14005947220536578806ULL) - (14005947220536578773ULL))))) + (max((2158956985598964358ULL), (((/* implicit */unsigned long long int) 2334516844U)))))), (((/* implicit */unsigned long long int) 1960450450U))));
    var_12 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) (unsigned char)43)), (2155159171U))), (((/* implicit */unsigned int) var_9))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) ((_Bool) 17890990997981911082ULL))) : (((/* implicit */int) (signed char)-48)))) == (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_1))))))), (((unsigned char) (~(var_8)))))))));
                var_15 -= ((/* implicit */unsigned long long int) ((((long long int) (unsigned char)168)) + (((/* implicit */long long int) min((var_1), ((-(var_2))))))));
                var_16 = max((((unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6))))), (((/* implicit */unsigned long long int) ((var_1) << (((((/* implicit */int) var_7)) - (104)))))));
            }
        } 
    } 
}
