/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244299
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1871317342)) ? (max((((/* implicit */unsigned long long int) (~(var_5)))), (18446744073709551597ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)5190))))))));
    var_15 = ((/* implicit */short) max((var_9), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 796869837)) ? (-134217728) : (((/* implicit */int) (unsigned char)255))))) ? ((~(1693270041))) : (((/* implicit */int) ((short) 796869843)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) ((9223372036854775795LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)245)))))));
                var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 1693270044)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (0U))), (((/* implicit */unsigned int) min((arr_2 [i_0 - 1]), (((/* implicit */unsigned char) var_3)))))));
                var_18 = ((/* implicit */unsigned short) arr_5 [i_1] [i_0]);
                var_19 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) (~(var_5))))), (var_8)));
            }
        } 
    } 
    var_20 = ((_Bool) var_13);
}
