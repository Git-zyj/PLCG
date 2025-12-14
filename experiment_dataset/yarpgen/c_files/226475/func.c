/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226475
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
    var_14 = ((/* implicit */int) var_2);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((signed char) (unsigned short)61287))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-87)), ((unsigned short)58586))))))) > (var_5)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)-122)))) - (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) : (5008199273631096409ULL))))) : (max((5384838755357515860LL), (((/* implicit */long long int) (signed char)-1))))));
                var_17 &= ((/* implicit */long long int) 13438544800078455206ULL);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((+(((((/* implicit */_Bool) -951663165477572669LL)) ? (951663165477572669LL) : (951663165477572673LL)))))));
    var_19 = ((/* implicit */unsigned char) var_0);
}
