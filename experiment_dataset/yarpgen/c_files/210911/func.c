/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210911
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) 654861893);
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((var_9), (var_10)))))) ? ((-(((/* implicit */int) arr_4 [i_0] [i_1])))) : ((-(((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) var_11))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) min((var_18), (var_12)));
    var_19 = ((/* implicit */short) ((_Bool) var_14));
    var_20 += ((/* implicit */signed char) max((((/* implicit */unsigned int) var_5)), ((-((~(4294967295U)))))));
}
