/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199346
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) | (((long long int) var_7))))) ? (((((/* implicit */_Bool) min((var_1), (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((var_12), (((/* implicit */long long int) var_13)))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_1)))))))))));
    var_15 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (+(((unsigned long long int) ((((/* implicit */_Bool) -3320969759917859085LL)) ? (3320969759917859082LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10785))))))));
                    var_17 = ((/* implicit */unsigned long long int) min(((short)-23125), (((/* implicit */short) (_Bool)1))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) -4672542407855669333LL)) ? (519846059U) : (arr_5 [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-23141)) && (((/* implicit */_Bool) 17940823110531141855ULL)))))))) : (((((/* implicit */_Bool) ((signed char) 2119651136U))) ? (var_6) : (((((/* implicit */long long int) ((/* implicit */int) (short)30273))) / (-683066115127519300LL)))))));
}
