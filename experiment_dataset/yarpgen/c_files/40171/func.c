/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40171
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
    var_20 = ((/* implicit */unsigned int) (~(4611615649683210240ULL)));
    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_4);
        var_22 = ((/* implicit */unsigned char) (+((+(arr_1 [i_0])))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4611615649683210240ULL)) ? (5196467656452665191ULL) : (5196467656452665198ULL)));
    }
    var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -1098737244473793334LL)) ? ((+(13835128424026341384ULL))) : (((/* implicit */unsigned long long int) 4294967291U))))));
    var_25 += min((max((((/* implicit */unsigned long long int) var_14)), ((~(13835128424026341375ULL))))), (((/* implicit */unsigned long long int) var_9)));
}
