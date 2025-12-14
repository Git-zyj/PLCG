/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53750
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = ((((((2637558244U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)97))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) & (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & ((~(((/* implicit */int) var_8))))))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(16)))) ? (((/* implicit */int) ((((/* implicit */int) min((var_10), (var_5)))) < (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)1023)))))))) : ((-(-52464593)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1657409040U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))))))));
    var_20 = min((((/* implicit */long long int) ((((/* implicit */_Bool) min((1519321111097515083LL), (((/* implicit */long long int) 615792301U))))) || ((!(((/* implicit */_Bool) 15774688083483347917ULL))))))), (-8201929535127933631LL));
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((-414097029), (((/* implicit */int) var_8))))) ? (min((((/* implicit */long long int) var_0)), (1099511627775LL))) : (((/* implicit */long long int) 1038648580)))) * (((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned short) var_12)), (var_14)))))));
}
